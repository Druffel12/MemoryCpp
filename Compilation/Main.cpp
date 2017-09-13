#include <iostream>
#include <cassert>
#include "Globals.h"

void diffArrays(int * arrA, size_t arrASize,
	int * arrB, size_t arrBSize)
{
	assert(arrBSize <= arrASize);
#ifdef _DEBUG
	if (arrBSize > arrASize)
	{
		std::cerr << __FILE__ << "\n " << __LINE__ << "\n" << "ArrB's size exceeds that of ArrA!" << std::endl;
		std::cerr << "COMPILED ON: " << __DATE__ << " \n " << __TIME__ << "\n";
		abort();
	}
#endif
	for (int i = 0; i < arrBSize; ++i)
	{
		arrA[i] -= arrB[i];
	}

}

void counter()
{
	static int ct = 0;
	ct++;

	std::cout << ct << std::endl;
}


void releaseHalfLove()
{

	std::cout << "The Game Half-Love " << Counter+1 << " was released" << std::endl;


	// ++val // PREincrement, changes before evaluation
	// val++ // POSTincrement changes after evaluation
	Counter = ++Counter % 2;
}

float divide(float lhs, float rhs)
{
	assert(rhs != 0.0f && "Division by zero detected");

	return lhs / rhs;
}

void stepFizzBuzz()
{
	static int counter = 1;

	if (counter % 3 == 0)
	{
		std::cout << "Fizz" << std::endl;
		if (counter % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
		}
	}
	else if (counter % 5 == 0)
	{
		std::cout << "Buzz" << std::endl;
	}
	
}

void callMeMaybe()
{
	static int call = 0 ;

	if (call == 0)
	{
		std::cout << " do you need something " << std::endl;
	}
	else if (call == 1)
	{
		std::cout << "Sup my dude" << std::endl;
	}
	else if (call == 2)
	{
		std::cout << " I wanna sleep go away " << std::endl;
	}
	else (call == 3);
	{
		std::cout << " arent you bored? " << std::endl;;
	}
}

int main()
{
	// Preprocessor Directives
	int numA[] = { 3, 2, 1 };
	int numB[] = { 3, 2, 1, 10, 12 };

	//diffArrays(numA, 3, numB, 5);
	
	for (int i = 0; i < 3; ++i)
	{
		std::cout << numA[i] << std::endl;
	}


	// Static Local Variables

	for (int i = 0; i < 3; ++i)
	{
		counter();
	}
	// Global Variables (m/ extern! :D)
	std::cout << GlobalOffensive << std::endl;
	makeItOne();
	std::cout << GlobalOffensive << std::endl;
	makeItTwo();
	std::cout << GlobalOffensive << std::endl;

	//closed 
	//1
	for (int i = 0; i < 4; ++i)
	{
		releaseHalfLove();
	}

	//2 

	void stepFizzBuzz();

	//open 
	//1


		while (true) {}

}