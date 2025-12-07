#include <iostream>
using namespace std;

void fibu(int n) {
    int a = 0, b = 1;
    for(int i =0; i<n; i++) {
        cout << a << endl;
        int temp = a + b;
        a = b;
        b = temp;
    }    
}

int main() {
    int n;
    cout << "enter the number up till which you want to print the fibunachi serires\n";
    cin >> n;
    fibu(n);

}