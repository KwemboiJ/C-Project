#include <stdio.h>
/*OLWASI LINDA ENE212-0146-2021
    JOSHUA KWEMBOI
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

  
