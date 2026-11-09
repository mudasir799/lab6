#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter a string: ";
    cin >> name;

    cout << "Reversed String: ";

    for (int i = name.length() - 1; i >= 0; i--) {
        cout << name[i];
    }

    return 0;
}
