#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	const int MIN_VALUE = 1;
	int die1, die2, die3, die4, die5, die6, die7, die8, coinflip;
	int choice;
	int times;
	bool go = true;

	srand(time(0));

	//die1 = (rand() % (3 - MIN_VALUE + 1)) + MIN_VALUE; //d3
	//die2 = (rand() % (4 - MIN_VALUE + 1)) + MIN_VALUE; //d4
	//die3 = (rand() % (6 - MIN_VALUE + 1)) + MIN_VALUE; //d6
	//die4 = (rand() % (8 - MIN_VALUE + 1)) + MIN_VALUE; //d8
	//die5 = (rand() % (10 - MIN_VALUE + 1)) + MIN_VALUE; //d10
	//die6 = (rand() % (100 - MIN_VALUE + 1)) + MIN_VALUE; //d%
	//die7 = (rand() % (12 - MIN_VALUE + 1)) + MIN_VALUE; //d12
	//die8 = (rand() % (20 - MIN_VALUE + 1)) + MIN_VALUE; //d20
	//coinflip = (rand() % (3 - MIN_VALUE + 1)) + MIN_VALUE; //flip coin

	while (go == true) {
		cout << "Choose the type of die you want to roll" << endl;
		cout << "Choice 1: d20" << endl;
		cout << "Choice 2: d12" << endl;
		cout << "Choice 3: d10" << endl;
		cout << "Choice 4: d%" << endl;
		cout << "Choice 5: d8" << endl;
		cout << "Choice 6: d6" << endl;
		cout << "Choice 7: d4" << endl;
		cout << "Choice 8: d3" << endl;
		cout << "Choice 9: Coin Flip" << endl;
		cout << "Enter 0 to exit" << endl;
		cin >> choice;

		switch (choice) {
		case 1: {
			int total = 0;
			cout << "How many d20 do you wish to roll? ";
			cin >> times;
			for (int i = 1; i <= times; i++) {
				die8 = (rand() % (20 - MIN_VALUE + 1)) + MIN_VALUE; //d20
				cout << die8 << endl;
				total += die8;
			}
			cout << "Total: " << total << endl << endl;
			cout << "Press Enter to roll something else" << endl;
			cin.ignore();
			cin.get();
			system("cls");
			break;
		}
		case 2: {
			int total = 0;
			cout << "How many d12 do you wish to roll? ";
			cin >> times;
			for (int i = 1; i <= times; i++) {
				die7 = (rand() % (12 - MIN_VALUE + 1)) + MIN_VALUE; //d12
				cout << die7 << endl;
				total += die7;
			}
			cout << "Total: " << total << endl << endl;
			cout << "Press Enter to roll something else" << endl;
			cin.ignore();
			cin.get();
			system("cls");
			break;
		}
		case 3: {
			int total = 0;
			cout << "How many d10 do you wish to roll? ";
			cin >> times;
			for (int i = 1; i <= times; i++) {
				die5 = (rand() % (10 - MIN_VALUE + 1)) + MIN_VALUE; //d10
				cout << die5 << endl;
				total += die5;
			}
			cout << "Total: " << total << endl << endl;
			cout << "Press Enter to roll something else" << endl;
			cin.ignore();
			cin.get();
			system("cls");
			break;
		}
		case 4: {
			cout << "How many percent dice do you wish to roll? ";
			cin >> times;
			for (int i = 1; i <= times; i++) {
				die6 = (rand() % (100 - MIN_VALUE + 1)) + MIN_VALUE; //d%
				cout << die6 << endl;
			}
			cout << endl;
			cout << "Press Enter to roll something else" << endl;
			cin.ignore();
			cin.get();
			system("cls");
			break;
		}
		case 5: {
			int total = 0;
			cout << "How many d8 do you wish to roll? ";
			cin >> times;
			for (int i = 1; i <= times; i++) {
				die4 = (rand() % (8 - MIN_VALUE + 1)) + MIN_VALUE; //d8
				cout << die4 << endl;
				total += die4;
			}
			cout << "Total: " << total << endl << endl;
			cout << "Press Enter to roll something else" << endl;
			cin.ignore();
			cin.get();
			system("cls");
			break;
		}
		case 6: {
			int total = 0;
			cout << "How many d6 do you wish to roll? ";
			cin >> times;
			for (int i = 1; i <= times; i++) {
				die3 = (rand() % (6 - MIN_VALUE + 1)) + MIN_VALUE; //d6
				cout << die3 << endl;
				total += die3;
			}
			cout << "Total: " << total << endl << endl;
			cout << "Press Enter to roll something else" << endl;
			cin.ignore();
			cin.get();
			system("cls");
			break;
		}
		case 7: {
			int total = 0;
			cout << "How many d4 do you wish to roll? ";
			cin >> times;
			for (int i = 1; i <= times; i++) {
				die2 = (rand() % (4 - MIN_VALUE + 1)) + MIN_VALUE; //d4
				cout << die2 << endl;
				total += die2;
			}
			cout << "Total: " << total << endl << endl;
			cout << "Press Enter to roll something else" << endl;
			cin.ignore();
			cin.get();
			system("cls");
			break;
		}
		case 8: {
			int total = 0;
			cout << "How many d3 do you wish to roll? ";
			cin >> times;
			for (int i = 1; i <= times; i++) {
				die1 = (rand() % (3 - MIN_VALUE + 1)) + MIN_VALUE; //d3
				cout << die1 << endl;
				total += die1;
			}
			cout << "Total: " << total << endl << endl;
			cout << "Press Enter to roll something else" << endl;
			cin.ignore();
			cin.get();
			system("cls");
			break;
		}
		case 9: {
			cout << "How many times do you want to flip a coin? ";
			cin >> times;
			for (int i = 1; i <= times; i++) {
				coinflip = (rand() % (3 - MIN_VALUE + 1)) + MIN_VALUE; //flip coin
				if (coinflip = 1)
					cout << "Heads!" << endl;
				else
					cout << "Tails!" << endl;
			}
			cout << endl;
			cout << "Press Enter to roll something else" << endl;
			cin.ignore();
			cin.get();
			system("cls");
			break;
		}
		case 0: {
			go = false;
			cout << "Exiting" << endl;
			break;
		}
		default: {
			if (choice !=0)
			cout << "That is not a valid response, try again!" << endl << endl;
			cout << "Press Enter to roll something else" << endl;
			cin.ignore();
			cin.get();
			system("cls");
			break;
		}
		}
	}
	system("pause");
	return 0;
}