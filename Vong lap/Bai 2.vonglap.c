#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a;
    int b=0;
    printf("Nhap so nguyen bat ki: ");
    scanf("%lld",&a);
    if(a<=1)
        printf("So da cho khong phai so nguyen to");
    else
        for(long long i=2; i<sqrt(a); i++)
        {
            if(a%i==0)
            b=1;
        }
 if(b==1)
 printf("So da cho khong phai so nguyen to");
            else printf("So da cho la so nguyen to");
    return 0;
}
