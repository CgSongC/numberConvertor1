// Create a Converter
#include <iostream>
#include <string>
#include <bitset>

using namespace std;
int main()
{
	int iBinary;
	int iDecimal = 0;
	int iType = 0;
	int i = 0;
	int iOutputType;
	int cArray[100];
	//cout << "입력할 진수 타입을 선택하시오 [2:2진수, 8:8진수, 10: 10진수, 16:16진수] :";
	//cin >> iInputType;
	// 진수 변환 switch 

	cout << "10 진수를 입력해주세요 : ";
	cin >> iDecimal;
	cout << "변환할 진수 타입를 선택하세요 [2:이진수, 8:8진수, 16:16진수]:";
	cin >> iType;
	cout << "Binary = " << bitset<8>(iDecimal)<< endl;
	cout << "Octal = " << oct << iDecimal << endl;
	cout << "Hexadecimal = " << hex << iDecimal << endl;
	while (iDecimal != 0)
	{
		cArray[i] = (iDecimal % iType);
		iDecimal = iDecimal / iType;
		i++;
	}
	//a진수의 b값을 입력받아 c진수로 변환해달라고 하면 d값이 나오는
	//a진수의 b값을 입력받아 10진수의 c값으로 바꾸고 10진수의 c값을 d진수의 e값으로

	for (int j= i-1; j >= 0; --j)
	{
		cout << cArray[j];
	}
	return 0;
}