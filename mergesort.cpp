#include<iostream>
using namespace std;

void merge(int *A,int *L,int *R,int nl,int nr){
	int i=0,j=0,k=0;
	while(i<nl && j<nr){
		if(L[i]<=R[j])
			A[k++]=L[i++];
		else
			A[k++]=R[j++];
	}

	while(i<nl)
		A[k++]=L[i++];
	while(j<nr)
		A[k++]=R[j++];
}

void mergesort(int *A,int n){
	if(n<2)
		return;
	int mid=n/2;

	//int L[mid];
	//int R[n-mid]; //This is bad way as we cannot delete this static array.

	//int *L=(int*)malloc(mid*sizeof(int));
	//int *R=(int*)malloc((n-mid)*sizeof(int));

	int *L= new int[mid];
	int *R= new int[n-mid];

	for(int i=0;i<mid;i++)
		L[i]=A[i];
	for(int i=mid;i<n;i++)
		R[i-mid]=A[i];
	mergesort(L,mid);
	mergesort(R,n-mid);
	merge(A,L,R,mid,n-mid);
	free(L);
	delete R;
}

int main(){
	int A[]={76,56,-35,0,44,2,6,420,19};
	int n=sizeof(A)/sizeof(A[0]);
	mergesort(A,n);

	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
}