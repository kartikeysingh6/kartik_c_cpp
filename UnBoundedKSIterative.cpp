#include<bits/stdc++.h>
using namespace std;

//Exact same problem as rod cutting problem

int iUnbKS(int *arr,int *value,int n,int W){
	//creating Pair first part is float (value/weight ratio)
	//second part is pair of 2 int values first being value and weight
	pair<float, pair<int,int> > p[n];

	//filling them up
	for(int i=0;i<n;i++){
		(p[i].second).first=value[i];
		(p[i].second).second=arr[i];
		p[i].first=value[i]/(arr[i]*1.0);
	}

	//sorting them based on value/weight ratio
	//biggest number at last position
	sort(p,p+n);

	//filling them up in our knapsack
	//say if weight is more than W then wt/W will give integer value 0 so no worries
	//just loop through whole float value starting from largest and add profit and subtract 
	//knapsack's capacity
	int profit=0;
	for(int i=n-1;i>=0;i--){
		profit+= ( (int)W/((p[i].second).second)  )*(  (p[i].second).first  );
		W-=( (int)W/((p[i].second).second)  )*(  (p[i].second).second  );
	}

	return profit;
}


int main(){
	int wt[]={2,1,7,3};
	int val[]={5,3,11,2};
	int W=7;
	int n=sizeof(wt)/sizeof(wt[0]);

	cout<<"Rec: "<<UnbKS(wt,val,n,W);
	cout<<"\nItr: "<<iUnbKS(wt,val,n,W);

}
