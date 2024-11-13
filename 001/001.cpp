

#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout << "請輸入一個正整數n:";
    cin >> n;

    for (int i = 0; i <= n; i += 2) {
        sum += i;
    }
    cout << "偶數總和為:" << sum;
}


