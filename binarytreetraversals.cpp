#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  node *left,*right;
};

node* newnode(int data)
{
  node* temp = new node;
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;
  return(temp);
};

void printlevelorder(node* root)
{
  if(root == NULL) return;
  queue<node*> q;
  q.push(root);

  while(q.empty() == false)
  {
    node* temp = q.front();
    cout<< temp->data <<" ";
    q.pop();

    if(temp->left != NULL)
    {
      q.push(temp->left);
    }
    if(temp->right != NULL)
    {
      q.push(temp->right);
    }
  }
}

void printLevelOrder(node *root)
{
    // Base Case
    if (root == NULL)  return;
    // Create an empty queue for level order tarversal
    queue<node*> q;

    // Enqueue Root and initialize height
    q.push(root);

    while (1)
    {
        // nodeCount (queue size) indicates number of nodes
        // at current lelvel.
        int nodeCount = q.size();
        if (nodeCount == 0)
            break;

        // Dequeue all nodes of current level and Enqueue all
        // nodes of next level
        while (nodeCount > 0)
        {
            node *node = q.front();
            cout << node->data << " ";
            q.pop();
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
            nodeCount--;
        }
        cout << endl;
    }
}

void printInorder(node* node)
{
  if (node == NULL) return;
  /* first recur on left child */
  printInorder(node->left);
  /* then print the data of node */
  cout<< node->data<<" ";
  /* now recur on right child */
  printInorder(node->right);
}

void printpreorder(node* node)
{
  if (node == NULL) return;

  /* first print the data of node */
  cout<< node->data<<" ";

  /* then recur on left child */
  printpreorder(node->left);

  /* now recur on right child */
  printpreorder(node->right);
}

void printpostorder(node* node)
{
  if (node == NULL) return;

  /* first print the data of node */
  cout<< node->data<<" ";

  /* then recur on right child */
  printpostorder(node->right);

  /* now recur on left child */
  printpostorder(node->left);
}

int main()
{
  node* root = newnode(1);
  root->left = newnode(2);
  root->right = newnode(3);
  root->left->left = newnode(4);
  root->left->right = newnode(5);
  root->right->left = newnode(6);
  root->right->right = newnode(7);
  printlevelorder(root);
  cout<<endl;
  printInorder(root);
  cout<<endl;
  printpreorder(root);
  cout<<endl;
  printpostorder(root);
  cout<<endl;
  printLevelOrder(root);
  return 0;
}
