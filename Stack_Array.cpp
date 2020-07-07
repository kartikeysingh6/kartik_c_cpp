#include<iostream>
#define max 100
using namespace std;
int arr[max];
int top=-1;

void Push(){int x;
	if(top==max -1){
		cout<<"Stack Overflow!"<<endl;
		return;
	}
	cout<<"Enter element: ";
	cin>>x;
	arr[++top]=x;
		
}
void Pop(){
	if(top==-1){
		cout<<"Stack Underflow!"<<endl;
		return;
	}
	cout<<"Popped element is "<<arr[top]<<endl;
	--top;
}
void Peek(){
	if(top==-1){
		cout<<"Stack Underflow!"<<endl;
		return;
	}
	cout<<"Top->";
	for(int i=top;i>=0;i--)
		cout<<arr[i]<<" ";
}

int main(){int n=0;
	while(n!=4){
		cout<<endl<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Peek"<<endl<<"4.Exit"<<endl;
		cout<<"Enter choice: ";
		cin>>n;
		switch(n){
			case 1:	Push();
					break;
			case 2: Pop();
					break;
			case 3: Peek();
					break;
			case 4: break;
			default: break;
		}
	}
	return 0;
}
