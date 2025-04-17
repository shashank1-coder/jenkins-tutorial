#include <stdio.h>
#include "unity.h"
#include "lights_control.h"

void setUp(void) {
    // This is run before EACH TEST
}

void tearDown(void) {
    // This is run after EACH TEST
}

void test_toggle_lights(void) {
    toggle_lights(); // Lights ON
    TEST_ASSERT_EQUAL(1, get_light_status());

    toggle_lights(); // Lights OFF
    TEST_ASSERT_EQUAL(0, get_light_status());
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_toggle_lights);
    return UNITY_END();
}
