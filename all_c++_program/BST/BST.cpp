#include <iostream>
#include <queue>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void inOrder(Node* root){

    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){

    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void preOrder(Node* root){

    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void levelOrderTraversal(Node* root) {
    if (root == nullptr) return; // Add check for null root

    queue<Node*> q; // Queue should store Node pointers
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

Node* inserterIntoBST(Node* root, int data) {
    // base case
    if (root == NULL) {
        root = new Node(data); // Corrected from d to data
        return root;
    }

    if (data > root->data) {
        // right part
        root->right = inserterIntoBST(root->right, data);
    } else {
        // left part
        root->left = inserterIntoBST(root->left, data);
    }
    return root;
}

Node* minval(Node* root){
    Node* temp = root;

    while(temp->left!=NULL){
        temp = temp->left;

    }
    return temp;
}

Node* maxval(Node* root){
    Node* temp = root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

Node* deleteRFromBSt(Node* root,int val){
    if(root == NULL){
        return root;
    }

    if(root->data==val){

        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1 child
        if(root->left!=NULL && root->right==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        if(root->left==NULL && root->right!=NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        // 2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini = minval(root->right)->data;
            root->data=mini;
            root->right = deleteRFromBSt(root->right,mini);
            return root;
        }
    }
    else if(root->data>val){
        root->left = deleteRFromBSt(root->left,val);
        return root;
    }
    else{
        root->right = deleteRFromBSt(root->right,val);
        return root;
    }
}
void takeInput(Node*& root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = inserterIntoBST(root, data);
        cin >> data;
    }
}

int main() {
    Node* root = NULL;

    cout << "Enter the data to create BST (end with -1)" << endl;
    takeInput(root);

    cout << "Printing the BST" << endl;
    levelOrderTraversal(root);

    cout<<endl<<"printing inorder" << endl;
    inOrder(root);

    cout<<endl<<"printing preorder" << endl;
    preOrder(root);

    cout<<endl<<"printing postorder" << endl;
    postOrder(root);

    cout<<endl<<"Min value is  ->"<<minval(root)->data<<endl;

    cout<<endl<<"Max value is  ->"<<maxval(root)->data<<endl;

    cout<<"Enter value you want to delete"<<endl;
    int x;
    cin>>x;
    root = deleteRFromBSt(root,x);
    
    cout << "Printing the BST" << endl;
    levelOrderTraversal(root);

    cout<<endl<<"printing inorder" << endl;
    inOrder(root);

    cout<<endl<<"printing preorder" << endl;
    preOrder(root);

    cout<<endl<<"printing postorder" << endl;
    postOrder(root);

    cout<<endl<<"Min value is  ->"<<minval(root)->data<<endl;

    cout<<endl<<"Max value is  ->"<<maxval(root)->data<<endl;



    return 0;
}
