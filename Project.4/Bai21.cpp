#include <iostream>
using namespace std;
int main()
{
    int n;
    int S = 0;
    cout << "Nhap n";
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        S = S + i;
    }

    cout << S;
    return 0;
}