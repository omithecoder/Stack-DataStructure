
// Infix to Postfix Converter

#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <string.h>

using namespace std;

// this function returns the precedence as we know precedence of (+,-) = 1 , (*,/) = 2 , (^) = 3
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
    // Input Expression in string
    string s1;
    // Stack for memory
    stack<char> s;
    // output Expression vector
    vector<char> output;
    // Input Expression
    cout << "\nEnter the Infix Expression : ";
    cin >> s1;
    // Infinite while loop
    while (1)
    {
        // terminating condition
        if (i == s1.size())
        {
            break;
        }
        // Checking string ith character is operator or operand
        if (s1[i] == '+' || s1[i] == '-' || s1[i] == '*' || s1[i] == '/' || s1[i] == '^')
        {
        x:
            // check if the stack is empty or not if stack is empty we push first operator directly into the stack since we compare we directly start comparing by taking stack empty error will come
            if (s.size() == 0)
            {
                s.push(s1[i]);
            }
            else
            {

                // here we check the precedence of character if precedence of stacktop operator is less than incoming operator then push the incomming operator in stack else if precedence is equal or greater first pop the stacktop and then push the incoming operator 
                // push and pop both are different operations before every push/pop operation we check precedence  
                if ((precedence(s.top()) - precedence(s1[i])) >= 0)
                {
                    output.push_back(s.top());
                    s.pop();
                    goto x;
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
    cout << endl;
    while (s.size() != 0)
    {
        output.push_back(s.top());
        s.pop();
    }

    for (int i = 0; i < output.size(); i++)
    {
        cout << output.at(i);
    }

    return 0;
}
