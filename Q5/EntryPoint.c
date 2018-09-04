#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    float fRadius,fRet;

    printf("Enter the radius:");
    scanf("%f",&fRadius);

    fRet=fCircum(fRadius);
    if(fRet!=0.0)
    {
        printf("Circumference of circle with radius %f : %f\n",fRadius,fRet);
    }
    else
    {
        printf("ERROR: Incorrect Radius.\n");
    }

    return 0;
}
