

#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "輸入月份:";
    cin >> m;

    if (m >= 3 && m <= 5) {
        cout << "春季";
    }
    else if (m >= 6 && m <= 8) {
        cout << "夏季";
    }
    else if (m >= 9 && m <= 11) {
        cout << "秋季";
    }
    else if (m == 12 || m == 1 || m == 2) {
        cout << "冬季";
    }
    else {
        cout << "!!輸入正確月份!!";
    }
    return 0;
}


