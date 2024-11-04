#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(a > 1 || b > 1) {
        cout << "no" << endl;
        return 0;
    }
    if(a < -1 || b < -1) {
        cout << "no" << endl;
        return 0;
    }
    cout << "yes" << endl;
    return 0;
}
