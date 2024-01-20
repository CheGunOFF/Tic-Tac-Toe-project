#include <iostream>

using namespace std;

int arr[9];

void display();
void reset();
void iswin();






bool isvalid(int vala, int valb = 1)  // Возврат булевого фолс, если ноль
{
	if (vala < 0 && vala > 8 || valb < 1 && valb > 2 ) {
		return false;
	}
	else {
		true;
	}
}


// функция записи
void write() 
{
	signed int a;
	signed int b;
	int counter = 0;
	display();

    for (int i = 0; i < 9; ++i)
	{
		
		
		while (isvalid(arr[i])) {
			++counter;
			cin >> a >> b;
			cout << counter << ". ";
			{
				if (arr[i] != 0) {
					cout << "Проверка<><<<<><><";
				}
				else if (isvalid(arr[i]) &&
					arr[0] == arr[1] && arr[1] == arr[2] ||
					arr[0] == arr[4] && arr[4] == arr[8] ||
					arr[0] == arr[3] && arr[3] == arr[6]) {

					cout << "Победа<<<<0";
					reset();
					write();
					break;
				}
				else if (isvalid(arr[i]) &&
					arr[0] == arr[1] && arr[1] == arr[2] ||
					arr[1] == arr[4] && arr[4] == arr[7]) {
					cout << "Победа<<<<2";
					reset();
					write();
					break;
				}
				else if (isvalid(arr[i]) && arr[0] == arr[1] && arr[1] == arr[2] ||
					arr[2] == arr[4] && arr[4] == arr[6] ||
					arr[2] == arr[5] && arr[5] == arr[8]) {
					cout << "Победа<<<<3";
					reset();
					write();
					break;
				}

				/*	1 123 159 147
					2 123 258
					3 123 357 369

					4 147 456
					5 456 258
					6 456 369

					7 147 753 789
					8 789 258
					9 789 159 369 */
			}
			reset();
			write();
			break;
		}
			
			arr[a] = b;
			display();
	}
	reset();
	write();
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
