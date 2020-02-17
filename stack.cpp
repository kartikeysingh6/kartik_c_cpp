#include <iostream>
#include<conio.h>

using  namespace std;

int main()
{   int stack[5],top=-1,inp,e;
    while(inp!=4){
        cout<<endl<<"Enter your choice: "<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Peek"<<endl;
        cout<<"4.Exit"<<endl;
        cin>>inp;
        switch(inp){
            case 1: if(top==4)    //top pointer reach the size
                    cout<<"Stack Overflow!";
                    else{
                        cout<<"Enter element: "<<endl;
                        cin>>e;
                        stack[++top]=e;
                    }
                    break;
            case 2: if(top==-1) //no element in array
                    cout<<"Stack Underflow!";
                    else{
                    cout<<"Popped element is: "<<stack[top]<<endl;
                    top--;}
                    break;
            case 3: if(top==-1) //no element in array
                    cout<<"Stack Underflow!";
                    else
                    cout<<"Element at top is: "<<stack[top]<<endl;
                    break;
            case 4: cout<<"Terminating program...";
                    break;
            default: cout<<"Invalid Input!"<<endl;
                    break;
            
        }
    }
    return 0;
}
