#include <iostream>
using namespace std;

int fact(int n) {
    if(n==1||n==0) {
        return 1;
    }
    return (n*fact(n-1));
}

int main() {
    int n;
    cout << "enter the numver for finding factorial :\n";
    cin >> n;
    cout << "factorial = " << fact(n) << endl;
}