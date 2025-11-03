    #include <stdio.h>
    int main(){
    int sum=0,n,r,num;
    scanf("%d",&num);
    while(num!=0){
          r=num%10;
          num=num/10;
          sum=sum+r;
         }
            printf("%d",sum);




}
