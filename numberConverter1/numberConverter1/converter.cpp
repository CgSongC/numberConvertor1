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
	//cout << "�Է��� ���� Ÿ���� �����Ͻÿ� [2:2����, 8:8����, 10: 10����, 16:16����] :";
	//cin >> iInputType;
	// ���� ��ȯ switch 

	cout << "10 ������ �Է����ּ��� : ";
	cin >> iDecimal;
	cout << "��ȯ�� ���� Ÿ�Ը� �����ϼ��� [2:������, 8:8����, 16:16����]:";
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
	//a������ b���� �Է¹޾� c������ ��ȯ�ش޶�� �ϸ� d���� ������
	//a������ b���� �Է¹޾� 10������ c������ �ٲٰ� 10������ c���� d������ e������

	for (int j= i-1; j >= 0; --j)
	{
		cout << cArray[j];
	}
	return 0;
}