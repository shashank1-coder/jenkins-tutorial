#include <stdio.h>
#include "lights_control.h"

static int lights_on = 0;

void toggle_lights(void) {
    lights_on = !lights_on;
    if (lights_on) {
        printf("Lights are ON\n");
    } else {
        printf("Lights are OFF\n");
    }
}

int get_light_status(void) {
    return lights_on;
}
