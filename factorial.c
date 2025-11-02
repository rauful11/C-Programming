#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    int i,sum=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum*i;
    }
    printf("%d",sum);
    return 0;
}
