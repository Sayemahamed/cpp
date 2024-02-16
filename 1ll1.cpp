#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
#include <vector>

using namespace std;

// Define the grammar rules
unordered_map<string, string> parsingTable = {
    {"E", "TE'"},
    {"E'", "+TE' | ε"},
    {"T", "FT'"},
    {"T'", "*FT' | ε"},
    {"F", "id | (E)"}
};

// Parse tree node structure
struct TreeNode {
    string value;
    vector<TreeNode*> children;
};

// Construct the parse tree
TreeNode* constructParseTree(const string& input) {
    stack<string> stack;
    stack.push("$"); // End marker
    stack.push("E"); // Start symbol

    TreeNode* root = new TreeNode{"E", {}};
    TreeNode* currentNode = root;

    size_t i = 0; // Input string index

    while (!stack.empty()) {
        string top = stack.top();
        stack.pop();

        if (top == input.substr(i, top.size())) {
            // Matched terminal symbol
            i += top.size();
        } else if (parsingTable.find(top) != parsingTable.end()) {
            // Non-terminal symbol
            string production = parsingTable[top];
            size_t pos = production.find('|');
            string nextSymbol = production.substr(0, pos);
            if (nextSymbol != "ε") {
                // Push production onto stack in reverse order
                stack.push(production.substr(pos + 1)); // Remaining part of the production
                currentNode->children.push_back(new TreeNode{nextSymbol, {}});
                currentNode = currentNode->children.back();
            }
        }
    }

    return root;
}

// Print the parse tree (in-order traversal)
void printParseTree(TreeNode* node, int depth = 0) {
    if (!node) return;
    cout << string(depth, ' ') << node->value << endl;
    for (TreeNode* child : node->children) {
        printParseTree(child, depth + 2);
    }
}

int main() {
    string input;
    cout << "Enter a mathematical expression: ";
    cin >> input;

    TreeNode* parseTreeRoot = constructParseTree(input);
    cout << "\nParse Tree:\n";
    printParseTree(parseTreeRoot);

    // Clean up memory (not shown in this simplified example)

    return 0;
}
