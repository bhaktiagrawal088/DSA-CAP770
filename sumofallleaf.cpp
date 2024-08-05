#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    public:
    Node(int data): data(data), left(nullptr), right(nullptr){}
};
int sum(Node* root){
        if(root == nullptr){
            return 0 ;
        }
        if(root->left == nullptr && root->right == nullptr){
            return root->data;
        }
        int leftsum = sum(root->left);
        int rightsum = sum(root->right);

        return leftsum+ rightsum;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);

    int total = sum(root);
    cout<<"Sum of all leaf node: "<<total<<endl;
    return 0;

}