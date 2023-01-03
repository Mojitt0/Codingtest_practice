#include <iostream>

using namespace std;

int main()
{
    int row;
    int col;

    cout << "Row: ";
    cin >> row;

    cout << "Column: ";
    cin >> col;
    
    int arr[row][col];
    int min[row];
    int result;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            //cout << i <<"행 " << j << "열의 원소: ";
            cin >> arr[i][j];
        }
    }

    for(int i =0; i<row;i++)
    {
        for(int j =0; j<col;j++)
        {
            if(j == 0)  min[i] = arr[i][j]; //initialize min[i]
            else{
                if(min[i] >= arr[i][j]) min[i] = arr[i][j];
            }
        }
    }

    for(int i=0; i<row;i++)
    {
        if(i == 0) result = min[i];
        else{
            if(result< min[i]) result = min[i];
        }
    }

    cout << "result: " << result << endl;
    return 0;
}