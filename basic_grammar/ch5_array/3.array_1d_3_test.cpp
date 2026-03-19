# include<iostream>
using namespace std;

/*
在一个数组中记录了五只小猪的体重，如：int arr[5] = {300,350,200,400,250};
找出并打印最重的小猪体重。
 */
int main()
{
    int arr[5] = {300, 350, 200, 400, 250};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if ( arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    cout << arr[0] << endl;
    return 0;
}