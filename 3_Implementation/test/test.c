#include"Quiz.h"
#include"unity.h"
void test_Quizfun();
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Quizfun)

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_searchrecords(void)
{
    char name[20]="Sudheera";
    TEST_ASSERT_EQUAL("Sudheera", name);
   
}
