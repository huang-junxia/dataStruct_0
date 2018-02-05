#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int maxSum(int *p, int num, int *maxS){
    if(p == NULL || maxS == NULL)
       return -1;
    int *tmp = p;
    int i = 0, j = 0, sum = 0;
    int max = tmp[0];
    for(i = 0; i < num; i++){
      for(j = i; j < num; j++){  
        sum = sum + tmp[j];
        if(max < sum)
          max = sum;
      }
      sum = 0;
    }
    *maxS = max;
    return 0;
}
void main(){
  int myArr[] = {-2, 11, -4, 13, -5, 2, -5, -3, 12, -9};
  int max = 0;
  maxSum(myArr, 10, &max);
  printf("the max sum is: %d", max);
}
