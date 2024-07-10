//r 
#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
#define F first
#define S second
#define pb push_back
#define optimize();ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
struct node{
int data;
Node *next;
};
Node *create_node(int item,Node*next){
Node *new_node=(Node*)malloc(sizeof(Node));
if(new_node==NULL){
  cout<<"Could not create a new Node";
  exit(1);
}
new_node->data=item;
new_node->next=next;
return new_node;
}
Node *prepend(Node *head,int item){
    Node *new_node=create_node(item,head);
    return new_node;
}
int32_t main(){
 
  Node *head=NULL;
  head=create_node(100,NULL);
  head=prepend(head,200);
  head=prepend(head,300);
  head=prepend(head,400);
  Node *temp=head;
  while(temp!=NULL){
  cout<<temp->data<<" ";
  temp=temp->next;
  }
  cout<<"NULL"<<endl;
  
    return 0;
}

