#include <stdio.h>

// Function prototypes
int AND(int, int);
int OR(int, int);
int NOT(int);
int NAND(int, int);
int NOR(int, int);
void printTruthTable(int choice);
void simulateGate(int choice);

int main() {
    int choice;

    // Menu for the user
    printf("Digital Logic Gate Simulator with Truth Tables\n");
    printf("1. AND Gate\n");
    printf("2. OR Gate\n");
    printf("3. NOT Gate\n");
    printf("4. NAND Gate\n");
    printf("5. NOR Gate\n");
    printf("Select a gate (1-5): ");
    scanf("%d", &choice);

    // Simulate the logic gate based on user inputs
    simulateGate(choice);

    // Display the truth table for the selected gate
    printTruthTable(choice);

    return 0;
}

// Function definitions
int AND(int a, int b) {
    return a & b;
}

int OR(int a, int b) {
    return a | b;
}

int NOT(int a) {
    return !a;
}

int NAND(int a, int b) {
    return !(a & b);
}

int NOR(int a, int b) {
    return !(a | b);
}

void simulateGate(int choice) {
    int input1, input2, result;

    switch(choice) {
        case 1:
        case 2:
        case 4:
        case 5:
            printf("Enter first input (0 or 1): ");
            scanf("%d", &input1);
            printf("Enter second input (0 or 1): ");
            scanf("%d", &input2);
            break;
        case 3:
            printf("Enter input (0 or 1): ");
            scanf("%d", &input1);
            break;
        default:
            printf("Invalid choice.\n");
            return; // Exit the function
    }

    switch(choice) {
        case 1:
            result = AND(input1, input2);
            break;
        case 2:
            result = OR(input1, input2);
            break;
        case 3:
            result = NOT(input1);
            break;
        case 4:
            result = NAND(input1, input2);
            break;
        case 5:
            result = NOR(input1, input2);
            break;
        default:
            printf("An error occurred.\n");
            return; // Exit the function
    }

    printf("Result: %d\n", result);
}

void printTruthTable(int choice) {
    printf("\nTruth Table\n");

    switch(choice) {
        case 1: // AND
            printf("A B | Y\n");
            printf("0 0 | %d\n", AND(0, 0));
            printf("0 1 | %d\n", AND(0, 1));
            printf("1 0 | %d\n", AND(1, 0));
            printf("1 1 | %d\n", AND(1, 1));
            break;
        case 2: // OR
            printf("A B | Y\n");
            printf("0 0 | %d\n", OR(0, 0));
            printf("0 1 | %d\n", OR(0, 1));
            printf("1 0 | %d\n", OR(1, 0));
            printf("1 1 | %d\n", OR(1, 1));
            break;
        case 3: // NOT
            printf("A | Y\n");
            printf("0 | %d\n", NOT(0));
            printf("1 | %d\n", NOT(1));
            break;
        case 4: // NAND
            printf("A B | Y\n");
            printf("0 0 | %d\n", NAND(0, 0));
            printf("0 1 | %d\n", NAND(0, 1));
            printf("1 0 | %d\n", NAND(1, 0));
            printf("1 1 | %d\n", NAND(1, 1));
            break;
        case 5: // NOR
            printf("A B | Y\n");
            printf("0 0 | %d\n", NOR(0, 0));
            printf("0 1 | %d\n", NOR(0, 1));
            printf("1 0 | %d\n", NOR(1, 0));
            printf("1 1 | %d\n", NOR(1, 1));
            break;
        default:
            printf("Invalid choice.\n");
    }
}