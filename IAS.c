#include "IAS.h"
void load(int instr_idx)   //Takes index of memory location of instruction to be loaded as a parameter
{
    *(&ACC)=MainMemory[instr_idx];
}
void stor(int instr_idx)
{
    *(&MainMemory[instr_idx])=ACC;
}
void fetch(int value_at_pc)
{
    MAR = value_at_pc;
    MBR = MainMemory[MAR]; //data_
    int left = MBR>>20;
    int right= MBR & 0b0000000000000000000011111111111111111111;
    if(left==0)
    {
        //RHS
        IR = right >> 12;
        MAR = right & 0b00000000111111111111;
    }
    else
    {
        //LHS
        if(left_flag==0)
        {
            IBR = MBR;
            IR = left >> 12;
            MAR = left & 0b00000000111111111111;
        }
        //RHS, if LHS is present and has completed its decode cycle
        else
        {
            IR=right>>12;
            MAR=right & 0b00000000111111111111;
        }
         
    }


    

}

void decode(int IR, int MAR)
{
    switch (IR)
    {
        //load-> abs , normal , -
    }   //stor
        //artih + - * as + division
}       //factorial
        //Jumps + conditional jumps
