#include <stdio.h>
#include <stdlib.h>

int main()
{
 double a;
 double b=0;
 printf("Nhap so N: ");
 scanf("%lf",&a);
 for(double i=1;i<=a;i++){
    b+=(1/i);
 }
 printf("Tong= %.2lf",b);
 return 0;
}
