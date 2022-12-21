

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    
    srand(time(NULL));
    int const SIZE = 10;

    int arr[SIZE];

    for ( int i = 0; i < SIZE; i++)
    {
        arr[i] = rand();
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }
    
    int sum = 0;
    for (int i = 2; i < 7; i++)
    {
        sum += arr[i];
    }

    cout << "sum " << sum;

}

