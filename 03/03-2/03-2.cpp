#include <iostream>
#include <time.h>

using namespace std;

void quicksort(int *arr, int left, int right);

int partition(int* arr, int left, int right);

void swap(int* arr, int i, int j);

int main()
{
    int n; // arr len
    int m; // addition count
    int k; // same number addition count
    int sum = 0;

    cin >> n;
    cin >> m;
    cin >> k;

    int* arr = new int[n];
    int i = 0;
    while(i != n)
    {
        cin >> arr[i++];
    }

    time_t start, end;
    double result;

    start = time(NULL);

    quicksort(arr, 0, n-1);
    i=0;
    while(m != 0)
    {
        if(i!=k)
        {
            sum += arr[n-1];
            i++;
        }

        else
        {
            sum += arr[n-2];
            i=0;
        }

        m--;
    }
    
    cout << sum << endl;
    end = time(NULL);
    result = (double)(end-start);

    cout << "수행 시간: " << result << " second" << endl;
    return 0;
}

void quicksort(int *arr, int left, int right)
{
   if(left>=right) return;

   int pivot = partition(arr, left, right); 
   quicksort(arr,left, pivot-1);
   quicksort(arr,pivot+1, right);
}

int partition(int* arr, int left, int right)
{
    // make array [ smaller elem | pivot | bigger elem ] form and return pivot index

    int pivot = arr[right]; // set pivot as rightmost array element
    int i  = left - 1;
    for(int j = left; j<right; j++) // j searches array left -> right
    {
        if(arr[j]<pivot)            // if arr[j] is smaller than pivot -> arr[j] goes to arr[leftside (arr[i]) ]
        {
            ++i;
            swap(arr,i,j);
        }
    }
    swap(arr,right,i+1);
    return i+1;
}

void swap(int* arr, int i, int j)
{
    int temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
}