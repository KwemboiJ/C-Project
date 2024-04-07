#include <stdio.h>
/*OLWASI LINDA ENE212-0146/2021
    JOSHUA KWEMBOI ENE212-0088/2021
    FEDLEY SIKOLIA
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


  
