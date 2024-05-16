#include <vector>
#include <iostream>

using namespace std;
class PrimeFactor
{
private:
	int balance;

public:
	PrimeFactor() :balance() {

	}
	vector<int> getFactors(int value)
	{
		vector<int> ret;
		if (value == 2)
		{
			ret.push_back(2);
		}
		return ret;
	}
};