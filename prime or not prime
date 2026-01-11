#include <stdio.h>
int main() {
    int i,num,r,flag=0;
    scanf("%d",&num);
    for(i=2;i*i<num;i++){
        r=num%i;
        if(r==0){
            printf("i=%d\n",i);
            flag=1;
            break;
        }
    }
    printf("%d - flag\n",flag );
    if(flag==1){
        printf("not prime");
    }
    else{
        printf("prime");
    }
    return 0;
}
