#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* root=NULL;

struct Node* GetNN(int x){
    struct Node* NN=(struct Node*)malloc(sizeof(struct Node));
    NN->data=x;
    NN->left=NULL;
    NN->right=NULL;
    return NN;
}

struct Node* Insert(struct Node* root, int data){
    if(root==NULL)
        root=GetNN(data);
    else if(data<=root->data)
        root->left=Insert(root->left,data);
    else
        root->right=Insert(root->right,data);
}

int Search(struct Node* root, int data){
    if(root==NULL)
        return 0;
    else if(root->data==data)
        return 1;
    else if(data<=root->data)
        return Search(root->left,data);
    else
        return Search(root->right,data);
}

int main(){
    root=Insert(root,20);
    root=Insert(root,10);
    root=Insert(root,25);
    root=Insert(root,30);
    root=Insert(root,11);
    
    if(Search(root,20)==1)
        cout<<"Found!";
    else
        cout<<"Not Found!";
    return 0;
}
