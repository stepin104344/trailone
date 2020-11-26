#include "unity.h"
	#include "prison.h"

	void setUp()
	{	}
	void tearDown()
	{	}

	void test_prison(void)
	{
    TEST_PASS_MESSAGE("PASS");
	}
	void test_prison1(void)
	{
    TEST_PASS_MESSAGE("PASS");
	}
	void test_prison2(void)
	{
    TEST_PASS_MESSAGE("PASS");
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_prison);
	  	RUN_TEST(test_prison1);
        RUN_TEST(test_prison2);
  		return UNITY_END();
	}
