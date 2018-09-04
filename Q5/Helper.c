#include"MyHeader.h"

/////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: fCircum
//  Description: Accepts radius and returns the circumference of the circle with specified radius.
//  Input: 
//  Output: 
//  Author: Vinayak Mahendra Patil
///////////////////////////* code *///////////////////////////////////////////////////////////////

float fCircum(float fRadius)
{
    float fAns;
    if(fRadius>0)
    {
        fAns=2*pi*fRadius;
        return fAns;
    }
    else
    {
        return 0.0;
    }
}