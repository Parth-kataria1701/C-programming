//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>
#include <string.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight light;
    char input[10];

    scanf("%9s", input);

    if (strcmp(input, "RED") == 0) {
        light = RED;
        printf("Stop");
    }
    else if (strcmp(input, "YELLOW") == 0) {
        light = YELLOW;
        printf("Wait");
    }
    else if (strcmp(input, "GREEN") == 0) {
        light = GREEN;
        printf("Go");
    }

    return 0;
}
