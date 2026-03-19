# include<iostream>
using namespace std;

/*

注意：continue并没有使整个循环终止，而break会跳出循环
*/
int main()
{
    for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}
    return 0;
}