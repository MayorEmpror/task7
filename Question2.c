#include <stdio.h>
void shifter(){
        int num[10];
        int length = sizeof(num)/sizeof(num[0]);
  for(int i = 0;i <=length-1;i++){
    printf("enter a number for the index %d\t",i);
    scanf("%d",&num[i]);
  }
   int part = num[0];
   for (int i=0;i<=length-1;i++){
      
        num[i]= num[i+1];
      }
      num[length-1] = part;
  for(int i=0;i<=length-1;i++){
    printf("%d\n",num[i]);
  }
  
}


int main(){
   shifter();
    return 0;
}