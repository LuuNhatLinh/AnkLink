#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int tich=1;
    printf("Nhap so n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        tich*=i;
    }
    printf("n!=%d",tich);
    return 0;
}
