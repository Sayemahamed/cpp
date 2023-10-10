#include<bits/stdc++.h>
using namespace std;
class node {
public:
    long long frequency;
    char character;
    node* left, * right, * small, * large;
    node( long long frequency, char character ) {
        this->frequency = frequency;
        this->character = character;
        left = NULL;
        right = NULL;
        small = NULL;
        large = NULL;
    }
    node( const node& temp ) {
        this->frequency = temp.frequency;
        this->character = temp.character;
        this->left = temp.left;
        this->right = temp.right;
        this->large = temp.large;
        this->small = temp.small;
    }
};
class huffmanTree {
public:
    long long count;
    node* root;
    huffmanTree() { count = 0;root = NULL; }
    void insert( node& Node ) {
        count++;
        if (root == NULL) {
            root = new node( Node );
            return;
        }
        if (root->frequency > Node.frequency) {
            node* tmp = new node( Node );
            tmp->right = root;
            root = tmp;
            return;
        }
        node* temp = root, * temp1;
        while (temp->right != NULL and temp->frequency < Node.frequency) {
            temp = temp->right;
        }
        temp1 = temp->right;
        temp->right = new node( Node );
        temp->right->right = temp1;
    }
    void Traverse() {
        node* temp = root;
        while (temp != NULL) {
            cout << temp->character << ' ' << temp->frequency << endl;
            temp = temp->right;
        }
    }
};
int main() {
    string inputString;cin >> inputString;
    huffmanTree Tree;
    map<char, long long>frequencyArray;
    for (auto& it : inputString)frequencyArray[ it ]++;
    for (auto& it : frequencyArray) {
        node temp( it.second, it.first );
        Tree.insert( temp );
    }
    Tree.Traverse();
}