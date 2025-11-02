#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int i,sum=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+pow(i,4);
    }
    printf("%d",sum);
    return 0;
}
