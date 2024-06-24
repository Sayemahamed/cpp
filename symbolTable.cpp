#include <iostream>
#include <vector>
#include <cctype>
#include <cstdlib>

using namespace std;

struct Symbol {
    char symbol;
    void* address;
    string type;
};

int main() {
    vector<Symbol> symbolTable;
    string expression;
    char searchSymbol;
    bool flag = false, isValid = true;

    cout << "Enter expression terminated by $: ";
    getline( cin, expression, '$' );

    cout << "Given expression: " << expression << endl;



    for (size_t i = 0; i < expression.size(); ++i) {
        char currentChar = expression[ i ];
        if (isalpha( currentChar )) {
            bool isLastChar = (i == expression.size() - 1);
            char nextChar = isLastChar ? '\0' : expression[ i + 1 ];

            if (isLastChar || nextChar == '+' || nextChar == '-' || nextChar == '*' || nextChar == '=') {
                void* address = malloc( sizeof( char ) );
                if(islower(currentChar))
                symbolTable.push_back( { currentChar, address, "identifier" } );
                else
                symbolTable.push_back( { currentChar, address, "identifier" } );
            }
            else  isValid = false;
        }
    }
    if (isValid) {
        cout << "Symbol table" << endl;
        cout << "Symbol\tAddress\t\tType" << endl;
        for (auto& it : symbolTable)
            cout << it.symbol << "\t" << it.address << "\t\t" << it.symbol << endl;
    }
    else {
        cout << "Invalid expression" << endl;
        return 0;
    }

    cout << "Enter the symbol to be searched: ";
    cin >> searchSymbol;

    for (const auto& symbol : symbolTable) {
        if (symbol.symbol == searchSymbol) {
            cout << "Symbol found" << endl;
            cout << searchSymbol << "\t@address\t" << symbol.address << endl;
            flag = true;
            break;
        }
    }
    if (!flag) {
        cout << "Symbol not found" << endl;
    }
}