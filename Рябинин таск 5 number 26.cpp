/*Дан целочисленный массив размера N, содержащий большое количество нулевых
элементов. Создать новый массив, заменив все группы подряд встречающихся нулей
на один нуль. Таск 5 номер 26.
*/
#include <iostream>
#include <fstream>

using namespace std;

void main()
{
	while (true)
	{
		setlocale(LC_ALL, "ru");
		int n;
		cout << "1 - начать, 0 - закончить" << endl;
		cin >> n;
		if (n == 0)
		{
			break;
		}

		
		int N;
		cout << "Введите количество элементов массива" << endl;
		cin >> N;
		int* arr = new int[N];

		//Заполнение первоначального массива
	
		for (int i = 0; i < N; i++)
		{
			arr[i] = rand() % 2;
		}

		//Вывод первоначального массива
	
		for (int i = 0; i < N; i++)
		{
			cout << arr[i] << '\t';
		}

		cout << endl;
		cout << "==================================================================================" << endl;
		
		int* newarray = new int[N];
		for (int i = 0; i < N; i++)
		{

			if ((arr[i] == 0) && (arr[i + 1] == 0))
			{
				for (int j = i; j < N; j++)
				{
					arr[j] = arr[j + 1];
				}
				N--, i--;
			}

			newarray[i] = arr[i];
			
		}
		
		delete[] arr;
		arr = newarray;
		//Вывод массива
		
		for (int i = 0; i < N; i++)
		{
			cout << newarray[i] << '\t';
		}
		
		cout << endl;
		delete[] newarray;
		
	}
	




}
