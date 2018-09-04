#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue1,iValue2;

    printf("Enter Start:");
    scanf("%d",&iValue1);

    printf("Enter End:");
    scanf("%d",&iValue2);

    DisplayRangeRev(iValue1,iValue2);

    return 0;
}
