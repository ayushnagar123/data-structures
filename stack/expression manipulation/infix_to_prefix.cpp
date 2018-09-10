#include<iostream>
#include<conio.h>
#include<vector>
#include<string>
#include<stdio.h>
#include<stack>
#include<ctype.h>
using namespace std;
bool isOperator(char ch);
// This function is to check
//whether given character in a infix expression
//string is a operator or not.
bool isOperator(char ch)
{
 bool result = false;
 if(ch == '+' ||ch == '-' ||ch == '/' ||ch == '*' || ch == '^')
 {
  result = true ;
 }
 return result;
}
// This function is to check
// whether operator from infix expression string
// is a higher proirity from operator stack or not.
// Oprator *, / has a same higher priority
// than oprator + -
// where as operator ^ has hightest priority among all.
bool isHigherPrio(char top, char index)
{
 bool result = false;
 if((top == '*' || top == '/') && (index == '+' || index == '-'))
 {
  result = true;
 }
 else
 {
  result = false;
 }
 if(top == '^')
 {
  result = true;
 }
 else if(index == '^')
 {
  result = false;
 }
 return result;
}
/*
This function is to check validation of
given infix expression
if all right paranthesis matches all
left paranthesis then its a valid expresion.
*/
bool validateExpression(string infixExpression)
{
 stack<char>paranthesisStack;
 bool result = false;
 for(int index= infixExpression.length()-1; index >= 0;  index--)
 {
  if(infixExpression[index]==')')
  {
   paranthesisStack.push(infixExpression[index]);
  }
  else if(infixExpression[index]=='(')
  {
   paranthesisStack.pop();
  }
 }
 if(paranthesisStack.empty())
  result = true;
 return result;
}
int _tmain(int argc, _TCHAR* argv[])
{
 stack<char>operatorStack;
 stack<char>prefixResult;
 string infixExpression;
 do
 {
  cout<<"Enter an expression"<<endl;
  cin>>infixExpression;
 }
 while(!validateExpression(infixExpression));
 for(int index= infixExpression.length()-1; index >= 0;  index--)
 {
  if(isalnum(infixExpression[index]))
  {
   prefixResult.push(infixExpression[index]);
  }
  else if( isOperator(infixExpression[index]) || (infixExpression[index]==')'))
  {
    while(!operatorStack.empty()&&isHigherPrio(operatorStack.top(),infixExpression[index]))
    {
     prefixResult.push(operatorStack.top());
     operatorStack.pop();
    }
    operatorStack.push(infixExpression[index]);
   }
  }
  else if(infixExpression[index] == '(')
  {
   char ch = operatorStack.top();
   while(ch != ')')
   {
    prefixResult.push(operatorStack.top());
    operatorStack.pop();
    ch = operatorStack.top();
   }
  }
 }
 while(!operatorStack.empty())
 {
  if( ')' != operatorStack.top())
   prefixResult.push(operatorStack.top());
  operatorStack.pop();
 }
 while(!prefixResult.empty())
 {
  cout<<" "<<prefixResult.top();
  prefixResult.pop();
 }
 getch();
 return 0;
}
