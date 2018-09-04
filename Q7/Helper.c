#include"MyHeader.h"

/////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DisplayRange
//  Description: Accepts two number and displays the all numbers between the accepted range.
//  Input: int[IN,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////////////

void DisplayRange(int iStart,int iEnd)
{
    int iCnt=0;

    if(iStart>=iEnd)
    {
        printf("ERROR: Incorrect Range\n");
        return;
    }    

    printf("Reverse rabge between %d to %d:",iStart,iEnd);
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}