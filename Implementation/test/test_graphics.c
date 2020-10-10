#include<unity.h>
#include<graphics.h>
void setup() {}
void tearDown() {}
void test_graphics(void)
{
	TEST_ASSERT_EQUAL(RIGHT, graphics(77));
	TEST_ASSERT_EQUAL(LEFT, graphics(75));
	TEST_ASSERT_EQUAL(UP, graphics(72));
	TEST_ASSERT_EQUAL(DOWN, graphics(80));
}
int test_main(void)
{
	UNITY_BEGIN()
	RUN_TEST(test_graphics);
	return UNITY END();
}
