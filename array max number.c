
#include <stdio.h>

int main() {
int arr[5],i,max;
for(i=0;i<5;i++){
scanf("%d",&arr[i]);
if(max<arr[i]){
    max=arr[i];
}
}
printf("the max is %d",max);


    return 0;
}
