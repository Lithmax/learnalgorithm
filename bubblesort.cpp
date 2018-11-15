#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
#define MAXLEN 1000
#define MAXNUM 1000
#define MAXT 1000


int main(){
	void swap(int a[],int i,int j);
	//void bubbleSort(int a[], int len);
	//void insertionSort(int a[], int len);
	bool equal(int array1[],int array2[]);
	bool res = true;
	
	for(int i = 0;i<MAXT;i++){
		int len1 = rand()%MAXLEN;
		int *array1 = new int [len1];
		int *array2 = new int [len1];
		for(int i = 0;i<len1;i++)
			array1[i] = rand()%MAXNUM;
	
		memcpy(array2, array1, len1*sizeof(int));
	
		//bubbleSort(array1,len1);
		insertionSort(array1,len1);

		sort(array2,array2+len1);
	
		res = equal(array1,array2);
		delete[] array1;
		delete[] array2;
		if(!res){
			break;
		}			
	}
	if(res)
		cout<<"Yeah,great!\n";
	else 
		cout<<"Fucking world! It has error.";
	return 0;
} 

void swap(int array[],int i,int j){
	int temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
/*
void bubbleSort(int a[], int len){
	int end = len;
	if ((end < 2) || (a == NULL))
		return;
	/*for(int i = 0;i<end;end--){
		for(int j = i;j<end-1;j++){
			if(a[j]>a[j+1])
				swap(a,j,j+1);
		}
	}
}
//bubblesort
*/
/*
void insertionSort(int a[], int len) {
	int end = len;
	if ((len < 2) || (a == NULL))
		return;
	for (int i = 1; i < end; i++) {
		for (int j = i - 1; j >= 0; j--) {
			if (a[j] > a[j+1])
				swap(a, j, j+1);
		}
	}
}
//insertionSort
*/

bool equal(int array1[],int array2[]){
	int len1 = sizeof(array1)/sizeof(int);
	int len2 = sizeof(array2)/sizeof(int);
	if(len1!=len2)
		return false;
	for(int i = 0,j = 0;(i<len1)&&(j<len2);i++,j++){
		if(array1[i]!=array2[j])
			return false;
	}
	return true;
}
