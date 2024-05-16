class Account
{
private:
	int balance;

public:
	Account() :balance() {

	}
	explicit Account(int InitBalance) :balance(InitBalance) {

	}
	void withDraw(int money)
	{
		balance -= money;
	}
	void deposit(int money)
	{
		balance += money;
	}
	int getBalance()
	{
		return balance;// balance;
	}
};