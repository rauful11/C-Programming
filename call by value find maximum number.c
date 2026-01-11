#include<stdio.h>
int maximun(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
}
}
int main(){
    int a,b,r;
    scanf("%d%d",&a,&b);
    r=maximun(a,b);
    printf("%d maximun",r);
    return 0;

}
