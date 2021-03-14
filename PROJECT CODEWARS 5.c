/*
Write a program that finds the summation of every number from 1 to num. The number will always be a positive integer greater than 0.

For example:

summation(2) -> 3
1 + 2

summation(8) -> 36
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8

*/

#include <stdio.h>

int main() {

   int max=8;
  int sum=0;
  int total=0;
  for(int i=0;i<max;i++){
    sum++;
    total+=sum;
  }
  printf("%d",total);
}

/*
#include <criterion/criterion.h>
#include <stddef.h>

int summation(int num);

Test(BasicTests, ShouldPassAllTheTestsProvided) {
  cr_assert_eq(summation(1), 1);
  cr_assert_eq(summation(8), 36);
  cr_assert_eq(summation(100), 5050);
}

*/