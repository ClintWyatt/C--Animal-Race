
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int moveMe();
int yourSeed();
void tortise(int tortiseLocation, string torLetter);
void hare(int hareLocation, string harLetter);
void finalStats(int tortiseLocation, int hareLocation, string torLetter, string harLetter, int turn);

int main()
{
	yourSeed(); //user imputs a number that is put into the random number generator. 

	int random = rand() % 6;
	int tortiseLocation = 1;
	int hareLocation = 1;
	const int winNum = 65;
	int counter = 0, turn = 0;
	string torLetter = "", harLetter = "";

	while (tortiseLocation <= winNum && hareLocation <= winNum)
	{
			tortiseLocation += moveMe();
			hareLocation += moveMe();

			if (tortiseLocation < 1)
				tortiseLocation = 1;

			if (hareLocation < 1)
				hareLocation = 1;

			if (counter % 5 == 0)
			{
				cout << endl;
				 tortise(tortiseLocation, torLetter);
				 hare(hareLocation, harLetter);
				
				cout << "The tortise location is " << tortiseLocation << endl;
				cout << "The hare's location is " << hareLocation << endl;
				cout << "This is the end of turn " << counter << endl;
			}

			counter++;
			turn++;
	}

	finalStats( tortiseLocation, hareLocation, torLetter, harLetter, turn);
	cout << endl;
	if (tortiseLocation > hareLocation)
		cout << "The tortise wins!" << endl;
	else if (hareLocation > tortiseLocation)
		cout << "The hare wins!" << endl;
	else if (hareLocation = tortiseLocation)
		cout << "It's a......tie.... " << endl;

	return 0;

}

int moveMe()
{
	int spaces = rand() % 6;
	
	switch (spaces) {

	case 1:
		spaces = 1;
		break;
	case 2:
		spaces = 2;
		break;
	case 3:
		spaces = 3;
		break;
	case 4:
		spaces = 4;
		break;
	case 5:
		spaces = -2;
		break;
	case 6:
		spaces = -3;
		break;
	}

	return spaces;
}
int yourSeed()
{
	int seed;
	cout << "Welcome to the tortise and Hare race by Clint Wyatt" << endl;
	cout << "Enter a positive number for the game to start " << endl;
	cin >> seed;

	while (seed <= 0)
	{
		cout << "Enter a positive number " << endl;
		cin >> seed;
	}

	srand(seed);
	return seed;
}
void tortise(int tortiseLocation, string torLetter)
{
	torLetter = "T";

		for (int i = 1; i <= tortiseLocation; i++)
		{

			cout << torLetter;
		}
		cout << endl;
}

void hare(int hareLocation, string harLetter)
{
	harLetter = "H";

	for (int j = 1; j <= hareLocation; j++)
	{
		cout << harLetter;
	}
	cout << endl;
}

void finalStats(int tortiseLocation, int hareLocation, string torLetter, string harLetter, int turn)
{
	torLetter = "T";
	harLetter = "H";
	if (tortiseLocation > 65 || hareLocation > 65)
	{
		for (int i = 1; i <= tortiseLocation; i++)
		{

			cout << torLetter;
		}
		cout << endl;

		for (int j = 1; j <= hareLocation; j++)
		{
			cout << harLetter;
		}
		cout << endl;
	}
	cout << "The tortise location is " << tortiseLocation << endl;
	cout << "The hare's location is " << hareLocation << endl;
	cout << "The following is the final turn: " << turn << endl;
}

