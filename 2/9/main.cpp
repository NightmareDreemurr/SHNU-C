#include <bits/stdc++.h>
using namespace std;

int main()
{
    int apple_num, worm_speed, total_time;
    cin >> apple_num >> worm_speed >> total_time;
    apple_num = apple_num - ceil((double) total_time / (double) worm_speed);
        cout << apple_num << endl;
    return 0;
}
