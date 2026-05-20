#include <iostream>

using namespace std;

int prostokat(int *A, int p, int n){
	int i=0, j=0, k=0, S=0;
	int B[n];
	
	for(i=0; i<n; i++){
		if(A[i]%p!=0){
			B[j]=A[i];
			j++;
		}
	}
	
	for(i=0; i<j; i++){
		for(k=0; k<j; k++){
			if(B[i]*B[k]>S && i!=k) S=B[i]*B[k];
		}
	}
	
	return S;
}

int main(int argc, char** argv) {
	int n=4, p=3, s=0;
	int A[n]={7, 5, 11, 33};
	cout<<prostokat(A, p, n);
	
	
	return 0;
}
