#include <stdio.h>
int main() {
    int n,count=0;
    int i,num,r, flag;
    scanf("%d",&n);
    for(num=2;num<=n;num++){
        flag=0;
        for(i=2;i<num;i++){
            r=num%i;
            if(r==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
        }   
        else{
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
    
