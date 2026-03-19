# include<iostream>
# include<string>
using namespace std;


struct hero
{
  string name;
  int age;
  string sex;
};

void bubbleSort_age(hero arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    for (int j = 0; j < len - i; j++)
    {
      if (arr[j].age > arr[j+1].age)
        // 如果下标为j的age大于了j+1的age，则交换
      {
          hero temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j+ 1] = temp;
      }
    }

  }
}

void printHeros(hero arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    cout << "姓名： " << arr[i].name 
    << " 性别： " << arr[i].sex 
    << " 年龄： " << arr[i].age << endl;
  }
}

int main()
{
  hero arr[5] = {
    {"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
  };

  int len  = sizeof(arr) / sizeof(hero);
  bubbleSort_age(arr, len);
  
  printHeros(arr, len);

  return 0;   
}