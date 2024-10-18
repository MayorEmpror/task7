#include <stdio.h>
void finder(){
int num[5] = {1,3,2,5,3};
    int input;
    int found = 0 ;
    printf("enter number");
    scanf("%d",&input);
    int length = sizeof(num)/sizeof(num[0]);
    for(int i= 0;i<length;i++){
        if(num[i]==input){
            found = 1;
            printf("the number is present at %d  index\n",i);
        }
    }
    if(!found){
        printf("Not found");
    }  
}
int main(){
    finder();
    return 0;
}