#include<iostream>
#include<conio.h>
using namespace std;

int main(){	int h,min;
	cin>>h>>min;
	int m=60*h + min;
	float r=5.5*m;
	float result = r-360*h;
	if(result>0)
		cout<<result<<" degrees";
	else
		cout<<-result<<" degrees";
	
	getch();
	return 0;
}
