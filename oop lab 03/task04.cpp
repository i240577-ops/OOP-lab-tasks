#include <iostream>
using namespace std;

int countChar(const char* str, char ch) {
    if (*str == '\0') {          
        return 0;
    }
    if (*str == ch) {             
        return 1 + countChar(str + 1, ch);
    }
    else {                     
        return countChar(str + 1, ch);
    }
}

int main() {
    const char* name;
    char c;

    char input[100];
    cout << "Enter name: ";
    cin.getline(input, 100);

    cout << "Enter a character you want to count: ";
    cin >> c;

    name = input;

    int result = countChar(name, c);
    cout << "The character '" << c << "' appears "<< result << " times in \"" << name << "\"." << endl;
    return 0;
}
