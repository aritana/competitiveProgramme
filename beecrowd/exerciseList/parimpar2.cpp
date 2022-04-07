#include <bits/stdc++.h>


using namespace std;

int main()
{

  int numberOfMatches = 0;
  string playerA =" ";
  string playerB =" ";
  int playerABet = 0;
  int playerBBet = 0;
  int testNumber = 1;

  do
  {
    cin >> numberOfMatches;
    if (numberOfMatches == 0)
    {
      cout <<"\n";
      break;
    }

    if (testNumber > 1)
    {
      cout << endl;
    }

    cout << "Teste " << testNumber << endl;

    cin >> playerA;
    cin >> playerB;

    for (int i = 0; i < numberOfMatches; i++)
    {

      cin >> playerABet >> playerBBet;

      int sum = (playerABet + playerBBet);

      if (sum % 2 == 0)
      {
        cout << playerA << endl;
      }
      else
      {
        cout << playerB << endl;
      }
    }

    testNumber++;

  } while (numberOfMatches > 0);

  return 0;
}