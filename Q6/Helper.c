#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Binary
//  Description: Accepts a decimal number anb displays its binary format.
//  Input: int[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

void Binary(int iNum)
{
    while(iNum!=0)
    {
        printf("%d",iNum%2);
        iNum=iNum/2;
    }
    printf("\n");

}