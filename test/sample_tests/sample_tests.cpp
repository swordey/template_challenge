#ifdef UNIT_TEST

#include <Arduino.h>
#include <unity.h>
#include "../lib/testing/inc/testing.hpp"


void setup()
{
    delay(2000); // To establish serial connection to the device
    
    UNITY_BEGIN();
    RUN_TEST(sample_tests);
    RUN_TEST(fixed_tests);
    RUN_TEST(random_tests);
    RUN_TEST(evaluation_tests);
    UNITY_END();
}

void loop()
{
}

#endif