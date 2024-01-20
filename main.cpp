#include <iostream>
 /*
 - заменить 1 и 2 на x o
 - сделать вывод кто победил
 - сделать счёт побед
 - привести код в порядок!
 
 
 */
using namespace std;

int arr[9];

void display();
void reset();
bool isvalid();

bool isvalid(int a = 1, int b = 1)  // Возврат булевого фолс, если ноль
{
	if ((a >= 0 && a <= 9) && (b >= 1 && b <= 2)) {
		return true;
	}
	else {
		return false;
	}
}


// функция записи
void write()
{
	int a = 1;
	int b = 1;
	int counter = 0;

	for (;;) {
		display();
		++counter;
		cout << counter << ". ";
		cin >> a >> b;
		if (isvalid(a, b)) {    // если введённые числа истина то:
			cout << "Верное значение..." << endl;
			arr[a] = b;

			for (int i = a; i < 9; ++i) {
				if ( 
					(isvalid(i, arr[i]) && (arr[i] == arr[0] && arr[i] == arr[1] && arr[i] == arr[2])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[0] && arr[i] == arr[4] && arr[i] == arr[8])) ||
					(isvalid(i,arr[i]) && (arr[i] == arr[0] && arr[i] == arr[3] && arr[i] == arr[6])))
				{
					cout << "Победа<<<< 0";
					display();
					reset();
					write();
					break;
				}
				else if (
					(isvalid(i, arr[i]) && (arr[i] == arr[0] && arr[i] == arr[1] && arr[i] == arr[2])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[1] && arr[i] == arr[7] && arr[i] == arr[7])))
				{
					cout << "Победа<<<< 1";
					display();
					reset();
					write();
					break;
				}
				else if (
					(isvalid(i, arr[i]) && (arr[i] == arr[0] && arr[i] == arr[1] && arr[i] == arr[2])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[2] && arr[i] == arr[4] && arr[i] == arr[6])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[2] && arr[i] == arr[5] && arr[i] == arr[8])))
				{
					cout << "Победа<<<< 2";
					display();
					reset();
					write();
					break;
				}
				else if (
					(isvalid(i, arr[i]) && (arr[i] == arr[0] && arr[i] == arr[3] && arr[i] == arr[6])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[3] && arr[i] == arr[4] && arr[i] == arr[5])))
				{
					cout << "Победа<<<< 3";
					display();
					reset();
					write();
					break;
				}
				else if (
					(isvalid(i, arr[i]) && (arr[i] == arr[3] && arr[i] == arr[4] && arr[i] == arr[5])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[1] && arr[i] == arr[4] && arr[i] == arr[7])))
				{
					cout << "Победа<<<< 4";
					display();
					reset();
					write();
					break;
				}
				else if (
					(isvalid(i, arr[i]) && (arr[i] == arr[3] && arr[i] == arr[4] && arr[i] == arr[5])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[2] && arr[i] == arr[5] && arr[i] == arr[8])))
				{
					cout << "Победа<<<< 5";
					display();
					reset();
					write();
					break;
				}
				else if (
					(isvalid(i, arr[i]) && (arr[i] == arr[0] && arr[i] == arr[3] && arr[i] == arr[6])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[6] && arr[i] == arr[4] && arr[i] == arr[2])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[6] && arr[i] == arr[7] && arr[i] == arr[8])))
				{
					cout << "Победа<<<< 6";
					display();
					reset();
					write();
					break;
				}
				else if (
					(isvalid(i, arr[i]) && (arr[i] == arr[6] && arr[i] == arr[7] && arr[i] == arr[8])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[1] && arr[i] == arr[4] && arr[i] == arr[7])))
				{
					cout << "Победа<<<< 7";
					display();
					reset();
					write();
					break;
				}
				else if (
					(isvalid(i, arr[i]) && (arr[i] == arr[6] && arr[i] == arr[7] && arr[i] == arr[8])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[0] && arr[i] == arr[4] && arr[i] == arr[8])) ||
					(isvalid(i, arr[i]) && (arr[i] == arr[2] && arr[i] == arr[5] && arr[i] == arr[8])))
				{
					cout << "Победа<<<< 8";
					display();
					reset();
					write();
					break;
				}
			}
		} else {
			cout << "Неверное значение...";
		}
	}
}
void reset() {
	int counter = 0;
	cout << "\n\n" << ">>>>>Новая игра";
	for (int i = 0; i < 9; ++i) {
		counter++;
		arr[i] = 0;
	}
}

void display() {
	int counter = 0;

	cout << "\n___________\n";
	for (int i = 0; i < 9; ++i) {
		++counter;
		cout << "[" << arr[i] << "] ";
		
		if (counter == 3 || counter == 6) {
			cout << '\n';
		}
	}
}

int main()
{
    int a = 5;
	int b = 5;

	write();

	return 0;
}
