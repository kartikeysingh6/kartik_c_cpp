#include<bits/stdc++.h>
using namespace std;

int main(){
	float arrx[]={10,15,12,17,13,16,24,14,22};
	float arry[]={30,42,45,46,33,34,40,35,39};
	int n=sizeof(arrx)/sizeof(arrx[0]);

	cout<<"x= ";
	for(int i=0;i<n;i++){
		cout<<arrx[i]<<", ";
	}
	cout<<"\ny= ";
	for(int i=0;i<n;i++){
		cout<<arry[i]<<", ";
	}
	cout<<"\nx*y= ";
	for(int i=0;i<n;i++){
		cout<<arrx[i]*arry[i]<<", ";
	}
	cout<<"\nx^2= ";
	for(int i=0;i<n;i++){
		cout<<arrx[i]*arrx[i]<<", ";
	}
	cout<<"\ny^2= ";
	for(int i=0;i<n;i++){
		cout<<arry[i]*arry[i]<<", ";
	}
	cout<<"\n\nE(x)= ";
	float sum1=0;
	for(int i=0;i<n;i++){
		sum1+= (arrx[i]);
	}
	cout<<sum1/n;
	cout<<"\nE(y)= ";
	float sum2=0;
	for(int i=0;i<n;i++){
		sum2+=(arry[i]);
	}
	cout<<sum2/n;
	cout<<"\nE(x,y)= ";
	float sum3=0;
	for(int i=0;i<n;i++){
		sum3+=(arrx[i]*arry[i]);
	}
	cout<<sum3/n;
	cout<<"\nE(x^2)= ";
	float sum4=0;
	for(int i=0;i<n;i++){
		sum4+=(arrx[i]*arrx[i]);
	}
	cout<<sum4/n;
	cout<<"\nE(y^2)= ";
	float sum5=0;
	for(int i=0;i<n;i++){
		sum5+=(arry[i]*arry[i]);
	}
	cout<<sum5/n;

	cout<<"\n\nCov(x,y)= ";
	cout<<"E(x,y) - E(x)E(y)= ";
	float cov=sum3/n - (sum1*sum2)/(n*n);
	cout<<sum3/n<<" - "<<sum1/n<<"*"<<sum2/n<<" = "<<cov;

	cout<<"\nStdDeviation(x)= ";
	float stdx=sqrt(sum4/n - (sum1/n)*(sum1/n));
	cout<<"root( E(x^2) - E^2(x) ) = "<<stdx;

	cout<<"\nStdDeviation(y)= ";
	float stdy=sqrt(sum5/n - (sum2/n)*(sum2/n));
	cout<<"root( E(y^2) - E^2(y) ) = "<<stdy;

	cout<<"\n\nr= Cov(x,y)/(Std(x)*Std(y) ) = ";
	cout<<cov<<"/("<<stdx<<"*"<<stdy<<") = "<<cov/(stdy*stdx);
}