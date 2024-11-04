#include <bits/stdc++.h>
using namespace std;

int sum_all(const int a){
    int sum = 0;
    for(int i = a; i > 0; i--) {
        sum += i;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    for(int overall = 1; overall <= 1000; overall++) {
        for(int my_home = 1; my_home <= overall; my_home++) {
            if (sum_all(overall) - 2 * my_home == n) {
                cout << my_home << " " << overall << endl;
            }
        }
    }
    return 0;
}
