# include<iostream>
using namespace std;

/*

请声明一个5个元素的数组，并且将元素逆置.

(如原数组元素为：1,3,2,5,4;逆置后输出结果为:4,5,2,3,1)

*/
int main()
{
    int arr[] = {1,3,2,5,4};
    for (int i = sizeof(arr) / sizeof(arr[0]) - 1; i >= 0; i--)
    {
        cout << arr[i] << ',';
    }
    cout << endl;
    return 0;
}