#include <iostream>
#include <fstream>

using namespace std;

void main()
{
	while (true)
	{
		setlocale(LC_ALL, "ru");
		int n;
		cout << "1 - ������, 0 - ���������" << endl;
		cin >> n;
		if (n == 0)
		{
			break;
		}

		
		int N;
		cout << "������� ���������� ��������� �������" << endl;
		cin >> N;
		int* arr = new int[N];

		//���������� ��������������� �������
	
		for (int i = 0; i < N; i++)
		{
			arr[i] = rand() % 2;
		}

		//����� ��������������� �������
	
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
		//����� �������
		
		for (int i = 0; i < N; i++)
		{
			cout << newarray[i] << '\t';
		}
		
		cout << endl;
		delete[] newarray;
		
	}
	




}