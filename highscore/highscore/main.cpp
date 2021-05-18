#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>

using namespace std;

void play_game()
{
	int random = rand() % 251;
	cout << "So can tim la: " << random << endl;
	cout << "Guess a number:" << endl;
	int count = 0;

	while (true)
	{
		int guess;
		cin >> guess;

		if (guess == random)
		{
			cout << "You win" << endl; break;
		}
		if (guess < random) {
			cout << "Too low" << endl;
		}
		if (guess > random) {
			cout << "Too high" << endl;
		}
		count++;
	}

	ifstream input("best_score.txt");

	int best_score;
	input >> best_score;
	cout << endl << "So lan doan ra nhanh nhat: " << best_score << endl;

	ofstream output("best_score.txt");
	if (count < best_score)
	{
		output << count;
	}
	else {
		output << best_score;
	}
}

int main()
{
	play_game();
	return 0;
}