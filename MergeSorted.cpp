#include <vector>
using namespace std;
#include <iostream>

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
	
	int i = arr1[0];
	int j = arr2[0];
	int o = arr3[0];
	
	for(int k=0; k<=n+m; k++){
		
		if(i<j){
			arr3[o] = arr1[i];
			o++;
			i++;
		}
		else{ 
			arr3[o] = arr2[j];
			o++;
			j++;
		}
		
	}
	
}

void print(int arr3[], int m){
	
	for (int i = 0; i < m; i++){
		cout<< arr3[i]<<" ";
	}
	
}

int main(){
	
	int arr1[5] = {1,3,5,7,9};
	int arr2[3] = {2,4,6};
	
	int arr3[8] = {0};
	
	merge(arr1, 5, arr2, 3 , arr3 );
	
	print(arr3, 8);
	
	
}
