#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    time_t start, end;
    double result;

    start = time(NULL);
//put your code here
    cout << "Hello World!" << endl;
//code fin
    end = time(NULL);
    result = (double)(end-start);

    cout << "수행 시간: " << result << " second" << endl;
    return 0;
}