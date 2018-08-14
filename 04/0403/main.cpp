// 4.3 c++语言没有明确规定大多数二元运算符的求值顺序，给编译器优化留下余地。
//     这种策略实际上是在代码生成效率和程序潜在缺陷之前进行了平衡，你认为这可以接受吗？
//     请说出你的理由。

// answer: 可以。取决于人，不确定的地方可以用括号强制提高优先级。

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
