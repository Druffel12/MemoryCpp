#include <iostream>
#include <fstream>
#include <string>

using std::string;

using std::fstream;		//:D - select what we know we'll use!

using namespace std;    //D: -

int main()
{
	fstream file;

	/*file.open("Text.txt");

	if (file.fail())
	{
		std::cout << "File not found." << std::endl;
		return -1;
	}

	// Reading from a file
	string buffer;
	while (std::getline(file, buffer))
	{
		// print the line!
		std::cout << buffer << std::endl;
	}

	file.clear(); // reset the error flags

	file.seekp(0, std::ios_base::end); // move mt cursor to the end

	// writing to a file
	//write a message! :D
	file << std::endl << "Today is always the present!";

	file.flush();

	file.close();

	// let's make another thingie
	
	fstream autoCreate;

	autoCreate.open("createme.txt", std::ios::out);

	if (autoCreate.fail())
	{ 
		std::cout << "Something went wrong." << std::endl;
		return -1;

	}*/
	
	fstream autoCreate;
	autoCreate.close();

	//closed 
	//1
	string input;

	std::cout << "Please input the name ";
	std::cout << "and extension of the file you are looking for" << std::endl;
	
	std::cin >> input;

	file.open(input);

	if (file.fail())
	{
		std::cout << "File not found." << std::endl;
		return -1;
	}
	string bufferz;
	while (std::getline(file, bufferz))
	{
		std::cout << bufferz << std::endl;
	}

	//2
	string name;

	std::cout << "Who are you?" << std::endl;
	std::cin >> name;

	file << std::endl << name ;

	file.flush();

	file.close();

	string age;

	std::cout << "how old are you are you?" << std::endl;
	std::cin >> age;

	file << std::endl << age;

	file.flush();

	file.close();

	string color;

	std::cout << "Favorite color?" << std::endl;
	std::cin >> color;

	file << std::endl << color;

	file.flush();

	fstream profile;

	profile.open("Profile.txt");
	//open
	//1
	char block = 219;
	//profile.clear();

	string buffer;
	while (std::getline(profile, buffer))
	{
		buffer.length();
		buffer[0] = block;
		buffer[1] = block;
		buffer[5] = block;
		buffer[8] = block;
		buffer[12] = block;
		buffer[15] = block;
		buffer[18] = block;
		buffer[21] = block;
		buffer[24] = block;
		buffer[27] = block;
		buffer[30] = block;
		buffer[34] = block;
		buffer[37] = block;
		buffer[39] = block;
		buffer[42] = block;
		buffer[46] = block;
		buffer[49] = block;
		buffer[53] = block;
		buffer[56] = block;
		buffer[58] = block;
		buffer[60] = block;
		buffer[63] = block;
		buffer[65] = block;
		buffer[68] = block;
		buffer[71] = block;
		buffer[74] = block;
		buffer[77] = block;
		buffer[79] = block;
		buffer[82] = block;
		buffer[85] = block;
		buffer[87] = block;
		buffer[90] = block;
		buffer[93] = block;
		buffer[96] = block;
		buffer[99] = block;
		buffer[102] = block;
		



		std::cout << buffer << std::endl;
	}

	

	profile.close();
file.close();
	while (true) {}

	//Writing to a file

}