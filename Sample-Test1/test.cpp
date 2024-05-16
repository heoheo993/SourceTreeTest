#include "pch.h"
#include "../Project4/PrimeFactor.cpp"

TEST(TestCaseName, TestName) {

	vector<int> exp = { 1 };
	EXPECT_EQ(exp, PrimeFactor().getFactors(1));

	exp = { 2 };
	EXPECT_EQ(exp, PrimeFactor().getFactors(2));

	exp = { 3 };
	EXPECT_EQ(exp, PrimeFactor().getFactors(3));

	exp = { 2,2 };
	EXPECT_EQ(exp, PrimeFactor().getFactors(4));

	//exp = { 5 };
	//EXPECT_EQ(exp, PrimeFactor().getFactors(5));

	exp = { 2,3 };
	EXPECT_EQ(exp, PrimeFactor().getFactors(6));

	//exp = { 7};
	//EXPECT_EQ(exp, PrimeFactor().getFactors(7));

	exp = { 2,2,2 };
	EXPECT_EQ(exp, PrimeFactor().getFactors(8));


	EXPECT_TRUE(true);
}

