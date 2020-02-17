#include <iostream>
using namespace std;
int main(){ int ch,Q[100],enq,f=-1,r=-1,n=5;

cout<<"Size of Queue is: "<<n<<endl;
while(ch!=4){
	cout<<endl<<"1.Push"<<endl;
	cout<<"2.Pop"<<endl;
	cout<<"3.Peek"<<endl;
	cout<<"4.Exit"<<endl;
	cin>>ch;
	switch(ch){
		case 1: if(r-f==(n-1))  //when the difference between front and rear pointer equal the size it means will reached the limit
				cout<<"Queue is full"<<endl;
				else if(f==-1){
					cout<<"Enter element: "<<endl;  //first time running the program
					cin>>enq;
					Q[++r]=enq;
					++f;}
				else{
					cout<<"Enter element: "<<endl;
					cin>>enq;
					Q[++r]=enq;
				}
				break;
		case 2: if(f>r || f==-1) //front will only exceed the rear iff 1 element is left and you have deleted it
				cout<<"Queue is empty"<<endl;
				else{
					cout<<"Popped element is: "<<Q[f]<<endl;
					++f;
				}
				break;
		case 3: if(f>r || f==-1)
				cout<<"Queue is empty"<<endl;
				else{
					for(int i=f;i<=r;i++)
					cout<<Q[i]<<" ";
				}
				break;
		case 4: cout<<"Exiting Program..."<<endl;
				break;
		default: cout<<"Invalid Input!"<<endl;
				break;
		
		
	}			
	
}

	
	return 0;
}
