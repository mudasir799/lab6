#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter a string: ";
    cin >> name;

    if (name[0] == name[name.length() - 1]) {
        cout << "First and Last Characters are Same";
    }
    else {
        cout << "First and Last Characters are Different";
    }

    return 0;
}
