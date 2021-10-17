/**
 * @file: stats.c
 * @brief:This file contains basic stats functions for given array
 *
 * Functions are:
 *                1.find_minimum()
                  2.find_maximum()
                  3.find_mean()
                  4.sort_array()
                  5.find_median()
                  6.print_array()
                  7.print_statistics()

 * @author: Aditya Hegde
 * @date :  17 Oct 2021
 *
 */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include "stats.h"


int main()
{
  unsigned char test[40] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


  print_statistics(test,40);
  printf("\nAfter sorting \n");
  print_array(sort_array(test,40),40);
  return 0;
}

/* Function to find the minimum number in the array */
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

/* Function to find the maximum number in the array */
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

/* Function to find the mean of array */
unsigned char find_mean(unsigned char ar[],int length)
{
  int i;
  unsigned int sum=0;
  for(i=0;i<length;i++)
  {
    sum=sum+(int)(ar[i]);
  }
  return (sum/length);
}

/* Function for finding median */
unsigned char find_median(unsigned char ar[],int length)
{
  unsigned char* b;
  unsigned int median;
  b=sort_array(ar,length);
  if(length%2!=0)
  {
    median=(int)b[length/2];
  }
  else
  {
    median= (int)b[length/2]+(int)b[(length/2)+1];
  }

  return median;
}

/* Function for printing the array*/
void print_array(unsigned char ar[],int length)
{
  int i;
  printf("The array is: \n");
  for(i=0;i<length;i++)
  {
    printf("%d ",ar[i]);
  }
}

/* Function for printing the statistics */
void print_statistics(unsigned char ar[],int length)
{
  printf("The mean of the array is : %d \n",find_mean(ar,length));
  printf("The median of the array is : %d\n",find_median(ar,length));
  printf("The minimum of the array is : %d\n",find_minimum(ar,length));
  printf("The maximum of the array is : %d\n",find_maximum(ar,length));
}

/* Function for sorting the array */
unsigned char* sort_array(unsigned char ar[],int length)
{
  int i,j,max_pos;
  unsigned char temp;
  for(i=0;i<length-1;i++)
  {
    max_pos=i;
    for(j=i+1;j<length;j++)
    {
      if(ar[j]>ar[max_pos])
      {
        max_pos=j;
      }
    }
    temp=ar[i];
    ar[i]=ar[max_pos];
    ar[max_pos]=temp;
  }

  return ar;
}
