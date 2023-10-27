#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

int evaluate(int a,int b,char op)
{
    switch (op)
    {
    case '+':
        return a+b;
        break;
    case '-':
        return a-b;
        break;
    case '*':
        return a*b;
        break;
    case '/':
        return a/b;
        break;
    case '^':
        return a^b;
        break;
    
    default:
    return 0;
        break;
    }
}

int main()
{
    int i=0;
    stack<int> s;
    int op1,op2;
    int num;
    char s1[100];
    cout<<"\nEnter the Postfix Expression here : ";
    cin>>s1;
    while (1)
    {
        if(i==strlen(s1))
        {
            cout<<"\n"<<s1<<" = "<<s.top();
            break;
        }
        if(s1[i]=='+' || s1[i]=='-' ||s1[i]=='*' ||s1[i]=='/' ||s1[i]=='^')
        {
            op2=s.top();
            s.pop();
            op1=s.top();
            s.pop();
            s.push(evaluate(op1,op2,s1[i]));
        }
        else
        {
            num = s1[i]-'0';
            s.push(num);
        }
        i++;
    }
    
}