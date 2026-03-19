# include<iostream>
using namespace std;

/*
总结：当数组名传入到函数作为参数时，被退化为指向首元素的指针

*/
void bubbleSort(int * arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }

}


int main()
{
    int arr[] = {9,6,5,4,3,2,1,8,7};
    int len = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, len);
    printArray(arr, len);
    return 0;
}