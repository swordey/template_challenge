#include "../inc/testing.h"
#include "../../challenge/challenge.h"

int solution(int a, int b) {
  return a + b;
}

void sample_tests() {
    TEST_ASSERT_EQUAL(21, add(10, 11));
    TEST_ASSERT_EQUAL(267, add(139, 128));
}

void fixed_tests()
{
    TEST_ASSERT_EQUAL(2, add(1, 1));
    TEST_ASSERT_EQUAL(4, add(2, 2));
    TEST_ASSERT_EQUAL(6, add(3, 3));
}

void random_tests()
{
    srand(time(0));
    for(auto i = 0; i < 150; i++)
    {
        int a = rand() % 1000;
        int b = rand() % 1000;
        int res = solution(a, b);
        TEST_ASSERT_EQUAL(res, add(a, b));
    }
}