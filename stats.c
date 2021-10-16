#include<stdio.h>
#include<math.h>
#include "stats.h"

unsigned char find_minimum(unsigned char ar[], int length);

unsigned char find_maximum(unsigned char ar[], int length);

unsigned char find_mean(unsigned char ar[],int length);

int main()
{
  unsigned char test[40] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  printf("the max is %d\n",find_maximum(test,40));
  return 0;
}

/* Function to find the minimum number in the array*/
unsigned char find_minimum(unsigned char ar[], int length)
{
  int i;
  unsigned char min;
  min=ar[0];
  for(i=0;i<length;i++)
  {
    if(ar[i]<min)
    {
      min=ar[i];
    }
  }
  return min;
}

/* Function to find the maximum number in the array*/
unsigned char find_maximum(unsigned char ar[], int length)
{
  int i;
  unsigned char max;
  max=ar[0];
  for(i=0;i<length;i++)
  {
    if(ar[i]>max)
    {
      max=ar[i];
    }
  }
  return max;
}

unsigned char find_mean(unsigned char ar[],int length)
{
  int i;
  unsigned char sum;
  for(i=0;i<length;i++)
  {
    sum=sum+ar[i];
  }
  return (sum/length);
}
