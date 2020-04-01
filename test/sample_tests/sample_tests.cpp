#ifdef UNIT_TEST

#include <unity.h>
#include "../lib/testing/inc/testing.h"


int main( int argc, char **argv) {
    UNITY_BEGIN();
    RUN_TEST(sample_tests);
    RUN_TEST(fixed_tests);
    RUN_TEST(random_tests);
    UNITY_END();
}

#endif