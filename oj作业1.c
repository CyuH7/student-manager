#include<stdio.h>
int main()
{
  float t;
  scanf("%f",&t);
  if(t>=0&&t<=100){
    if(t>=90){
      printf("A\n",t);
    }
    else if(t>=80){
      printf("B\n",t);
    }
    else if(t>=70){
      printf("C\n",t);
    }
    else if(t>=60){
      printf("D\n",t);
    }
    else if(t>=0){
      printf("E\n",t);
    }
  }
  return 0;
}