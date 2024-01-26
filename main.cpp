#include "include.h"

char slot[9];

bool isvalid();
void display();
void reset();
void showScore();
void testWrite(string name, string score);

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

			// CHECK IS SLOT EMPTY
			if (slot[a] == ' ') { 
			slot[a] = b;
			}
			else {
				if (slot[0] != ' ' && slot[1] != ' ' && slot[2] != ' ' &&
					slot[3] != ' ' && slot[4] != ' ' && slot[5] != ' ' && 
					slot[6] != ' ' && slot[7] != ' ' && slot[8] != ' ') {
					cout << "No more slots" << endl;
					reset();
					read();
					break;
				}
				else {
					cout << "Slot is not empty" << endl;
				}
			}

			
			for (int i = a; i < 9; ++i) {  // start slot cycle 1
				if (
					(isvalid(i, slot[i]) && (slot[i] == slot[0] && slot[i] == slot[1] && slot[i] == slot[2])) ||
					(isvalid(i, slot[i]) && (slot[i] == slot[0] && slot[i] == slot[4] && slot[i] == slot[8])) ||
					(isvalid(i, slot[i]) && (slot[i] == slot[0] && slot[i] == slot[3] && slot[i] == slot[6])))
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
					(isvalid(i, slot[i]) && (slot[i] == slot[0] && slot[i] == slot[1] && slot[i] == slot[2])) ||
					(isvalid(i, slot[i]) && (slot[i] == slot[1] && slot[i] == slot[4] && slot[i] == slot[7])))
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
					(isvalid(i, slot[i]) && (slot[i] == slot[0] && slot[i] == slot[1] && slot[i] == slot[2])) ||
					(isvalid(i, slot[i]) && (slot[i] == slot[2] && slot[i] == slot[4] && slot[i] == slot[6])) ||
					(isvalid(i, slot[i]) && (slot[i] == slot[2] && slot[i] == slot[5] && slot[i] == slot[8])))
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
					(isvalid(i, slot[i]) && (slot[i] == slot[0] && slot[i] == slot[3] && slot[i] == slot[6])) ||
					(isvalid(i, slot[i]) && (slot[i] == slot[3] && slot[i] == slot[4] && slot[i] == slot[5])))
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
					(isvalid(i, slot[i]) && (slot[i] == slot[3] && slot[i] == slot[4] && slot[i] == slot[5])) ||
					(isvalid(i, slot[i]) && (slot[i] == slot[1] && slot[i] == slot[4] && slot[i] == slot[7])))
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
					(isvalid(i, slot[i]) && (slot[i] == slot[3] && slot[i] == slot[4] && slot[i] == slot[5])) ||
					(isvalid(i, slot[i]) && (slot[i] == slot[2] && slot[i] == slot[5] && slot[i] == slot[8])))
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
					(isvalid(i, slot[i]) && (slot[i] == slot[0] && slot[i] == slot[3] && slot[i] == slot[6])) ||
					(isvalid(i, slot[i]) && (slot[i] == slot[6] && slot[i] == slot[4] && slot[i] == slot[2])) ||
					(isvalid(i, slot[i]) && (slot[i] == slot[6] && slot[i] == slot[7] && slot[i] == slot[8])))
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
					(isvalid(i, slot[i]) && (slot[i] == slot[6] && slot[i] == slot[7] && slot[i] == slot[8])) ||
					(isvalid(i, slot[i]) && (slot[i] == slot[1] && slot[i] == slot[4] && slot[i] == slot[7])))
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
					(isvalid(i, slot[i]) && (slot[i] == slot[6] && slot[i] == slot[7] && slot[i] == slot[8])) ||
					(isvalid(i, slot[i]) && (slot[i] == slot[0] && slot[i] == slot[4] && slot[i] == slot[8])) ||
					(isvalid(i, slot[i]) && (slot[i] == slot[2] && slot[i] == slot[5] && slot[i] == slot[8])))
				{
					display();

					cout << "\n\n" << playerName << " - Winner !!!" << endl;
					cout << "Take your " << localScore << " point!!!" << endl;

					testWrite(playerName, localScore);
					reset();
					read();
					break;
				}
			}  // end of slot cycle 1
		}
		else {
			cout << "Wrong cahracter...";
		}
	}
}
void reset() {
	cout << "\n\n" << ">>>>>New game";
	for (int i = 0; i < 9; ++i) {
		slot[i] = ' ';
	}
}

void display() {

	cout << "\n___________\n";
	for (int i = 0; i < 9; ++i) {
		cout << "[" << slot[i] << "] ";

		if (i == 2 || i == 5) {
			cout << '\n';
		}
	}
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
