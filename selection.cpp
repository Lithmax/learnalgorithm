#include<stdio.h>
using namespace std; 

bool less(int a,int b){
	if(a<b)
		return true;
	else 
		return false;
}

int exch(int *a,int *b){
	int temp1 = *a,temp2 = *b;
	*a = temp2;
	*b = temp1;
	return 0;
}

void selection(int a[], int l,int r){
	int i,j;
	for(i=l;i<r;i++){
		int min = i;
		for(int j = i + 1; j<=r;j++){
			if(less(a[j],a[min]))
				min = j;
		}
		exch(&a[i],&a[min]);
	}
}

int main(){
	int a[10] = {1,2,4,5,7,9,14,5,7,2};
	selection(a,0,9);
	/*for(int i = 0;i<=9;i++)
		if(i<9)
			printf("%d ",a[i]);
		else
			printf("%d",a[i]);
	*/ 
	return 0;
}

