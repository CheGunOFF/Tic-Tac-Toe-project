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