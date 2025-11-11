#include<stdio.h>
int main(){
int count=0,num;
scanf("%d",&num);
while(num!=0){
    count=count+1;
    num=num/10;
}
printf("%d",count);
}
