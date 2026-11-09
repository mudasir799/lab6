#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string name;

    cout << "Enter a string: ";
    cin >> name;

    for (int i = 0; i < name.length(); i++) {
        name[i] = toupper(name[i]);
    }

    cout << "Uppercase: " << name;

    return 0;
}
