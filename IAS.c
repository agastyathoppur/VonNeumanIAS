#include <IAS.h>

void fetch(int value_at_pc)
{
    MAR = value_at_pc;
    MBR = MainMemory[MAR]; //data_

    IBR = MBR.rhs;
    IR = (MBR.lhs) >> 12;
    MAR = ((MBR.lhs)) & 0b00000000111111111111;
    PC_index++;

    if (left_flag == 0)
    {
        decode(IR, MAR);
        //decode on right
    }
    else
    {
        //decode left
        //decode right
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
