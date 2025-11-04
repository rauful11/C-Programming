#include<stdio.h>
#include<math.h>
int main(){
int count=0,num,r,sum=0,temp;
scanf("%d",&num);
temp=num;
//printf("%d\n",num);
while(num!=0){
    count=count+1;
    num=num/10;
}
num=temp;
while(num!=0){

    r=num%10;
    num=num/10;
    sum=sum+pow(r,count);
}
num=temp;
if(sum==num){
printf("%d is ang",sum);
}
else{
printf("%d is not ang",sum);
}
}
