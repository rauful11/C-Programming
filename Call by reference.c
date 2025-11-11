#include<stdio.h>
void adder(int *a,int *b){
        int c;
        c=*a+*b;
        printf("%d",c);
}
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    adder(&x,&y);
    return 0;

}
