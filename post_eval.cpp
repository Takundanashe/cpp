#include<iostream>
#include<string.h>

using namespace std;

void push(int);
int pop();
int eval(char , int, pop);

char postfix[50],symbol;

int stack[50],top = -1;
int op1,op2,res,finalvalue;


int main(){
    cout<<"enter the postfix expression: ";

    cin>>postfix;
    for (int i=0; i<strlen(postfix);i++)
    {
        symbol = postfix[i];
        if(symbol>=0 && symbol <= 9)
        {
            push(symbol-'0');

        }else{
            op2 = pop();
            op1= pop();
            res=eval(symbol,op1,op2);
            push(res);

        }
    }
    finalvalue = pop();
    cout<<finalvalue;

    return 0;
}

int pop()
{
    int temp = stack[top];
    top --;
    return temp;

}
void push(int val){
    top ++;
    stack[top] = val;

}

int eval(char symb, int op1 ,int op2)
{
    int res;
   switch (symb)
   {
      case '+' : res=op1+op2;break;
      case '-' : res=op1-op2;break;
      case '*' : res=op1*op2;break;
      case '/' : res=op1/op2;break;
      case '^' : res=op1^op2;break;
   }
   return res;
}
