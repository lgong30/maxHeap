//! A test file
#include "maxHeap.hpp"


int main()
{
	std::vector<int> myData = {8,71,41,31,10,11,16,46,51,31,21,13};

	maxHeap<int> mH(myData);

	mH.print();

	mH.insert(55);

	mH.print();


	int n = 13;
	while (n >= 0)
	{
		std::cout << mH.extract_max() << std::endl;
	}
}

