// rebus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


int skNum(int N) {
	int num = 0;
	while (N != 0) {
		num++;
		N /= 10;
	}
	return num;
}

void toArr(int N, int *a)
{
	int num = 0;
	while (N != 0) {
		a[num] = N % 10;
		num++;
		N /= 10;
	}
}

void menu();

void aRebus()
{
	for (int i = 10000; i <= 99999; i++)
	{
		int numOne = skNum(i);
		int *arrOne = new int[numOne];
		toArr(i, arrOne);
		if (arrOne[0] != arrOne[2] || arrOne[0] != arrOne[4] || arrOne[1] != arrOne[3] || arrOne[0] == arrOne[1] || arrOne[0] == arrOne[3]) continue;
		for (int b = 10000; b < 99999; b++)
		{
			int ans = i + b;
			int numAns = skNum(ans);
			if (numAns != 6) continue;
			int numTwo = skNum(b);
			int *arrTwo = new int[numTwo];
			toArr(b, arrTwo);
			if (arrTwo[0] != arrTwo[2] || arrTwo[0] != arrTwo[4] || arrOne[1] != arrTwo[1] || arrOne[1] != arrTwo[3]) continue;
			int *arrAns = new int[numAns];
			toArr(ans, arrAns);
			if (arrOne[1] != arrAns[0] || arrTwo[0] != arrAns[1] || arrTwo[0] != arrAns[3] || arrTwo[0] != arrAns[5] || arrOne[1] != arrAns[2] || arrOne[1] != arrAns[4]) continue;
			cout << i << "+" << b << "=" << ans << endl;
		}
	}
	menu();
}

void bRebus()
{
	for (int i = 100; i < 1000; i++)
	{
		int numOne = skNum(i);
		int *arrOne = new int[numOne];
		toArr(i, arrOne);
		if (arrOne[0] == arrOne[1] || arrOne[0] == arrOne[2] || arrOne[1] == arrOne[2]) continue;
		for (int b = 100; b < 1000; b++)
		{
			int ans = i * b;
			int numAns = skNum(ans);
			if (numAns != 6) continue;
			int numTwo = skNum(b);
			int *arrTwo = new int[numTwo];
			toArr(b, arrTwo);
			if (arrTwo[0] != arrOne[2] || arrTwo[1] != arrOne[0] || arrTwo[2] != arrOne[1]) continue;
			int *arrAns = new int[numAns];
			toArr(ans, arrAns);
			if (arrAns[0] != arrOne[0] || arrAns[1] != arrAns[3] || arrAns[1] != arrAns[4] || arrAns[2] != arrOne[1] || arrAns[5] != arrOne[2]) continue;
			cout << i << "*" << b << "=" << ans << endl;
		}
	}
	menu();
}
void cRebus()
{
	for (int i = 10; i < 100; i++)
	{
		int numOne = skNum(i);
		int *arrOne = new int[numOne];
		toArr(i, arrOne);
		if (arrOne[1] == arrOne[0]) continue;
		for (int b = 10; b < 100; b++)
		{
			int ans = i * b;
			int numAns = skNum(ans);
			if (numAns != 3) continue;
			int numTwo = skNum(b);
			int *arrTwo = new int[numTwo];
			toArr(b, arrTwo);
			if (arrOne[1] == arrTwo[1] || arrOne[0] == arrTwo[1] || arrOne[0] == arrTwo[0] || arrOne[1] == arrTwo[0] || arrTwo[0] == arrTwo[1]) continue;
			int *arrAns = new int[numAns];
			toArr(ans, arrAns);
			if (arrOne[0] == arrAns[1] && arrOne[0] == arrAns[2] && arrOne[0] == arrAns[0]) 
				cout << i << "*" << b << "=" << ans << endl;
		}
	}
	menu();
}
void dRebus()
{
	for (int i = 100; i < 1000; i++)
	{
		int numOne = skNum(i);
		int *arrOne = new int[numOne];
		toArr(i, arrOne);
		if (arrOne[0] != arrOne[2] || arrOne[0] == arrOne[1]) continue;
		for (int b = 100; b < 1000; b++)
		{
			int ans = i + b;
			int numAns = skNum(ans);
			if (numAns != 3) continue;
			int numTwo = skNum(b);
			int *arrTwo = new int[numTwo];
			toArr(b, arrTwo);
			if (arrOne[1] != arrTwo[0] || arrOne[1] != arrTwo[2] || arrOne[1] == arrTwo[1] || arrOne[0] == arrTwo[1]) continue;
			int *arrAns = new int[numAns];
			toArr(ans, arrAns);
			if (arrTwo[1] == arrAns[0] && arrTwo[1] == arrAns[2] && arrOne[1] != arrAns[1] && arrOne[0] != arrAns[1] && arrTwo[1] != arrAns[1])
				cout << i << "+" << b << "=" << ans << endl;
		}
	}
	menu();
}

void eRebus()
{
	for (int i = 100; i < 1000; i++)
	{
		int numOne = skNum(i);
		int *arrOne = new int[numOne];
		toArr(i, arrOne);
		if (arrOne[0] != arrOne[1] || arrOne[0] == arrOne[2]) continue;
		for (int b = 10; b < 100; b++)
		{
			int ans = i * b;
			int numAns = skNum(ans);
			if (numAns != 5) continue;
			int numTwo = skNum(b);
			int *arrTwo = new int[numTwo];
			toArr(b, arrTwo);
			if (arrTwo[0] != arrOne[2] || arrTwo[1] == arrOne[1] || arrTwo[1] == arrOne[2]) continue;
			int *arrAns = new int[numAns];
			toArr(ans, arrAns);
			if (arrAns[0] != arrTwo[0] && arrAns[4] != arrTwo[0] && arrAns[0] != arrTwo[1] && arrAns[4] != arrTwo[1] && arrAns[0] != arrOne[0] && arrAns[4] != arrOne[0] && arrAns[0] == arrAns[1] && arrAns[0] == arrAns[2] && arrAns[0] == arrAns[3] && arrAns[0] != arrAns[4])
				cout << i << "*" << b << "=" << ans << endl;
		}
	}
	menu();
}
void fRebus()
{

	for (int i = 1000; i < 10000; i++)
	{
		int numOne = skNum(i);
		int *arrOne = new int[numOne];
		toArr(i, arrOne);
		if (arrOne[0] != arrOne[3]) continue;
		for (int b = 100; b < 1000; b++)
		{
			int ans = i * b;
			int numAns = skNum(ans);
			if (numAns != 6) continue;
			int numTwo = skNum(b);
			int *arrTwo = new int[numTwo];
			toArr(b, arrTwo);
			if (arrTwo[0] == arrOne[0] || arrTwo[0] != arrTwo[2]) continue;
			int *arrAns = new int[numAns];
			toArr(ans, arrAns);
			if (arrAns[0] != arrTwo[0] && arrAns[0] != arrOne[0] && arrAns[0] == arrAns[2] && arrAns[0] == arrAns[3] && arrAns[0] == arrAns[5])
				cout << i << "*" << b << "=" << ans << endl;
		}
	}
	menu();
}

void menu()
{
	int num = 0;
	cout << "Enter Rebus Number 1-6 (0 exit): "; cin >> num;

	switch (num)
	{
	case 0: exit; break;
	case 1: cout << "ABABA + CBCBC = CBCBCB" << endl; aRebus(); break;
	case 2: cout << "ABC * BCA = ADDBDC" << endl; bRebus(); break;
	case 3:	cout << "AB * CD = BBB" << endl; cRebus(); break;
	case 4:	cout << "BAB + ACA = CDC" << endl; dRebus(); break;
	case 5:	cout << "ABB * CA = DEEEE" << endl; eRebus(); break;
	case 6:	cout << "A**A * B*B=C*CC*C" << endl; fRebus(); break;
	default:
		break;
	}
}

int main()
{
	menu();
}