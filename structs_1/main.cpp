#include <iostream>

struct time {
    int minute;
    int hour;
};

int main() {
    time work, lunch, sleep;

    work.hour = 8;
    work.minute = 30;

    lunch.hour = 13;
    lunch.minute = 0;

    sleep.hour = 23;
    sleep.minute =30;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
