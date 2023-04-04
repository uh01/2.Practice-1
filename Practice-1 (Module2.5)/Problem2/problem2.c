#include <stdio.h>

int main()
{
    int num1,num2,sum,sub,mul;
    float div;

    scanf("%d%d",&num1,&num2);

    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=(float)num1/(float)num2;

    printf("%d+%d=%d",num1,num2,sum);
    printf("\n%d-%d=%d",num1,num2,sub);
    printf("\n%d*%d=%d",num1,num2,mul);
    printf("\n%d/%d=%0.2f",num1,num2,div);

    return 0;
}


