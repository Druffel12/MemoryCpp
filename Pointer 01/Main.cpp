#include <iostream>



int sum(int * a, int * b)
{
	return *a + *b;
}



void FillArray(int * arr)
{
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i;
		*(arr + i) = i;
	}
}


void printArray(int * arr)
{
	std::cout  << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

int main()
{
	int x = 10;
	int * numAptr = new int(10);
	int * numBptr = new int(7);


	int * ArrPtr = new int[10];

	numAptr; // This is equal to the memory address
	*numAptr; // this is equal to the data at the memory address
	std::cout << numAptr << std::endl;
	std::cout << *numAptr << std::endl;

	std::cout << sum(numAptr, numBptr);


	FillArray(ArrPtr);
	printArray(ArrPtr);

	while (true) {}
	// ALWAYS DELETE YOUR POINTERS
	delete numAptr;
	delete numBptr;
	delete[] ArrPtr;
}