// Create a Game Lotto
// 1. 선택되서 출력되는 로또 번호를 오름차순으로 정렬해보자
// 2. 사용자가 선택한 번호와 추첨번호가 일치하면 Congratulation 을 출력하게 하자
#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

#define LOTTO 45

int main()
{
	srand((unsigned int)time(0));
	int iLotto[LOTTO] = {};


	// User Input
	int iInput,iaInput;
	cout << "Please select a number of Lotto line [between 1 to 7]:";
	cin >> iInput;
	//iInput %= 45;
	// AI Input
	iaInput = rand() % 45 + 1;
	//iaInput *= 6;

	
	for (int i = 0; i < LOTTO; ++i)
	{
		iLotto[i] = i + 1;
	}

	// Shuffle
	int iTemp, iIdx1, iIdx2;
	for (int i = 0; i < LOTTO * 4; ++i)
	{
		iIdx1 = rand() % LOTTO;
		iIdx2 = rand() % LOTTO;

		iTemp = iLotto[iIdx1];
		iLotto[iIdx1] = iLotto[iIdx2];
		iLotto[iIdx2] = iTemp;
	}


	// Print number of Lotto
	for (int i = 0; i < LOTTO; ++i)
	{
		cout << setw(5) << iLotto[i];
		if (i % 6 == 5)
			cout << endl;
	}

	int iuSort[6] = {}, iaSort[6] = {};
	//Asignment a number of user input
	for (int i = 0; i < 6; i++)
	{
		if ((iInput + i) <= 45)
		{

			iuSort[i] = iLotto[iInput + i];
		}
		else if ((iInput+i) > 45) 
		{
			iuSort[i] = iLotto[i];
		}
	}
	//Sort User Number
	for (int i = 1; i < 6; ++i)
	{
		for (int j = 0; j < i + 1; ++j)
		{
			if (iuSort[j] > iuSort[i])
			{
				int iTemp = iuSort[j];
				iuSort[j] = iuSort[i];
				iuSort[i] = iTemp;
			}
		}
	}
	//Asignment a number of AI input
	for (int i = 0; i < 6; i++)
	{
		iaSort[i] = iLotto[iaInput + i];
	}

	//Sort AI Number
	for (int i = 1; i < 6; ++i)
	{
		for (int j = 0; j < i + 1; ++j)
		{
			if (iaSort[j] > iaSort[i])
			{
				int iTemp = iaSort[j];
				iaSort[j] = iaSort[i];
				iaSort[i] = iTemp;
			}
		}
	}

	// User's number
	cout << "\nYour   number  is ";

	for (int i = 0; i < 6; ++i)
	{
		cout << setw(5) << iuSort[i];
	}
	// Winning number
	cout << endl;
	cout << "winning number is ";
	for (int i = 0; i < 6; ++i)
	{
		cout << setw(5) << iaSort[i];
	}
	cout << endl;
	int iCnt = 0;
	for (int i = 0; i < 6; ++i)
	{
		if (iuSort[i] == iaSort[i])
		{
			++iCnt;
		}
	}
	if (iCnt == 6)
	{ 
		cout << "Congratulation !!\n";
	}
	else 
	{
		cout << "I am sorry, but next time";
	}
	return 0;
}

//
//
//
//
//;
//어ㅏㅁ리;ㅓㅓㅏㅣ리;ㅏ머1
//
//
//
