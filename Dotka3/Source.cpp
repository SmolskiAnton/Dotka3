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
		cout << "��� ����������� �����!" << endl;
	}
	else 
	{
		cout << "��� ����������� �����!" << endl;
	}
	if (secret_number % 2 == 0)
	{
		cout << "��� ������ �����!" << endl;
	}
	else
	{
		cout << "��� �������� �����!" << endl;
	}
	int guess, counter = 0;
	cout << "�������� ����� �� 1 �� 99:";
	do
	{
		cout << "���� �����=";
		cin >> guess;
		counter++;
		if (secret_number < guess)
		{
			cout << "���� �����. ����� ������!" << endl;
		}
		else if (secret_number > guess)
		{
			cout << "���� �����. ����� ������!" << endl;
		}
	} while (secret_number != guess);
			cout << "�� �������!" << endl;
		cout << "���� ���������� �������=" << counter << endl;

		cout << endl;

		cout << "�������" << secret_number << " ";
		if (secret_number / 10 == 1)
		{
			cout << "���" << endl;
		}
		else
		switch(secret_number%10)// ������ 2
		{
		case 1:cout << "���" << endl;
			break;
		case 2:
		case 3:
		case 4:cout << "����" << endl;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:	
		case 0:cout << "���" << endl;
			break;
		}


		cout << "����� ���������:" << endl;
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


		return 0;
}

	
	/*

	// ����������� ������� ����� ��� ���������
	int number;
	cout << "������� �����" << endl;
	cin >> number;
	if (number == 1)
		cout << "�� ������� � �� ���������!";
	else {
		int i = 1;
		do {
			i++;
		} while (number % i != 0);
		if (number / i == 1)
			cout << "�������";
		else cout << "�� �������";
		#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"rus");
	int number;
	cout << "������� �����" << endl;
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
		cout << "�� ������� � �� ���������!";
	else if (flag)
		cout << "�������";
	else cout << "���������";
	}
	*/
	/*
	* int a,b,k;
	cout << "������� �����" << endl;
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
	if(number==1)cout << "�� ������� � �� ���������!"<<endl;
	else if (flag)
		cout << "�������"<<endl;
	else cout << "���������";
	{
		for (int i = 2; i <= number / 2; i++)
		{
			if (number % i == 0)
				cout << "�������� �����=" << i << endl;
		}
	}
	*/


