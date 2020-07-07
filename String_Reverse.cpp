#include <bits/stdc++.h>    //just for strlen
using namespace std; 

void swap(char *a, char *b){  
    char temp = *a;  
    *a = *b;  
    *b = temp;  
}  
void reverse(char str[]){
    int n=strlen(str);
    for (int i=0; i<n/2; i++)  
        swap(&str[i], &str[n-i-1]);  
}  
int main()  
{  
    char str[50];
    cout<<"Enter a string:"<<endl;
    fgets(str,50,stdin);
    reverse(str);  
    cout<<"Reversed String: "<< str;  
  
    return 0;  
}  
  