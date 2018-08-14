// 03.28 下列数组中元素的值是什么？
// string sa[10];   // 10 ""
// int ia[10];      // 10 0
// int main(){
//     string sa2[10]; // 10 ""
//     int ia2[10];    // 10 int
// }
// answer: 内置类型在函数内，初始值是不确定的，所以 ia 在main函数外默认初始值为 0，
//         ia2 在main 函数内默认初始值随机。而 string 类定义的 sa， sa2
//         初始值都是空字符串。

#include <iostream>

using namespace std;
string sa[10];
int ia[10];
int main()
{
    string sa2[10];
    int ia2[10];
    cout << "extern ia:\n";
    for(int i:ia)
    {
        cout << i << " ";
    }

    cout << "\nextern sa\n";

    for(string str:sa)
    {
        cout << str.c_str() << " ";
    }

    cout << "\nin main ia2:\n";

    for(int i:ia2)
    {
        cout << i << " ";
    }

    cout << "\nin main sa2\n";

    for(string str:sa2)
    {
        cout << str.c_str() << " ";
    }
    cout << "\n";

}
