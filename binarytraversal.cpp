#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int d){
        data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};
Node* buildTree(Node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    if(data == -1) return NULL;

    cout<<"Enter the data for inserting in left "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data  for inserting in right "<<data<<endl;
    root->right = buildTree(root->right);
    return root;

}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){ // Purana level complete traverse ho chuka hai 
            cout<<endl;
            if(!q.empty()){ // queue still has some child nodes
                q.push(NULL);

            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp ->right)
            {
                q.push(temp->right);
            }
        }
    }

}
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    else{
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
void preorder(Node* root){
    if(root == NULL){
        return;
    }
    else{
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

void buildFromLevelOrder(Node* &root){
    queue<Node*> q;  //queue for level order traversal
    cout<<"Enter the data for root : "<<endl;
    int data;
    cin>>data;
    root = new Node(data);   //create a new node with entered data and make it as root
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop(); 

        cout<<"Enter the left node for : "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
         if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter the right node for : "<<root->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}
int main(){

    Node* root = NULL;

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    /*
    // creating a Tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    // level order
    cout<<"Print the level order traversal  of the tree "<<endl;
    levelOrderTraversal(root);

    cout<<"Inorder Traversal : "<<endl;
    inorder(root);

    cout<<"\nPreOrder Traversal : "<<endl;
    preorder(root);

    cout<<"\nPostOrder Traversal : "<<endl;
    postorder(root);
    return 0;
    */
}