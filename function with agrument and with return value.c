#include<stdio.h>
int adder(int a,int b){
    int c;
    c=a+b;
    return c;


}
int main(){
    int c;
    int a,b;
    scanf("%d%d",&a,&b);
    c=adder(a,b);
    printf("%d",c);
    return 0;
}
