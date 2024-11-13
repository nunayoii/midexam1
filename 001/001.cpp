

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) 
        return 1;
    else
        return n * factorial(n - 1); 
}

int main() {
    int n;
    cout << "請輸入一個正整數 n: ";
    cin >> n;

    if (n < 0) {
        cout << "輸入的數字必須為正整數。" << endl;
    }
    else {
        cout << n << "! = " << factorial(n) << endl;
    }

    return 0;
}



