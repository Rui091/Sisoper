#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>

using namespace std;

/*"""
ET - MEM - SET D1 X NULL NULL, Store X value in D1 memory address. where X is an
immediate, direct or constant value. When SET instruction is read the X value is stored in
Memory without processor execution.
LDR - LOAD - LDR D3 NULL NULL Load the value in D3 memory address and puts in
accumulator register
ADD - ADDITION - There are three ways: ADD D1 NULL NULL, adds the value in D1 memory
address to loaded value in accumulator register. ADD D1 D3 NULL Load the value in D1
memory address in the accumulator register and add to found value in D3 memory address.
ADD D1 D3 D4 same that ADD D1 D3 but puts the result in D4
INC - INCREMENT - INC D3 NULL NULL Load the value in D3 memory address adds 1 and
store in same address
DEC - DECREMENT - DEC D3 NULL NULL Load the value in D3 memory address adds 1 and
store in same address
STR - STORE - STR D3 NULL NULL Read the value in accumulator register and puts in D3
memory address
SHW - SHOW - SHW D2 NULL NULL show the value in D2 memory address, SHW ACC show
the value in accumulator register, SHW ICR show the value in ICR register, SHW MAR show
the value in MAR register, SHW MDR show the value in MDR register, SHW UC show the
value in Control Unit.
PAUSE - PAUSE - PAUSE NULL NULL NULL stop the instruction cycle and allow SHOW
register values and memory values at any time
END - FINISH READING INSTRUCTION
"""
*/

class Simulator {
private:
    int memory[1000] = {0};
    int accumulator = 0;
    string controlUnit;
    string currentInstruction;
    string memoryAddressRegister ;
    string memoryDataRegister;
    int programCounter = 0;

public:
    int registerToint(string reg){
        for (int i = 0; i < reg.size(); i++) {
            if (reg[i] == 'D') {
                return stoi(reg.substr(i+1));
            }
        }
        return -1;
    }
    void executeInstruction(const string &instruction){
        programCounter++;
        stringstream ss(instruction);
        string command;
        ss >> command;
        if (command == "PAUSE") {
            cout << "ACC: " << accumulator << endl;
            cout << "ICR: " << currentInstruction << endl;
            cout << "MAR: " << memoryAddressRegister << endl;
            cout << "MDR: " << memoryDataRegister << endl;
            cout << "UC: " << controlUnit<< endl;    
            }
        else if (command == "SET") {
            string reg, value;
            ss >> reg >> value;
            memoryAddressRegister = reg;
            memoryDataRegister = value;
            int x = registerToint(reg);
            memory[x] = stoi(value);

        } else if (command == "LDR") {
            string reg;
            ss >> reg;
            memoryAddressRegister = reg;
            int x = registerToint(reg);
            accumulator = memory[x];
            memoryDataRegister = accumulator;

        } else if (command == "ADD") {
            string reg1, reg2, reg3;
            memoryDataRegister = currentInstruction;
            ss >> reg1 >> reg2 >> reg3;
            int reg1Int = registerToint(reg1);
            int reg2Int = registerToint(reg2);
            int reg3Int = registerToint(reg3);
            if (reg2 == "NULL" && reg3 == "NULL") {
                accumulator += memory[reg1Int];
            } else if (reg3 == "NULL") {
                accumulator = memory[reg1Int] + memory[reg2Int];
                memoryDataRegister = to_string(accumulator);
                memoryAddressRegister = reg2;
            } else {
                memoryAddressRegister = reg3;
                memory[reg3Int] = memory[reg1Int] + memory[reg2Int];
                memoryDataRegister = to_string(memory[reg3Int]);
            }
        } else if (command == "INC") {
            string reg;
            ss >> reg;
            int x = registerToint(reg);
            memory[x]++;
            accumulator = memory[x];
            memoryDataRegister = to_string(memory[x]);
            memoryAddressRegister = reg;
        } else if (command == "DEC") {
            string reg;
            ss >> reg;
            int x = registerToint(reg);
            memory[x]--;
            accumulator = memory[x];
            memoryDataRegister = to_string(memory[x]);
            memoryAddressRegister = reg;
        } else if (command == "STR") {
            string reg;
            ss >> reg;
            int x = registerToint(reg);
            memory[x] = accumulator;
            memoryDataRegister = to_string(memory[x]);
            memoryAddressRegister = reg;
        } else if (command == "SHW") {
            string reg;
            ss >> reg;
            if (reg == "ACC") {
                cout << "ACC: " << accumulator << endl;
            } else if (reg == "ICR") {
                cout << "ICR: " << currentInstruction << endl;
            } else if (reg == "MAR") {
                cout << "MAR: " << memoryAddressRegister << endl;
            } else if (reg == "MDR") {
                cout << "MDR: " << memoryDataRegister << endl;
            } else if (reg == "UC") {
                cout << "UC: " << controlUnit<< endl;
            } else {
                int x = registerToint(reg);
                cout << reg << ": " << memory[x] << endl;
            }
        } else if (command == "END") {
            cout << "END" << endl;
        }
        if (programCounter > 1 && command != "END" && command != "PAUSE") {
            controlUnit = currentInstruction;
        }

        
    }

    void loadProgram(const string &filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cerr << "Failed to open file: " << filename << endl;
            return;
        }

        while (getline(file, currentInstruction)) {
            executeInstruction(currentInstruction);
        }

        file.close();
    }
};

int main() {
    Simulator simulator;
    simulator.loadProgram("programa1.txt");
    return 0;
}
