#include <stdio.h>
#include "unity.h"
#include "temperature_control.h"

void setUp(void) {
    // Setup for each test in this file
}

void tearDown(void) {
    // Teardown for each test in this file
}

void test_set_temperature(void) {
    set_temperature(25);
    TEST_ASSERT_EQUAL(25, get_temperature());

    set_temperature(18);
    TEST_ASSERT_EQUAL(18, get_temperature());
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_set_temperature);
    return UNITY_END();
}
