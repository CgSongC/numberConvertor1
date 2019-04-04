// Create a game of ScissorsRockPaper

#include <iostream>
#include <time.h>

using namespace std;
typedef enum {
	SRP_S = 1,
	SRP_R,
	SRP_P,
	SRP_END 
}SRP;

static const char *srpSTR[] =
{
	"Scissors",
	"Rock",
	"Paper"
};

int main()
{
	int uiSRP, aiSRP;
	srand((unsigned)time(0));
	//aiSRP = (rand() % 3 + 1);
	while (true)
	{
	cout << "Please enter number [1:Scissors, 2:Rock, 3:Paper, 4:END] : ";
	cin >> uiSRP;
    aiSRP = (rand() % 3 + 1);
		if (1 <= uiSRP && uiSRP < 4)
		{	
			switch (uiSRP)
			{
			case SRP_S:
				cout << "User : " << srpSTR[SRP_S-1] << "\n AI : " << srpSTR[aiSRP-1] << endl;
				if(SRP_S == uiSRP)
				{
				    cout << "DRAW" << endl;
				}
				else if (SRP_R == aiSRP) 
				{
					cout << "YOU LOSE " << endl;
				}
				else if (SRP_P == aiSRP)
				{
					cout << "YOU WIN \n" << endl;
					break;
				} 
				break;

			case SRP_R:
				cout << "User : " << srpSTR[SRP_R-1] << "\n AI : " << srpSTR[aiSRP-1] << endl;
				if (SRP_S == uiSRP)
				{
					cout << "YOU WIN" << endl;
					break;
				}
				else if (SRP_R == aiSRP)
				{
					cout << "DRAW" << endl;
				}
				else if (SRP_P == aiSRP)
				{
					cout << "YOU LOST \n" << endl;
				}
				break;

			case SRP_P:
				cout << "User : " << srpSTR[SRP_P-1] << "\n AI : " << srpSTR[aiSRP-1] << endl;
				if (SRP_S == uiSRP)
				{
					cout << "YOU LOST" << endl;
				}
				else if (SRP_R == aiSRP)
				{
					cout << "YOU WIN" << endl;
					break;
				}
				else if (SRP_P == aiSRP)
				{
					cout << "DRAW \n" << endl;
				}
				break;
			}
		}
		else if (uiSRP < 1 || uiSRP > 4)
		{
			cout << "Wrong number, Please enter number from 1 to 4";
			continue;
		}
		else if (uiSRP == SRP_END)
		{
			cout << "Bye ~~~ \n";
			break;
		}

	}
	return 0;
}