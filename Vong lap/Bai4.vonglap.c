#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long sum=0;
   for(int i=1;i<=100;i++){
    if(i%2!=0)
        sum+=i;
   }
   printf("Tong cac so le=%lld",sum);
   return 0;
}
