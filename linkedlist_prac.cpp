#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  node* next;
};

void initnode(node* head,int n){
  head->data = n;
  head->next = NULL;
}

void addnode(node* head,int n){
  struct node *temp = new node;
  temp->data = n;
  temp->next = NULL;

  node *temp1 = head;
  while(temp1){
    if(temp1->next == NULL)
    {
      temp1->next = temp;
      return;
    }
    temp1 = temp1->next;
  }
}

void display(node* head){
  node* list = head;
  while(list){
    cout<<list->data<<" ";
    list = list->next;
  }
  cout<<endl;
  cout<<endl;
}

void inserfront(node** head,int n)
{
  node* newnode = new node;
  newnode->data = n;
  newnode->next = *head;
  *head = newnode;
}

int main()
{
  node* head = new node;
  //initnode(head,10);
  head->data = 10;
  head->next = NULL;
  display(head);

  addnode(head,20);
  display(head);

  addnode(head,30);
  display(head);

  inserfront(&head,5);
  display(head);
  return 0;
}
