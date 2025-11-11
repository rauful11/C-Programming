#include<stdio.h>
int adder(int *a,int *b){
        int c;
        c=*a+*b;
        return c;
}
int main(){
    int r;
    int x,y;
    scanf("%d%d",&x,&y);
    r=adder(&x,&y);
    printf("%d",r);
    return 0;

}
