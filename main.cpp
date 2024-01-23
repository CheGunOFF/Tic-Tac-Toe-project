#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

char arr[9];

bool isvalid();
bool isGameStarted();
void display();
void reset();
void showScore();
void win();
void testWrite(string name, string score);
void gameStart();
void gameStop();

bool gameStarted = false;
string playerName;

string scoreTable[10][3] = { };

bool isvalid(int a = 1, char b = ' ')  // Возврат булевого фолс, если ноль | - chars
{
	if ((a >= 0 && a <= 9) && (b == 'x' || b == 'o')) {
		return true;
	}
	else {

		return false;
	}
}

// функция записи
void read()
{
	int a;
	char b;

	for (int i = 1;; ++i) {
		display();
		gameStart();
		string localScore = "1";
		//cout << i << ". ";
		cin >> a >> b;

		if (cin.fail()) {  // проверка, является ли ввод числом
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << "It's not a number!" << endl;
			read();
			break;

		}


		if (isvalid(a, b)) {    // если введённые числа истина то:

			cout << "Valid character..." << endl;
			arr[a] = b;

			for (int i = a; i < 9; ++i) {
				if (
					(isvalid(i, arr[i]) && (arr[i] == arr[0] && arr[i] == arr[1] && arr[i] == arr[2])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[0] && arr[i] == arr[4] && arr[i] == arr[8])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[0] && arr[i] == arr[3] && arr[i] == arr[6])))
				{
					display();

					cout << "\n\n" << playerName << " - Winner !!!" << endl;
					cout << "Take your " << localScore << " point!!!" << endl;

					testWrite(playerName, localScore);
					reset();
					read();
					break;
				}
				else if (
					(isvalid(i, arr[i]) && (arr[i] == arr[0] && arr[i] == arr[1] && arr[i] == arr[2])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[1] && arr[i] == arr[4] && arr[i] == arr[7])))
				{
					display();

					cout << "\n\n" << playerName << " - Winner !!!" << endl;
					cout << "Take your " << localScore << " point!!!" << endl;

					testWrite(playerName, localScore);
					reset();
					read();
					break;
				}
				else if (
					(isvalid(i, arr[i]) && (arr[i] == arr[0] && arr[i] == arr[1] && arr[i] == arr[2])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[2] && arr[i] == arr[4] && arr[i] == arr[6])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[2] && arr[i] == arr[5] && arr[i] == arr[8])))
				{
					display();

					cout << "\n\n" << playerName << " - Winner !!!" << endl;
					cout << "Take your " << localScore << " point!!!" << endl;

					testWrite(playerName, localScore);
					reset();
					read();
					break;
				}
				else if (
					(isvalid(i, arr[i]) && (arr[i] == arr[0] && arr[i] == arr[3] && arr[i] == arr[6])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[3] && arr[i] == arr[4] && arr[i] == arr[5])))
				{
					display();

					cout << "\n\n" << playerName << " - Winner !!!" << endl;
					cout << "Take your " << localScore << " point!!!" << endl;

					testWrite(playerName, localScore);
					reset();
					read();
					break;
				}
				else if (
					(isvalid(i, arr[i]) && (arr[i] == arr[3] && arr[i] == arr[4] && arr[i] == arr[5])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[1] && arr[i] == arr[4] && arr[i] == arr[7])))
				{
					display();

					cout << "\n\n" << playerName << " - Winner !!!" << endl;
					cout << "Take your " << localScore << " point!!!" << endl;

					testWrite(playerName, localScore);
					reset();
					read();
					break;
				}
				else if (
					(isvalid(i, arr[i]) && (arr[i] == arr[3] && arr[i] == arr[4] && arr[i] == arr[5])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[2] && arr[i] == arr[5] && arr[i] == arr[8])))
				{
					display();

					cout << "\n\n" << playerName << " - Winner !!!" << endl;
					cout << "Take your " << localScore << " point!!!" << endl;

					testWrite(playerName, localScore);
					reset();
					read();
					break;
				}
				else if (
					(isvalid(i, arr[i]) && (arr[i] == arr[0] && arr[i] == arr[3] && arr[i] == arr[6])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[6] && arr[i] == arr[4] && arr[i] == arr[2])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[6] && arr[i] == arr[7] && arr[i] == arr[8])))
				{
					display();

					cout << "\n\n" << playerName << " - Winner !!!" << endl;
					cout << "Take your " << localScore << " point!!!" << endl;

					testWrite(playerName, localScore);
					reset();
					read();
					break;
				}
				else if (
					(isvalid(i, arr[i]) && (arr[i] == arr[6] && arr[i] == arr[7] && arr[i] == arr[8])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[1] && arr[i] == arr[4] && arr[i] == arr[7])))
				{
					display();

					cout << "\n\n" << playerName << " - Winner !!!" << endl;
					cout << "Take your " << localScore << " point!!!" << endl;

					testWrite(playerName, localScore);
					reset();
					read();
					break;
				}
				else if (
					(isvalid(i, arr[i]) && (arr[i] == arr[6] && arr[i] == arr[7] && arr[i] == arr[8])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[0] && arr[i] == arr[4] && arr[i] == arr[8])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[2] && arr[i] == arr[5] && arr[i] == arr[8])))
				{
					display();

					cout << "\n\n" << playerName << " - Winner !!!" << endl;
					cout << "Take your " << localScore << " point!!!" << endl;

					testWrite(playerName, localScore);
					reset();
					read();
					break;
				}
			}
		}
		else {
			cout << "Wrong cahracter...";
		}
	}
}
void reset() {
	cout << "\n\n" << ">>>>>New game";
	for (int i = 0; i < 9; ++i) {
		arr[i] = ' ';
	}
}

void display() {

	cout << "\n___________\n";
	for (int i = 0; i < 9; ++i) {
		cout << "[" << arr[i] << "] ";

		if (i == 2 || i == 5) {
			cout << '\n';
		}
	}
}

void win(int i, string name, string score)
{
	cout << '\n' << arr[i] << " - Winner !!!";

}


void testWrite(string name, string score)
{
	for (int i = 0;; ++i) {

		if ((scoreTable[i][0] == name)) {
			int pScore, newScore;
			string strScore;

			pScore = atoi(scoreTable[i][1].c_str());
			newScore = atoi(score.c_str());
			pScore += newScore;
			strScore = to_string(pScore);
			scoreTable[i][1] = strScore;
			showScore();
			break;
		}
		else if ((scoreTable[i][0] == "")) {
			score = "0";
			scoreTable[i][0] = name;
			scoreTable[i][1] = score;

			showScore();
			break;
		}
		else if ((scoreTable[i][0] != "")) {
		}
	}
}

void showScore() // показать массив
{
	cout << "\n|_Score bar_|\n";
	cout << scoreTable[0][0] << " - " << scoreTable[0][1] << endl;
	cout << scoreTable[1][0] << " - " << scoreTable[1][1] << endl;
	cout << scoreTable[2][0] << " - " << scoreTable[2][1] << endl;
	cout << "\n______________\n";

}

bool isGameStarted()
{
	return gameStarted;
}

void gameStart()
{
	gameStarted = true;
}

void gameStop()
{
	gameStarted = false;
}

int main()
{
	system("chcp 1251>nul");

	string a, b;

	cout << "You name..." << endl;
	cin >> a;
	playerName = a;
	testWrite(a, b);
	reset();
	read();

	return 0;
}
