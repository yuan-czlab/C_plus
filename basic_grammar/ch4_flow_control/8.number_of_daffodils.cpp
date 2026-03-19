# include <iostream>

using namespace std;

int main()
{
    int num = 100;

    // test
    // int hun = num / 100;
    // int decade = num / 10 % 10;
    // int unit = num % 10;
    do
    {
        int hun = num / 100;
        int decade = num / 10 % 10;
        int unit = num % 10;
        if (hun * hun* hun + decade * decade * decade + unit * unit * unit == num)
        {
            cout << "水仙花数为" << num <<endl;
        }
        num++;

    }while(num < 1000);

    // cout << hun << endl << decade << endl << unit << endl;
    return 0;
}