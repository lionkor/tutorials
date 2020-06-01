#include <iostream>

using std::cout;
using std::endl;

// ++value
int& pre_increment(int& value);

// value++
int post_increment(int& value);

int main() {
    int a = 5;
    cout << "a  : " << a << endl;
    cout << "++a: " << pre_increment(a) << endl;
    cout << "a  : " << a << endl;

    cout << endl;

    int b = 5;
    cout << "b  : " << b << endl;
    cout << "b++: " << post_increment(b) << endl;
    cout << "b  : " << b << endl;
}

// ++value
int& pre_increment(int& value) {
    value += 1;
    return value;
}

// value++
int post_increment(int& value) {
    int temporary = value; // <- copy
    value += 1;
    return temporary;
}
