//infix to postfix
#include<iostream>
#include<string.h>

using namespace std;
char infix[10],stack[10],postfix[10];
int top =-1,pos=0,length;
char symbol,temp;

//insert the symbol into stack
void push(char symb){
  top = top +1;
  stack[top] = symb;
}
//removing symbol from stack 

char pop(){
  char sym;
  sym = stack[top];
    top = top -1;
  return sym;
}

//precedance of symbols

int precedance(char symb){
  int p;
  switch(symb){
    case '^':
    p=3;break;
    case '*':
    case '/':
    p=2;break;
    
    case '+':
    case '-':
    p=1;
    break;
    
    case ')':
    case '(':
    p=0;break;
    
    case '#':
    p=0;break;
  }
return p;
}

void infix_to_postfix(char infix[]){

  length = strlen(infix);
  push('#');
  for(int i=0;i<length;i++){
    symbol = infix[i];

  switch(symbol){
case '(':
push(symbol);
break;

case ')':
temp = pop();
while(temp !='('){
postfix[pos]= temp;
  pos++;
  
temp = pop();
}
break;
case '+':
case '/':
case '-':
case '^':
case '*':

while(precedance(stack[top])>=precedance(symbol){
temp = pop();
postfix[pos++]=temp;
}
push(symbol);
break;
default:
postfix[pos++]=symbol;
break;
  }}

while(top>0){
temp = pop();
postfix[pos++]=temp;
}

}

int main()
{
  cout<<"Enter the infix elements: ";
cin>>infix;
infix_to_postfix(infix);
cout<<endl;
cout<<"Postfix: "<<postfix;
return 0;
}
//takundanashe
