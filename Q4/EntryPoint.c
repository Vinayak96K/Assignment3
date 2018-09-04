#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue1,iValue2,iValue3;
    float fRet;

    printf("Enter three numbers:");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    fRet=fAvg(iValue1,iValue2,iValue3);
    if(fRet!=0.0)
    {
        printf("Average of %d, %d and %d:%f\n",iValue1,iValue2,iValue3,fRet);
    }
    else
    {
        printf("ERROR:Incorrect input values.\n");
    }

    return 0;
}
