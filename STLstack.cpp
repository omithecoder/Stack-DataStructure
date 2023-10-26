//  Stack using STL 
#include<iostream>
#include<stack>
#include<stdlib.h>

using namespace std;
int temp;
void display(stack <int> s)
{
    
    if(s.size()==0)
    {
        return;
    }
    else
    {
        cout<<"\n"<<s.top();
        temp=s.top();
        s.pop();
        display(s);
    }
    s.push(temp);
}

int main()
{
    stack<int> s1;
    int a;
    int temp;
    while (1)
    {
        cout<<"\nChoose the stack Operation from following : ";
        cout<<"\n1) Push \n2) Pop \n3) Display \n4) StackTop \n5) Exit\n";
        cin>>a;
        switch(a)
        {
            case 1:
            cout<<"\nEnter the number which you want to PUSH into the Stack : ";
            cin>>temp;
            s1.push(temp);
            cout<<"\nThe number "<<temp<<" Sucessfully Pushed\n";
            break;

            case 2:
            cout<<"\nThe number "<<s1.top()<<" Successfully Poped\n";
            s1.pop();
            break;

            case 3:
            cout<<"\nElements in Stack : ";
            display(s1);
            break;

            case 4:
            cout<<"\nElement on Stack Top : "<<s1.top();
            break;

            case 5:
            exit(0);
            break;

            default:
            cout<<"\nInvalide Input!Try Again!\n";


        }
    }
    


}
