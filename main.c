#include "monty.h"
int main() {
    instruction_t instruction;
    instruction.opcode = "yo";
    printf("%s", instruction.opcode);
    return 0;
}