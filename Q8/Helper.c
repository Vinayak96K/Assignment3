#include"MyHeader.h"

/////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DisplayRangeEven
//  Description: Accepts two number and displays the all even numbers between the accepted range.
//  Input: int[IN,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////////////

void DisplayRangeEven(int iStart,int iEnd)
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
        if(iCnt%2==0)
        {
        printf("%d\t",iCnt);
        }
    }
    printf("\n");
}