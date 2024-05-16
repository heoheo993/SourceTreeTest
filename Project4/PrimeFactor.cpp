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
		if (val <= 1) 
			return { 1 };

		vector<int> ret;
		int Originval = val;
		for (int DivValue = 2; DivValue <= Originval; DivValue++) {
			while (val % DivValue == 0)
			{
				ret.push_back(DivValue);
				val /= DivValue;
				if (val == 1)
					return ret;
			}
		}

		return ret;
	}
};