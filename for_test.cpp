// for_test.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <cmath>
#include <iomanip> 
#include <iostream>

using namespace std;

int mass(const int  lrow, const int lcol)
{
	int** mas;

	mas = new int* [lrow];
	for (int count = 0; count < lrow; count++) {
		mas[count] = new int[lcol];
	}

	for (int i = 0; i < lrow; i++) {
		for (int j = 0; j < lcol; j++)
		{
			cout << "enter your array x[" << i << "," << j << "]: ";
			cin >> mas[i][j];
		}
	}

	for (int i = 0; i < lrow; i++) {
		for (int j = 0; j < lcol; j++)
		{
			cout << mas[i][j] << " ";
		}
	}


	
	for (int i = 0; i < lrow; i++)
	{
		delete[]mas[i];
	}
	delete[]mas;
	

	return 0;
}


int main() {

	int row, col;

	int& lrow = row;
	int& lcol = col;

	cout << "enter m:row =";
	cin >> row;
	cout << "enter n:col =";
	cin >> col;

	mass(lrow,lcol);

	return 0;
}

