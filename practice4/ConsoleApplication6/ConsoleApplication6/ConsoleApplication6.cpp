#include <iostream>
#include <string>
#include <ctime>
#include <random>
#include <vector>

using namespace std;

int main()
{
	int N;
	int i = 1;
	int number = 0;
	string cry;
	vector <int> a;

	setlocale(LC_ALL, "RUS");

	cout << "Введите количество бочек в мешке: ";
	cin >> N;

	while (i <= N)  //проверка границ перебора от 1 до N
	{
		cout << "Нажмите любую клавишу, чтобы вытянуть бочонок: ";
		cin >> cry;
		do         //проверка рандомного числа на выпадение 1 раз
		{
			number = rand() % N;
		} while (find(a.begin(), a.end(), number) != a.end());
		a.push_back(number);    //добавление числа в вектор
		cout << "Число на бочонке: " << number + 1 << endl;
		i++;
	}
	cout << "Мешок пустой! Все бочонки были вытащены";
}
