#include <stdio.h>



int main()
{
    int b,c;
    float a,d;
    printf("b=");
    scanf("%d",&b);
    printf("d=");
    scanf("%f",&d);
    printf("b=%d,d=%.2f\n",b,d);

    a=5, c=5;
    a=a+b-2;
    c=c+1, d=c-a+d;
    a=a*c, c=c-1;
    a=a/10, c=c/2, b=b-1, d=d*(c+b+a);


    printf("a=%.2f,b=%d,c=%d,d=%.2f\n",a,b,c,d);
    return 0;
}
