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

	exp = { 5 };
	EXPECT_EQ(exp, PrimeFactor().getFactors(5));

	exp = { 2,3 };
	EXPECT_EQ(exp, PrimeFactor().getFactors(6));

	exp = { 7};
	EXPECT_EQ(exp, PrimeFactor().getFactors(7));

	exp = { 2,2,2 };
	EXPECT_EQ(exp, PrimeFactor().getFactors(8));

	exp = {3,3 };
	EXPECT_EQ(exp, PrimeFactor().getFactors(9));

	exp = { 2,5};
	EXPECT_EQ(exp, PrimeFactor().getFactors(10));

	exp = { 11 };
	EXPECT_EQ(exp, PrimeFactor().getFactors(11));

	exp = { 2,2,3 };
	EXPECT_EQ(exp, PrimeFactor().getFactors(12));

	exp = { 73, 137 };
	EXPECT_EQ(exp, PrimeFactor().getFactors(10001));

	EXPECT_TRUE(true);
}

