#include<bits/stdc++.h>
using namespace std;

int find(float *A, float x,int n){
	for(int i=0;i<n;i++){
		if(A[i]==x)
			return i;
	}
	return -1;
}

int main(){
	float x[]={1,6,5,10,3,2,4,9,7,8};
	float y[]={6,4,9,8,1,2,3,10,5,7};

	int n=sizeof(x)/sizeof(x[0]);
	float xx[n],yy[n];
	for(int i=0;i<n;i++){
		xx[i]=x[i];
		yy[i]=y[i];
	}
	sort(xx,xx+n);
	sort(yy,yy+n);

	cout<<"\nX =";
	for(int i=0;i<n;i++)
		cout<<x[i]<<", ";
	cout<<"\nY =";
	for(int i=0;i<n;i++)
		cout<<y[i]<<", ";

	cout<<"\n\nRX =";
	for(int i=0;i<n;i++)
		cout<<find(xx,x[i],n)+1<<", ";
	cout<<"\nRY =";
	for(int i=0;i<n;i++)
		cout<<find(yy,y[i],n)+1<<", ";

	cout<<"\n\nd = ";
	cout<<"RX-RY = ";
	for(int i=0;i<n;i++)
		cout<<find(xx,x[i],n)-find(yy,y[i],n)<<", ";
	cout<<"\nd^2 = ";
	for(int i=0;i<n;i++){
		float d=find(xx,x[i],n)-find(yy,y[i],n);
		cout<<d*d<<", ";
	}

	cout<<"Sum = ";
	float sum=0;
	for(int i=0;i<n;i++){
		float d=find(xx,x[i],n) - find(yy,y[i],n);
		float dsq=d*d;
		sum+=dsq;
	}
	cout<<sum;

	cout<<"\n\nr = 1 - 6*(sum)/n(n^2-1) = ";
	cout<<1 - (6*sum)/(n*n*n-n);

}