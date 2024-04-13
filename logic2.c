#include <stdio.h>
/*OLWASI LINDA ENE212-0146/2021
    JOSHUA KWEMBOI ENE212-0088/2021
    FEDLEY SIKOLIA ENE212-0183/2021
    SOSPETER NG'ANG'A
    BRIAN OMARIBA */
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

// Define boolean logic functions
int AND(int a, int b) {
    return a && b;
}

int OR(int a, int b) {
    return a || b;
}

int NOT(int a) {
    return !a;
}

int NOR(int a, int b) {
    return !(a || b);
}

int NAND(int a, int b) {
    return !(a && b);
}
int XOR(int a, int b){
    return (a^b);
}

int XNOR(int a, int b){
    return !(a^b);
}

// Function to generate truth table for a given logic function
void generateTruthTable(int (*logicFunc)(int, int), char *gateName, int inputA, int inputB) {
    printf("Truth table for %s gate:\n", gateName);
    printf("Input A | Input B | Output\n");
    printf("--------+---------+--------\n");
// Loop through all possible input combinations
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            printf("   %d    |    %d    |   %d\n", a, b, logicFunc(a, b));
        }
    }
}

int main() {
    int choice, inputA, inputB;

    // Prompt user to select gate
    printf("Select gate:\n");
    printf("1. AND\n");
    printf("2. OR\n");
    printf("3. NOT\n");
    printf("4. NOR\n");
    printf("5. NAND\n");
    printf("6. XOR\n");
    printf("7. XNOR\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
case 4:
            // Prompt user for inputs A and B for NOR gate
            printf("Enter input value for A (0 or 1): ");
            scanf("%d", &inputA);
            printf("Enter input value for B (0 or 1): ");
            scanf("%d", &inputB);
            printf("Output: %d\n", NOR(inputA, inputB));
            generateTruthTable(NOR, "NOR", inputA, inputB);
            break;
        case 5:
            // Prompt user for inputs A and B for NAND gate
            printf("Enter input value for A (0 or 1): ");
            scanf("%d", &inputA);
            printf("Enter input value for B (0 or 1): ");
            scanf("%d", &inputB);
            printf("Output: %d\n", NAND(inputA, inputB));
            generateTruthTable(NAND, "NAND", inputA, inputB);
            break;
        case 6:
            printf("Enter input value for A (0 or 1): ");
            scanf("%d", &inputA);
            printf("Enter input value for B (0 or 1): ");
            scanf("%d", &inputB);
            printf("Output: %d\n", XOR(inputA, inputB));
            generateTruthTable(XOR, "XOR", inputA, inputB);
            break;
        case 7:
            printf("Enter input value for A (0 or 1): ");
            scanf("%d", &inputA);
            printf("Enter input value for B (0 or 1): ");
            scanf("%d", &inputB);
            printf("Output: %d\n", XOR(inputA, inputB));
            generateTruthTable(XNOR, "XNOR", inputA, inputB);
            break;
    
            default:
            printf("Invalid choice!\n");
            break;
}

    return 0;
}

  
