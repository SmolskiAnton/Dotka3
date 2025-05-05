#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int secret_number = rand() % 99 + 1;
	if (secret_number / 10 == 0)
	{
		cout << "это однозначное число!" << endl;
		
	}
	else 
	{
		cout << "это двухзначное число!" << endl;
	}
	if (secret_number % 2 == 0)
	{
		cout << "это четное число!"<< endl;
	}
	else
	{
		cout <<  "это нечетное число!" << endl;
	}
	int guess, counter = 0;
	cout << "отгадайте число от 1 до 99:";
	do
	{
		cout <<"ваше число=";
		cin >> guess;
		counter++;
		if (secret_number < guess)
		{
			cout << "ваше секрт. число меньше!" << endl;
		}
		else if (secret_number > guess)
		{
			cout << "ваше секрт. число больше!"<< endl;
		}
	} while (secret_number != guess);
			cout << "вы угадали!"<< endl;
		cout << "ваше количество попыток=" << counter << endl;

		cout << endl;

		cout << "Возраст"<< secret_number << " ";
		if (secret_number / 10 == 1)
		{
			cout << "лет" << endl;
		}
		else
		switch(secret_number%10)// çàäà÷à 2
		{
		case 1:cout << "год" << endl;
			break;
		case 2:
		case 3:
		case 4:cout << "года" << endl;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:	
		case 0:cout << "лет" << endl;
			break;
		}


		cout << "числа фибоначчи:" << endl;
		int prev = 1;
		int curr = 1;
		cout << curr << " ";
		while (curr <= secret_number)
		{
			cout << curr << " ";
			int next = prev + curr;
			prev = curr;
			curr = next;
		}


		return 0;//конец
}

	



