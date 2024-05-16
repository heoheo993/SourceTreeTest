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
	vector<int> getFactors(int val)
	{
		vector<int> ret;
		if (val > 1)
		{
			while (val % 2 == 0)
			{
				ret.push_back(2);
				val /= 2;
			}
			while (val % 3 == 0)
			{
				ret.push_back(3);
				val /= 3;
			}
		}
		else
		{
			return { 1 };
		}

		return ret;
	}
};