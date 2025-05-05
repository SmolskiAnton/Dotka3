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
		cout << "ýòî äâóõçíà÷íîå ÷èñëî!" << endl;
	}
	if (secret_number % 2 == 0)
	{
		cout << "ýòî ÷åòíîå ÷èñëî!" << endl;
	}
	else
	{
		cout << "ýòî íå÷åòíîå ÷èñëî!" << endl;
	}
	int guess, counter = 0;
	cout << "îãàäàéòå ÷èñëî îò 1 äî 99:";
	do
	{
		cout << "âàøå ÷èñëî=";
		cin >> guess;
		counter++;
		if (secret_number < guess)
		{
			cout << "âàøå ñåêðò. ÷èñëî ìåíüøå!" << endl;
		}
		else if (secret_number > guess)
		{
			cout << "âàøå ñåêðò. ÷èñëî áîëüøå!" << endl;
		}
	} while (secret_number != guess);
			cout << "âû óãàäàëè!" << endl;
		cout << "âàøå êîëè÷åñòâî ïîïûòîê=" << counter << endl;

		cout << endl;

		cout << "Âîçðàñò" << secret_number << " ";
		if (secret_number / 10 == 1)
		{
			cout << "ëåò" << endl;
		}
		else
		switch(secret_number%10)// çàäà÷à 2
		{
		case 1:cout << "ãîä" << endl;
			break;
		case 2:
		case 3:
		case 4:cout << "ãîäà" << endl;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:	
		case 0:cout << "ëåò" << endl;
			break;
		}


		cout << "÷èñëà ôèáîíà÷÷è:" << endl;
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

	
	/*

	// îïðåäåëåíèå ïðîñòîå ÷èñëî èëè ñîñòàâíîå
	int number;
	cout << "ââåäèòå ÷èñëî" << endl;
	cin >> number;
	if (number == 1)
		cout << "íå ïðîñòîå è íå ñîñòàâíîå!";
	else {
		int i = 1;
		do {
			i++;
		} while (number % i != 0);
		if (number / i == 1)
			cout << "ïðîñòîå";
		else cout << "íå ïðîñòîå";
		#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"rus");
	int number;
	cout << "ââåäèòå ÷èñëî" << endl;
	cin >> number;
	bool flag = true;
	int i = 2;
	while (i <= sqrt(number) && flag)
	{
		if (number % i == 0)
		{
			flag = false;
		}
		i++;
	}
	if (number == 1)
		cout << "íå ïðîñòîå è íå ñîñòàâíîå!";
	else if (flag)
		cout << "ïðîñòîå";
	else cout << "ñîñòàâíîå";
	}
	*/
	/*
	* int a,b,k;
	cout << "ââåäèòå ÷èñëî" << endl;
	cin >> a>>b>>k;
	int resault = 0;
	for (int i = a; i <= b; i++)
	{
		if(i%k==0)
		resault = resault + i;
	}
	cout << resault;

	*/
	/*
	* #include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"rus");
	int temp;
	cin >> temp;
	int number;
	number = temp;

	int sum = 0;
	while (temp  != 0)
	{
		sum = sum + temp % 10;
		temp = temp / 10;
	}
	cout << sum;

	cout << endl;
	
	int i = 2;
	bool flag = true;
	while (i <= sqrt(number) && flag)
	{
		if (number % i == 0) flag = false;
		i++;
	}
	if(number==1)cout << "íå ïðîñòîå è íå ñîñòàâíîå!"<<endl;
	else if (flag)
		cout << "ïðîñòîå"<<endl;
	else cout << "ñîñòàâíîå";
	{
		for (int i = 2; i <= number / 2; i++)
		{
			if (number % i == 0)
				cout << "Äåëèòåëü ÷èñëà=" << i << endl;
		}
	}
	*/


