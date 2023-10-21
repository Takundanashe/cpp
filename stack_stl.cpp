//stack using standard template library
#include<iostream>
#include<stack>

using namespace std;

stack<int> stack_0;

int main()
{

    stack_0.push(10);
    stack_0.push(40);
    stack_0.push(70);
    stack_0.push(50);

    cout<<stack_0.size();
    while(!stack_0.empty())
    {
        cout<<stack_0.top()<<endl;
        stack_0.pop();

    }
    return 0;
}
