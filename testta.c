#include "ta.h"
void printSort(int a[],int n) {
	for(int i = 0;i<n;i++) {
		printf("%d\t",a[i]);
	}
	printf("\n");
}

int main(int argc, char **argv)
{
	int arr1[] = {2,4,7,1,8,4};
	bubblel(arr1,6);
	printSort(arr1,6);
	int arr2[] = {5,2,4,1,3,0};
	InsertSort(arr2,6);
	printSort(arr2,6);
	int arr3[] = {1,3,4,5,2,8};
	SelectSort(arr3,6);
	printSort(arr3,6);

	return 0;
}
