#include<iostream>
#include<queue>
using namespace std;

class node {
    public: 
      int data;
      node *left;
      node *right;

      node (int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
      }
};

void levelOrderTraversal(node* root){
   queue<node*> q;
   q.push(root);
   q.push(NULL);

   while(!q.empty()){
      node* temp = q.front();
      q.pop();

      if(temp == NULL){ // purane level complete traverse ho chuka hai
        cout << endl;
        if(!q.empty()){ // queue still has some child node
         q.push(NULL);
        }
      }
      else {
        cout << temp -> data << " ";
        
          if(temp -> left){
          q.push(temp->left);
      }
      if(temp -> right){
          q.push(temp -> right);
      }
      }

     
   }
}

node* buildTree() {
   cout << "Enter the data: " << endl;
   int data;
   cin >> data;

   if(data == -1){
      return NULL;
   }

   node* root = new node(data);

   cout << "Enter data for inserting in left of " << data << endl;
   root->left = buildTree();

   cout << "Enter data for inserting in right of " << data << endl;
   root->right = buildTree();

   return root;
}

int main(){
  node* root = NULL;

  // creating a tree
  root = buildTree();

  // level order
  cout << "Printing the level order travrsal output" << endl;
  levelOrderTraversal(root);

  return 0;
}
