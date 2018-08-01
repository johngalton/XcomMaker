// XcomMaker.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class RollResult
{
//Public
public:
	//Variables
	unsigned int numberOfHits;
	unsigned int alienResult;

	RollResult()
	{
		numberOfHits = 0;
		alienResult = 1;
	}

	std::string ToString()
	{
		std::string string = "Hit " + std::to_string(this->numberOfHits) + " times\r\n";
		string += "Alien result was " + std::to_string(this->alienResult) + "\r\n";

		return string;
	}
};

class DiceRoller
{
public:
	static RollResult RollDice(unsigned int numberOfDice, bool isDangerous)
	{
		RollResult result = RollResult();

		//Roll the appropriate number of xcom dice and an alien dice and return result

		return result;
	}

private:
	bool RollXcomDice()
	{
		bool hit = false;

		//Determine if hit or miss and then return it

		return hit;
	}

	unsigned int RollAlienDice(bool isDangerous)
	{
		unsigned int result = 1;

		//Determine the result of the alien dice roll

		return result;
	}
};

int main()
{
	RollResult result = DiceRoller::RollDice(5, false);

	std::cout << result.ToString();

	std::cin.get();

    return 0;
}

