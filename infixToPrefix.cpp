// this is infix to prefix conversion

#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <stack>

using namespace std;

// here all processes are same as infix to postfix only one differece is that here we scan the string in reverse order only and after generating output we again reverse the generated output to create final output 

int precedence(char a)
{
    if (a == '+' || a == '-')
    {
        return 1;
    }
    else if (a == '*' || a == '/')
    {
        return 2;
    }
    else if (a == '^')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i = 0;
    char s1[100];
    stack<int> s;
    vector<char> output;

    cout << "\nEnter the Expression here : ";
    cin >> s1;
    strrev(s1);
    while (1)
    {
        if (i == strlen(s1))
        {
            break;
        }
        if (s1[i] == '+' || s1[i] == '-' || s1[i] == '*' || s1[i] == '/' || s1[i] == '^')
        {
        y:
            if (s.size() == 0)
            {
                s.push(s1[i]);
            }
            else
            {
                if ((precedence(s.top()) - precedence(s1[i])) >= 0)
                {
                    output.push_back(s.top());
                    s.pop();
                    goto y;
                }
                s.push(s1[i]);
            }
        }
        else
        {
            output.push_back(s1[i]);
        }
        i++;
    }
    while (s.size() != 0)
    {
        output.push_back(s.top());
        s.pop();
    }
    cout << "\nPrefix Expression : ";
    for (int i = output.size() - 1; i >= 0; i--)
    {
        cout << output.at(i);
    }
    return 0;
}