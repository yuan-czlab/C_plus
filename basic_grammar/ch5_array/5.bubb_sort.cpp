#include<iostream>

using namespace std;

int main()
{
    int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9};

    // for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    // {
    //     for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - i; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             int c = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = c;
    //         }
    //     }
    // }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        for (int j = sizeof(arr) / sizeof(arr[0] - 1); j > i ; j--)
        {
            if (arr[j-1] > arr[j])
            {
                int c = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = c;
            
            }
        }
    }

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}