#include <stdio.h>

int main(void) {
    int before_hour, before_minute, before_second, after_hour, after_minute, after_second, before_total_seconds, after_total_seconds, total_seconds;
    scanf("%d:%d:%d %d:%d:%d", &before_hour, &before_minute, &before_second, &after_hour, &after_minute, &after_second);
    before_total_seconds = before_hour * 3600 + before_minute * 60 + before_second;
    after_total_seconds = after_hour * 3600 + after_minute * 60 + after_second;
    total_seconds = after_total_seconds - before_total_seconds;
    int result_hour = total_seconds / 3600;
    int result_minute = total_seconds / 60 % 60;
    int result_second = total_seconds % 60;
    if (total_seconds > 7200) {
        printf("%02d:%02d:%02d NO",result_hour,result_minute,result_second);

    } else {
        printf("%02d:%02d:%02d OK",result_hour,result_minute,result_second);
    }
    return 0;
}
