#include<bits/stdc++.h>
using namespace std;
class node {
    long long frequency;
    char character;
    node* left, * right, * small, * large;
public:
    node( long long frequency, char character ) {
        this->frequency = frequency;
        this->character = character;
        left = NULL;
        right = NULL;
        small = NULL;
        large = NULL;
    }
}
class huffmanTree {
public:
    long long count;
    node* root;
    huffmanTree() { count = 0;root = NULL; }
    void insert( long long frequency, char character ) {
        count++;
        if (root == NULL) {
            root = new node( frequency, character );
        }
        
    }
}
int main() {
    string inputString;cin >> inputString;
}