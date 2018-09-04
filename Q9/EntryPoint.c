#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue1,iValue2;
    int iRet=0;
    printf("Enter start:");
    scanf("%d",&iValue1);

    printf("Enter end:");
    scanf("%d",&iValue2);

    iRet=SumRange(iValue1,iValue2);
    if(iRet!=0)
    {
    printf("Sum of range between %d and %d:%d\n",iValue1,iValue2,iRet);
    }
    else
    {
        printf("ERROR: Incorrect input\n");
    }
    return 0;
}
