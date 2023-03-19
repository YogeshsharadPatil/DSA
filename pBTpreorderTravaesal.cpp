#include <bits\stdc++.h>
using namespace std;
struct node
{
  int data;
  struct node *left;
  struct node *right;
  node(int val)
  {
    data = val;
    left = NULL;
    right = NULL;
  }
  
};
void preorder(struct node *root)
  {
    if (root == NULL)
    {
      return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
  }
  void postorder(struct node *root)
  {
    if (root == NULL)
    {
      return;
    }
    cout << root->data << " ";
    postorder(root->left);
    postorder(root->right);
  }
  void Inorder(struct node *root)
  {
    if (root == NULL)
    {
      return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
  }
int main()
{
  struct node* root = new node(1);
   root->left = new node(2);
   root->right = new node(3);
   root->left->left = new node(4);
   root->left->right = new node(5);
   preorder(root);cout<<endl;
   Inorder(root);cout<<endl;
   postorder(root);

  return 0;
}