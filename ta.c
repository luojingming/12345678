#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ta.h"
#define N 20

//冒泡排序1，从前往后
void bubblel(int a[], int n) {
	int i, j, t;
	for (i=1; i<n; i++) {
		for (j=0; j<n-i; j++) {
			if (a[j] > a[j+1]){
			   t = a[j];
			   a[j] = a[j+1];
			   a[j+1] = t;
			}
		}
	}
}


//直接插入排序
void InsertSort(int a[], int n){
     int i,j, temp;
     for (i=1; i<n; i++) {
	 temp = a[i];
    	 j = i - 1;
	 while (j>=0 && a[j]>temp){
		a[j+1] = a[j];
		j--;
	 }
	
	 a[j+1] = temp;
     }
}


//直接选择排序
void SelectSort(int a[], int n) {
	int i,j,k,m;
	for (i=0; i<n-1; i++) {
		m = a[i];
		k = i;
		for (j=i+1; j<n; j++)
			if (a[j] < m) {
				m=a[j]; k=j;
			}
		a[k] = a[i];
		a[i] = m;
	}
}


