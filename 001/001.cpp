

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "請輸入一個正整數n:";
    cin >> n;

    int sum = 0;
    int i = 0;

    while (i <= n) {
        sum += i;
        i += 2;
    }
    cout << "偶數總和為:" << sum;
}


