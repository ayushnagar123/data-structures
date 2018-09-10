#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "stack.h"
#include <sstream>

using namespace std;


bool isOperand(string expr);
bool isOperator(string expr);
string PostfixToInfix(string expr, stackType<string> stack);



int main()
{

stringstream ss;
stackType<string> stack;
string Infix;
string line;
string word;
string expr;


ifstream inData("input.txt");
ofstream outData("output.txt");

while (getline( inData, line ))
{
ss << line;

}
while ( ss >> word)
{
stack.push(word);
}

outData<<line;



inData.close();
outData.close();

system("PAUSE");
return 0;
}



bool isOperand(string expr)
{
 return(!isOperator(expr)? true : false);
}

bool isOperator(string expr)
{
 return((expr=="+" || expr=="-" || expr=="*" || expr=="/" || expr=="(" || expr==")")? true : false);
}

string PostfixToInfix(string expr,stackType<string> stack)
{

 for(int i=0; i<expr.length(); i++)
 {
  if(isOperand(expr[i]))
  {
   stack.push(expr.length()[i]);
  }
  else
  {
   string temp = stack.top();
   stack.pop();
   int stack.push()=stack.top()+expr.length()[i]+temp;
   stack.pop();
   stack.push();
  }
 }
 return(stack.top());
}

	
Edit & Run

