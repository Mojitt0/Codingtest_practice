#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int n;
    int x = 1;
    int y = 1;
    cin >> n;
    cin.ignore(); // for ignoring endline

    string plan;
    getline(cin,plan);
    //cout << plan << endl;
    
    stringstream ss(plan);
    ss.str(plan);
    string dir;
    while(ss >> dir)
    {
        if(dir == "U")
        {
            if(x > 1) x-=1;
            //else cout << "U Error" << endl;
        }

        else if(dir == "D") 
        {
            if(x < n) x+=1;
            //else cout << "D Error" << endl;
        }

        else if(dir == "L") 
        {
            if(y>1) y-=1;
            //else cout << "L Error" << endl;
        }

        else if(dir == "R") 
        {
            if(y < n) y+=1;
            //else cout << "R Error" << endl;
        }
    }

    cout << x << " " << y << endl;
    return 0;
}