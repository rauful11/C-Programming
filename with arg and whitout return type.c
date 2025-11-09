#include<stdio.h>
void adder(int a,int b){
    int c;
    c=a+b;
    printf("%d",c);

}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    adder(a,b);
    return 0;
}
