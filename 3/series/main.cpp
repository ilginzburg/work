#include <stdio.h>
#include <math.h>


// Calculate sum of the series with accuracy of 10^-5
// where 0.05 < x < 1
//f(x) = x + .... + ... +(((2n-1)!!)(x^(2n+1)))/((2n!!)(2n+1))


//(2n)!!   = 1*2*4*6....(2n-2)2n
//(2n+1)!! = 1*3*5....(2n-1)(2n+1)
//(2n-1)!! = 1*1*3....(2n+1)(2n-1)

int main()
{


    int factorial_even = 1;  //(2n)!! = 1,2,8,48,...
    int factorial_odd = 1;  //(2n-1)!! = 1,1,3,15,...

    int n;
    double x;

    double y = 0;

    printf ("Please enter number N ");
    scanf("%d",&n);

    printf ("Please enter number X ");
    scanf("%lf",&x);



     for(int i=0; i<=n; ++i) {
      if(i==0){
          factorial_even = 1;
          factorial_odd = 1;
      }
      else{
           factorial_even = factorial_even*(2*i);
           factorial_odd = factorial_odd*(2*i-1);
      }
       y = (factorial_odd*(pow(x,(2*i+1))))/(factorial_even/(2*i+1));

       if(y>=0.00001)
           y += y;

     }


  //printf("Tne factorial_even is: %d\n",factorial_even);
  //printf("Tne factorial_odd is: %d\n",factorial_odd);
  printf ("The sum of the series is: %f\n",y);



}
