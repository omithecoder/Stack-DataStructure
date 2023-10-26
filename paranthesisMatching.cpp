#include<iostream>
#include<string.h>
#include<string>
#include<stack>

using namespace std;

int main()
{
    int i=0;
    string s1;
    stack <char> s;
    cout<<"\nEnter the String here : ";
    cin>>s1;
    s.push(s1[i]);
    while (1)
    {
        i++;
        if(i==s1.size())
        {
            break;
        }
        if(s.size()>0 && ((s.top()=='(' && s1[i]==')') || (s.top()=='[' && s1[i]==']') || (s.top()=='{' && s1[i]=='}')) )
        {
            s.pop();
        }
        else
        {
            s.push(s1[i]);
        }

        
        
    }
    if(s.size()==0)
    {
        cout<<"\nEntered Expression is Balanced Paranthesis Expression\n";
    }
    else
    {
        cout<<"\nEntered Expression is Not a Balanced Paranthesis Expression\n";
    }
    
    return 0;
    
}