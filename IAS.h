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

instruction MainMemory[MAX_SIZE];          
int PC[SIZE_PC];
int MAR;
int IR;
int IBR;
instruction MBR;
int ACC;
int MQ;
int PC_index = 0;
int left_flag = 0;          //If we have a single instruction _> by default its right instruction so 0 
