#include "expr_assert.h"
#include "practise.h"

void test_add_1_and_1_results_in_2 () {
	assertEqual(add(1,1),2);
};

void test_the_sum_of_series (){
	assertEqual(sumOfNTerms(1,3),1.75 );
	assertEqual(sumOfNTerms(1,4),1.91 );
};

void test_the_sum_of_series_of_factorial_denominator (){
	assertEqual(sumOfFactorailNTerms(3), 1.66);
};

void test_sum_of_number_and_a_number_less_than_it (){
	assertEqual(sumOfNumberAndANumberLessThanIt(1), 0.5);
	assertEqual(sumOfNumberAndANumberLessThanIt(2), 0.66);
	assertEqual(sumOfNumberAndANumberLessThanIt(3), 0.75);
};

void test_the_number_is_palindrome (){
	assertEqual(isNumberPalindrome(12345), 0);
	assertEqual(isNumberPalindrome(12321), 1);
	assertEqual(isNumberPalindrome(65456), 1);	
};