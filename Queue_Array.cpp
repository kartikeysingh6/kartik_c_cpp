#include<iostream>
#define max 100
using namespace std;
int f=-1;
int r=-1;
int q[max];

void Enq(){int x;
	cout<<"Enter element: ";
	cin>>x;
	q[++r]=x;
	if(f==-1)
		f=0;
}

void Deq(){
	if(f>r || f==-1){
		cout<<"Queue is empty!";
		return;
	}
	cout<<"Element removed is "<<q[f];
	++f;
}

void Peek(){
	if(f>r || f==-1){
		cout<<"Queue is empty!";
		return;
	}
	for(int i=f;i<=r;i++)
		cout<<q[i]<<" ";
}

int main(){int n=0;
	while(n!=4){
		cout<<endl<<"1.Enqueue"<<endl<<"2.Dequeue"<<endl<<"3.Peek"<<endl<<"4.Exit"<<endl;
		cout<<"Enter choice: ";
		cin>>n;
		switch(n){
			case 1:	Enq();
					break;
			case 2: Deq();
					break;
			case 3: Peek();
					break;
			case 4: return 0;
			default: break;
		}
	}	
	return 0;
}
