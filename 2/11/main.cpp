#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, n, result;
    cin >> a >> n;
    result = a;
    n--;
    for(int i = 0;i < n;i++) {
        if(result > 7) {
            result = result % 7 * 3;
        } else {
            result *= a;
        }
    }
    result = result % 7;
    string result_string;
    switch(result) {
        case 1:
            result_string = "Monday";
            break;
        case 2:
            result_string = "Tuesday";
            break;
        case 3:
            result_string = "Wednesday";
            break;
        case 4:
            result_string = "Thursday";
            break;
        case 5:
            result_string = "Friday";
            break;
        case 6:
            result_string = "Saturday";
            break;
        case 7:
            result_string = "Sunday";
    }
    cout << result_string;
    return 0;
}
