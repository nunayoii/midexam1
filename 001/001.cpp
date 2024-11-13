

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "輸入一個正整數:";
    cin >> n;

    int result = 1;

    for (int i = 1; i <= n; i++) {

        result *= i;
    }
    
    cout << n << "! = "  << result;

}


