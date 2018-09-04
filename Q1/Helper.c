#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Factorial
//  Description: Accepts one number and display the factorial of that number.
//  Input: int[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

void Factorial(int iNum)
{
    int iAns=1;

    if(iNum<0)
    {
        iNum=-iNum;
    }

    if(iNum!=0)
    {
    int iDnum=iNum;
    while(iNum!=0)
    {
        iAns=iAns*iNum;
        iNum--;
    }
    printf("Fatorial of %d:%d\n",iDnum,iAns);
    }
    else
    {
        printf("ERROR: Number is equal to 0.\n");
        return;
    }

}