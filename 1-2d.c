#include <stdio.h>
int mymin(int data[]){
    int minimum;
    int i;
    minimum=data[0];
    for(i=1;i<10;i++){
        if(data[i]<minimum){
            minimum=data[i];
        }
    }
    return minimum;
}
int main(void){
     int data[] = {41, 69, 28, 33, 23, 7, 52, 13, 55, 9};
     int ans;
     ans=mymin(data);
     printf("The minimum number is %d.\n",ans);
     return 0;
}