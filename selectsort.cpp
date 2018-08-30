#include<iostream>
using namespace std;

void selectsort(int *point,int num){
	for(int j = 1;j < num;j++){
		int key = point[j];
		int i = j-1;
		while((i>=0)&&(point[i]>key)){
			point[i+1] = point[i];
			i--;
		}
		point[i+1] = key;
	}
}

int main(){
	void selectsort(int *point,int num);
	int num;
	cin>>num;
	int *p = new int [num];
	
	for(int i = 0;i < num;i++){
		cin>>p[i];
	}
	
	selectsort(p,num);
	
	for(int i = 0;i < num;i++){
		cout<<p[i];
	}
	
	delete[] p;
	return 0;
} 
