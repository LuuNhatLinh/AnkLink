#include <stdio.h>
#include <stdlib.h>

int gt(int n)
{
   int b=1;
    for (int i=1; i<=n; i++) b*=i;
    return b;
}

int main()
{
    int n,b;
    double c=0;
    printf("Nhap so n: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        c+=((double)1/gt(n));
    }
    printf("S=%lf",c);
}
