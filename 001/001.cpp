

#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "輸入月份:";
    cin >> m;

    switch (m) {
        case 3: case 4: case 5:
            cout << "春季";
            break;
        case 6: case 7: case 8:
            cout << "夏季";
            break;
        case 9: case 10: case 11:
            cout << "秋季";
            break;
        case 12: case 1: case 2:
            cout << "冬季";
            break;
        default:
            cout << "輸入正確的月份";
    }
    return 0;
}


