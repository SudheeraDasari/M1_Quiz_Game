/**
 * @file test.c
 * @author dasarisudheera
 * @brief 
 * @version 0.1
 * @date 2022-02-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include"Quiz.h"
#include"unity.h"
void test_Main.c();
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Main.c)

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_searchrecords(void)
{
    char name[20]="Sudheera";
    TEST_ASSERT_EQUAL("Sudheera", name);
   
}
