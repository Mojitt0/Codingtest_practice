#include <iostream>

//using namespace std;

int main()
{
    int n, k;
    std::cin >> n;
    std::cin >> k;
    int count = 0;
    while(n!=1)
    {
        if(n%k == 0)    n /= k;
        else    n-=1;
        count++;
    }
    std::cout << "시행횟수: " <<count << std::endl;
    return 0;
}