#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
}*start;
node *head;
void insert(int num){
    node *temp=new node;
    temp->data=num;
    temp->next=start;
    start=temp;
    if(start==NULL)
        temp->next=NULL;
}
void insert1(int num){
    node *temp=new node;
    temp->data=num;
    temp->next=head;
    head=temp;
    if(head==NULL)
        temp->next=NULL;
}
int main(){
    start=NULL;
    head=NULL;
    int num,num1=0,num2=0;
    while(1){
        cin>>num;
        if(num==-1)
            break;
        insert(num);
        }
    while(1){
        cin>>num;
        if(num==-1)
            break;
        insert1(num);
    }
    node *ptr=start;
    while(ptr!=NULL){
        num1=num1*10+ptr->data;
        ptr=ptr->next;
    }
    ptr=head;
    while(ptr!=NULL){
        num2=num2*10+ptr->data;
        ptr=ptr->next;
    }
    int sum=num1+num2;
    head=NULL;
    while(sum!=0)
    {
        num1=sum%10;
        insert1(num1);
        sum=sum/10;
    }
    ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}