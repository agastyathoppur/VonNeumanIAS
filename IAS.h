#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define MAX_SIZE 1000
#define SIZE_PC 10

//Instruction format

typedef struct instruction
{
  int lhs;
  int rhs;
} instruction;

//Registers

long int MainMemory[MAX_SIZE];          
int PC[SIZE_PC];
int MAR;
int IR;
int IBR;
long int MBR;
long int ACC;
int MQ;
int PC_index = 0;
int left_flag = 0;          //If LHS instruction is run and RHS must be run after it, left_flag=1, else, left_flag=0
