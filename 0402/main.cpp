// 4.2 根据4.12节中的表，在下述表达式的合理位置添加括号，
//     使得添加括号后运算对象的组合顺序与添加括号前一致
//     (a) *vec.begin()  (b) *vec.begin()+1
// answer:  (a) *(vec.begin())
//          (b) *(vec.begin())+1



#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{0,1,2,3,4,5,7,8,9,10};

    cout << *vec.begin()
         << "\t"
         << *(vec.begin())
         << endl;

    cout << *vec.begin()+1
         << "\t"
         << *(vec.begin())+1
         << endl;
    return 0;
}
