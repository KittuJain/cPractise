#include "practise.h"
#include <stdio.h>

int add(int a, int b) {
	return a+b;
};

float sumOfNTerms(int a,int n){
	float sum = 0;
	int i;
	sum = sum + a;
	for (i = 1; i < n; i++){
		sum = sum + (1.0/(2*i));
	};
	return sum;
};

int fact (int term) {
	if(term==1)
		return 1;
	return term * fact(term-1);
};

float sumOfFactorailNTerms(int n){
	int count = 0;
	float sum = 0;
	for(count = 1; count <= n; count++ ){
		sum = sum + (1.0/fact(count));
	};
	return sum;
};

float sumOfNumberAndANumberLessThanIt(int n){
	int count = 0;
	float sum = 0;
	for(count = 1; count <= n; count++ ){
		sum = sum + (1.0/(count*count+1));
	};
	return sum;
};

int isNumberPalindrome(int number){
	int temp,modulus,reversed_number=0;
	temp = number;

	while(temp!=0){
		modulus = temp%10;
		reversed_number = reversed_number*10+modulus;
		temp = temp/10;
	};
	if(reversed_number==number){
		return 1;
	}else{
		return 0;
	}
};
