#include<bits/stdc++.h>
using namespace std;

int partition(int A[],int s,int e){
	int pivot=A[e];
	int pindx=s;
	for(int i=s;i<=e-1;i++){
		if(A[i]<=pivot){
			swap(A[i],A[pindx]);
			pindx++;
		}
	}
	swap(A[pindx],A[e]);
	return pindx;
}

int randompartition(int A[],int s,int e){
	int pindx = (rand() %(e - s + 1)) + s;
	swap(A[pindx],A[e]);
	return partition(A,s,e);
}

int quickSel(int A[],int s,int e,int k){
	if(s==e){
		if(s==k)
			return A[s];
		else
			return -1;
	}
	else{
		int r=randompartition(A,s,e);
		if(r==k)
			return A[r];
		else{
			if(r>k)
				return quickSel(A,s,r-1,k);
			if(r<k)
				return quickSel(A,r+1,e,k);
		}
	}
}

int quickSort(int *A,int s,int e){
	if(s>=e)
		return -1;
	int pindx=randompartition(A,s,e);
	quickSort(A,s,pindx-1);
	quickSort(A,pindx+1,e);
}

int main(){
	int A[]={5,2,7,11,-3,4,66,12};
	int n=sizeof(A)/sizeof(A[0]);
	int k=1;
	//-3,2,4,5,7,11,66
	cout<<quickSel(A,0,n-1,k-1)<<endl;
	//quickSort(A,0,n-1);

	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
}