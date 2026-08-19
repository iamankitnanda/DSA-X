#include <iostream>
using namespace std;
void change(int &x) {
    x = 100;
    cout << x << endl; // 100
}

int main() {
    int a = 10;
    change(a);

    cout << a; // 100
    
}