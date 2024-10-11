#include <stdio.h>
int merger(){
 int array[3] = {1, 3, 4};
    int array_2[3] = {3, 4, 5};  
    int size1 = sizeof(array) / sizeof(array[0]);
    int size2 = sizeof(array_2) / sizeof(array_2[0]);
    int A[size1 + size2];  
    int k = 0;
    // Copy first array to A
    for (int i = 0; i < size1; i++) {
        A[k] = array[i];
        k++;
    }
    // Copy second array to A
    for (int j = 0; j < size2; j++) {
        A[k] = array_2[j];
        k++;
    }
    // Print merged array
    for (int n = 0; n < size1 + size2; n++) {
        printf("%d\t", A[n]);
    }   
    return 0;	
}
int triangle() {
	int rows;
	printf("enter number of rows");
	scanf("%d",&rows);
	int n = 0;
	while(rows != 0){
	   while(n = rows){
	   	  printf("*");
	   	  n++;
	   }
	printf("\t");
	}
	return 0;
	
}
int SumArray (){
	int array[15];
	int sum;
  bool end = false;
  for(int i =0;i<15;i++){
  		printf("enter array index %d\t", i);
  		scanf("%d",&array[i]);	
  }
   for(int i =0;i<15;i++){
  	sum += array[i];		 
  }
  printf("%d",sum);
}
int  reverse (){
	int array[20];

  for(int i =0;i<20;i++){
  		printf("enter array index %d\t", i);
  		scanf("%d",&array[i]);	
  }
   for(int i =19;i>=0;i--){
   	 	printf("%d\t",array[i]);	 	
  }
  
	return 0;
}
int Minmax(){
	int array[30];

  for(int i =0;i<30;i++){
  		printf("enter array index %d\t", i);
  		scanf("%d",&array[i]);	
  }
  int max = 0;
  int min = 0;
  for(int i=0;i<30;i++){
  	if(array[i]>max){
  	    max = array[i];
	  }else if (min>array[i]){
	  	min = array[i];
	  }
  }
    printf("%d is the max number and %d is the min number",max,min);
	return 0;
}

int main() {
	//triangle();
//	SumArray();
//	reverse();
Minmax();
   return 0;   
}

