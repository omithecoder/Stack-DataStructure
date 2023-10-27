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
    stack<int> s;
    char s1[100];
    int op1,op2,num;
    cout<<"\nEnter the Prefix Expression here : ";
    cin>>s1;
    strcpy(s1,strrev(s1));
    int i=0;
    while(1)
    {
        if(i==strlen(s1))
        {
            cout<<"\n"<<strrev(s1)<<" = "<<s.top();
            break;
        }
        if(s1[i]=='+' ||s1[i]=='-' ||s1[i]=='*' ||s1[i]=='/' ||s1[i]=='^')
        {
            op1=s.top();
            s.pop();
            op2=s.top();
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