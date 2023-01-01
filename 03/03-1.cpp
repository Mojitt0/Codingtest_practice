#include <iostream>

using namespace std;

int main()
{
    int money;
    int coin = 0;
    cin >> money;
    while(money != 0)
    {
        if(money >= 500)
        {
            coin +=1;
            money -= 500;
        }
        
        else if(money >= 100)
        {
            coin +=1;
            money -= 100;
        }

        else if(money >= 50)
        {
            coin +=1;
            money -=50;
        }

        else if(money >= 10)
        {
            coin +=1;
            money -=10;
        }
    }

    cout << coin << endl;
    return 0;
}