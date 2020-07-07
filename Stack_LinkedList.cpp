#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* head=NULL; 

void Ins(int x){
	//Node* temp=(Node*)malloc(sizeof(struct Node));
	Node* temp= new Node();
	temp->data=x;
	temp->next=head;
	head=temp;
}

void Print(){
	Node* temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}

int main(){ int n,x;
	cout<<"Enter no. of elements: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		Ins(x);
	}
	Print();
	return 0;
}
