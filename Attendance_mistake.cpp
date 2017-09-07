#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
}*start;
void insert(int num){
    node *temp=new node;
    temp->data=num;
    temp->next=start;
    start=temp;
    if(start==NULL)
        temp->next=NULL;
}
int main(){
    start=NULL;
    int num,num1,flag=0;
    while(1){
        cin>>num;
        if(num==-1)
            break;
        insert(num);
    }
    cin>>num1;
    node *ptr=start;
    while(ptr!=NULL){
        if(ptr->data>num1&&flag==0){
            cout<<num1<<endl;
            flag=1;
        }
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    if(flag==0)
        cout<<num1;
}
