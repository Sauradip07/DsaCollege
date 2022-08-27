//https://www.codingninjas.com/blog/2021/09/06/infix-postfix-and-prefix-conversion/

#include<bits/stdc++.h>
using namespace std;

//precedence of operators
int precedence(char ch) 
{
if(ch == '^')
 return 3;
else if(ch == '/' || ch =='*')
 return 2;
else if(ch == '+' || ch == '-')
 return 1;
else
 return -1;
}


string infixToPostfix(string s) 
{
    stack<char> st;
string postfix_exp;

for(int i = 0; i < s.length(); i++) 
    {
 char ch = s[i];

 // If the input character is
 an operand, add it to the postfix output string.
 if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
 postfix_exp += ch;

 // If the input character is an
 '(', push it to the stack.
 else if(ch == '(')
 st.push('(');

 // If the input character is an ')',
pop and output string from the stack
 until an '(' is encountered.
 else if(ch == ')') {
 while(st.top() != '(')
 {
  postfix_exp += st.top();
  st.pop();
 }
 st.pop();
 }

 //If the character is an operator
 else 
        {
 while(!st.empty() && precedence(s[i]) <= precedence(st.top())) 
            {
  postfix_exp += st.top();
  st.pop();
 }
 st.push(ch);
 }
}

// Pop all the remaining elements from the stack
while(!st.empty()) 
    {
 postfix_exp += st.top();
 st.pop();
}

return postfix_exp;
}

int main() 
{
string infix_expression = "A*B-(C+D)+E";
cout<<"The postfix string is: "<<infixToPostfix(infix_expression);
return 0;
}
