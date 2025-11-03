#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,temp;
    int p=0,l=1;
    scanf("%d",&n);
    printf("%d,",l);
    for(;l<n;){
        temp=p+l;
        printf("%d,",temp);
        p=l;
        l=temp;
    }
    return 0;
}
