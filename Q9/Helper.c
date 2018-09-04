#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: SumRange
//  Description: Accepts two numbers and returns the sum of range between the numbers.
//  Input: int[IN,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

int SumRange(int iStart,int iEnd)
{
    int iCnt=0;
    int iSum=0;
    if(iStart<0)
    {
        iStart=-iStart;
    }
    if(iEnd<0)
    {
        iEnd=-iEnd;
    }

    if(iStart>=iEnd)
    {
        return 0;
    }

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        iSum=iSum+iCnt;
    }

    return iSum;
}