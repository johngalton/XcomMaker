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

class Card
{
public:
	Card()
	{
		this->name = "";
		this->description = "";
	}

	//Initialise a card
	Card(std::string name, std::string desc)
	{

	}

	std::string ToString()
	{
		std::string string = "";
		string += this->name;
		string += "\r\n";
		string += "====================";
		string += this->description;
		
		return string;
	}
private:
	std::string name;
	std::string description;
};

class Deck
{
public:
	Deck()
	{
		
	}

	void AddCard(Card card)
	{
		cards.push_back(card);
	}

	bool IsEmpty(void)
	{
		bool isEmpty = false;

		//Work out if the deck is empty

		return isEmpty;
	}

	Card DealCard(void)
	{
		Card card;

		//Take a card out of the deck and return it

		return card;
	}

	Deck DealCards(unsigned int numberOfCards)
	{
		Deck deck = Deck();

		//Create a deck of dealt cards

		return deck;
	}

	void ShuffleCards(void)
	{
		//Shuffle the cards in this deck
	}

private:
	std::vector<Card> cards;
};

int main()
{
	//Test the dice rollers

	RollResult result = DiceRoller::RollDice(5, false);

	std::cout << result.ToString();

	std::cin.get();

	Deck testDeck = Deck();

	testDeck.AddCard(Card("Random Card1", "This card does 1 random thing..."));
	testDeck.AddCard(Card("Random Card2", "This card does 2 random things..."));
	testDeck.AddCard(Card("Random Card3", "This card does 3 random things..."));
	testDeck.AddCard(Card("Random Card4", "This card does 4 random things..."));
	testDeck.AddCard(Card("Random Card5", "This card does 5 random things..."));

	testDeck.ShuffleCards();

	Card dealtCard = testDeck.DealCard();
	std::cout << dealtCard.ToString();

	std::cin.get();

    return 0;
}

