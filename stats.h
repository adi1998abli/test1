/**
* @file: stats.h
* @brief:This the hearder file supporting stats.c
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
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Function to find the minimum number in the array */
unsigned char find_minimum(unsigned char ar[], int length);

/* Function to find the maximum number in the array */
unsigned char find_maximum(unsigned char ar[], int length);

/* Function to find the mean of array */
unsigned char find_mean(unsigned char ar[],int length);

/* Function for finding median */
unsigned char find_median(unsigned char ar[],int length);

/* Function for printing the array*/
void print_array(unsigned char ar[],int length);

/* Function for printing the statistics */
void print_statistics(unsigned char ar[],int length);

/* Function for sorting the array */
unsigned char* sort_array(unsigned char ar[],int length);


#endif
