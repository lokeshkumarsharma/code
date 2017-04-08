#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* root=NULL;
struct node* insertNode(int data,struct node *add){
    if(add==NULL){
        struct node* new1=(struct node*)malloc(sizeof(struct node));
        new1->data=data;
        new1->left=NULL;
        new1->right=NULL;
        return new1;
    }else{
    if(data<=add->data)
        add->left=insertNode(data,add->left);
    else
        add->right=insertNode(data,add->right);
    return add;
    }
}
void preorder(struct node * add){
    if(add==NULL)
        return;

        cout<<add->data;
        preorder(add->left);
        preorder(add->right);
}
struct node* searchNode(struct node* temp, int data){
    if(temp->data==data || temp==NULL){
        return temp;
    }
    if(data<temp->data)
        temp=searchNode(temp->left,data);
    if(data>temp->data)
        temp=searchNode(temp->right,data);
    return temp;
}
int height(struct node * temp){
    if(temp==NULL){
        return 0;
    }
    int heightLeft=height(temp->left);
    int heightRight=height(temp->right);
    if(heightLeft>heightRight)
        return 1+heightLeft;
    else
        return 1+heightRight;
}
int main()
{
    freopen("test.txt","r",stdin);
    int n,k,p;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        if(i==0)
            root=insertNode(k,root);
        else
            insertNode(k,root);
    }
    cout<<height(root);
    return 0;
}
