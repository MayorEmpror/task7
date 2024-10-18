#include <stdio.h>

void appender(){
    int num[12];
    int sum[6];
    int length = sizeof(num)/sizeof(num[0]);
    for(int i = 0;i<=length-1;i++){
        printf("enter number %d\t",i);
        scanf("%d",&num[i]);
    }
    int j = 0;
    for(int i = 0;i<=11;){

        sum[j] = num[i] + num[i+1];
        i += 2;
        j += 1;
    }
    for(int i = 0;i<=5;i++){
    printf("%d\t",sum[i]);
    }
}
  



int main(){
   appender();
    return 0;
}