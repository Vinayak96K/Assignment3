#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DisplayRangeRev
//  Description: Accepts two number and displays the all numbers between the accepted range in reverse format.
//  Input: int[IN,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayRangeRev(int iStart,int iEnd)
{
    int iCnt=0;

    if(iStart>=iEnd)
    {
        printf("ERROR: Incorrect Range\n");
        return;
    }    

    printf("Reverse rabge between %d to %d:",iStart,iEnd);
    for(iCnt=iEnd;iCnt>=iStart;iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}