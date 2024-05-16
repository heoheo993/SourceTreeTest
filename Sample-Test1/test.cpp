#include "pch.h"
#include "../Project4/cal.cpp"

class AccountFixture : public testing::Test
{
public:
	Account acount{ 10000 };
};

TEST_F(AccountFixture, TestName) {
	acount.deposit(10000);
	EXPECT_EQ(20000, acount.getBalance());
	EXPECT_TRUE(true);
}

TEST_F(AccountFixture, TestName2) {
	acount.deposit(100);
	EXPECT_EQ(10100, acount.getBalance());

	acount.withDraw(200);
	EXPECT_EQ(9900, acount.getBalance());

	EXPECT_TRUE(true);
}