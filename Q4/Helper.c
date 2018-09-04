#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: fAvg
//  Description: Accepts the numbers and returns the average.
//  Input: int[IN,IN,IN]
//  Output: float[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

float fAvg(int iNo1,int iNo2,int iNo3)
{
    float fAns;
    if(iNo1>=0 && iNo2>=0 && iNo3>=0)
    {
        fAns=(iNo1+iNo2+iNo3)/3;
        return fAns;
    }
    else
    {
        return 0.0;
    }

}