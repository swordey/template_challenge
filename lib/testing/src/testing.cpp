#include "../inc/testing.h"
#include "../../challenge/challenge.h"

/*
* The following variable can be used to check if all tests are passed.
* Each test sets a certain bit, and at the end, we can check the value
* of this variable as a decimal number.
*
* e.g.: We have 3 tests, therefore we will use the last 3 bits, that means
* 0b00111 = 7, will be the value we check in the last test. If passed is 7,
* it means all test passed. 
*
* If all tests passed, we can print out a message to the user, to let him 
* know, he succeeded, and maybe a random string, that he can send us to 
* prove that he finished the task correctly. As this file will be archived, 
* the result string can't be easily read out, so it is a good way to check 
* if the user could solve the challenge or not.
*/
int passed = 0;

int solution(int a, int b) {
  return a + b;
}

void sample_tests() {
    TEST_ASSERT_EQUAL(21, add(10, 11));
    TEST_ASSERT_EQUAL(267, add(139, 128));
    passed |= 1;
}

void fixed_tests()
{
    TEST_ASSERT_EQUAL(2, add(1, 1));
    TEST_ASSERT_EQUAL(4, add(2, 2));
    TEST_ASSERT_EQUAL(6, add(3, 3));
    passed |= 1 << 1;
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
    passed |= 1 << 2;
}

void evaluation_tests()
{
    if(passed == 7)
    {
        TEST_MESSAGE("Congratulations!");
        TEST_MESSAGE("You solved the challenge correctly!");
        TEST_MESSAGE("Here is the secret string: secret-string");
    }
    else
    {
        TEST_FAIL();
    }
}