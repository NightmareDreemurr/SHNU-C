#include <stdio.h>

int main(void) {
    const int get_up = 27;
    const int lock = 23;
    const double walk_speed = 1.2;
    const double ride_speed = 3.0;
    int distance;
    scanf("%d", &distance);
    int ride_time = get_up + lock + distance / ride_speed;
    int walk_time = distance / walk_speed;
    if(walk_time < ride_time) {
        printf("Walk");
    } else if(walk_time > ride_time) {
        printf("Bike");
    } else {
        printf("All");
    }
    return 0;
}