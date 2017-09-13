#include <iostream>
#include "Playlist.h"


struct Aussiegochi
		{
			float happiness;
			float hunger;
			float thirst;
			float sanity;
		};

		void feedAussie(Aussiegochi& aus)
		{
			aus.hunger -= 5;
			aus.thirst += 2;
			aus.happiness += 3;
		}
		void waterAussie(Aussiegochi& aus)
		{
			aus.thirst -= 5;
			aus.hunger += 3;
			aus.happiness += 3;
		}
		void abuseAussie(Aussiegochi& aus)
		{
			aus.sanity += 2;
			aus.happiness += 10;
			aus.hunger += 4;
			aus.thirst -= 2;
		}
		void coddleAussie(Aussiegochi& aus)
		{
			aus.happiness -= 4;
			aus.sanity -= 6;
			aus.hunger += 1;
			aus.thirst += 2;
		}

struct Weapon
{
	int bluntDamage;
	int magicDamage;
	int bladeDamage;

	struct OwnerInfo
	{
		int playerID;
		bool isRare;
	};
	OwnerInfo owner;

};

void enhanceWeapon(Weapon& weap)
{
	weap.bladeDamage *= 2;
	weap.bluntDamage *= 2;
	weap.magicDamage *= 2;
}

void sum(int a, int b, int& c)
{
	c = a + b;
}

int main()
{
	//refrences
	int hotdog = 10;				//primitive variable
	int& dinosaur = hotdog;			//refrence to hotdog
	int* dinosaurPtr = &hotdog;		//pointer to hotdog
									
	int tacos = hotdog;				//copies the value of hotdog

	hotdog = 15;

	std::cout << hotdog << std::endl;
	std::cout << dinosaur << std::endl;
	std::cout << *dinosaurPtr << std::endl;

	std::cout << "tacos" << std::endl;
	std::cout << tacos << std::endl;

	//Refrences with functions

	int valA = 1;
	int valB = 2;
	int valC = -1;

	std::cout << valC << std::endl;

	sum(valA, valB, valC);

	std::cout << sum << std::endl;

	//Refrences with structs!
	Weapon hammer;
	hammer.bluntDamage = 9001;
	hammer.bladeDamage = 0;
	hammer.magicDamage = 0;

	std::cout << "BLADE " << hammer.bladeDamage << std::endl;
	std::cout << "BLUNT " << hammer.bluntDamage << std::endl;
	std::cout << "MAGIC " << hammer.magicDamage << std::endl;

	enhanceWeapon(hammer);

	std::cout << "BLADE " << hammer.bladeDamage << std::endl;
	std::cout << "BLUNT " << hammer.bluntDamage << std::endl;
	std::cout << "MAGIC " << hammer.magicDamage << std::endl;

	int thing = -12;
		
	Weapon arsenal[3] =
	{
		//Blunt Magic Blade PID Rrity
		{9001,  0,     0,    {0, true}, },
		{0,     9001,  0,    {0, true}, },
		{0,     0,     8999, {0, false}, },
	};

	for (int i = 0; i < 3; ++i)
	{
		int& pid = arsenal[i].owner.playerID;
		std::cout << pid << std::endl;

		if (pid == 0);
	}

	//closed
	//1
		int ref1 = 11;
		float ref2 = 12.6;
		bool ref3 = false;
		char cole = 'D';

		//2
		void SumRef(float a, float b, float c);
		{
			float a = ref1;
			float b = ref2;
			float c = cole;
			float sum = a + b + c;
			std::cout << sum << std::endl;
		}
	//open
	//1
		void swap(float& y, float& x);
		{
			int lmao;
			int lol;
			std::cin >> lmao;
			std::cin >> lol;

			float x = lmao;
			float y = lol;
			float z = y;
			float x = y;
			float y = x;
			float y = z;
			
		}
		
		Track WaymoreSongs[68];

		Track songs[5];
		songs[0].TrackName = "Pokemon";
		songs[0].playTime = 3.70f;
		songs[1].TrackName = "Hello World";
		songs[1].playTime = 20.16f;
		songs[2].TrackName = "money";
		songs[2].playTime = 69.420f;
		songs[3].TrackName = "Hello World2222";
		songs[3].playTime = 20.16f;
		songs[4].TrackName = "money and chicks";
		songs[4].playTime = 69.420f;


		Playlist playlist= { "Roadtrip Mix Tape", songs, 5 };
		
			
			while(true) {}

}
