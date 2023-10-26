// Complete creation of stack 

#include<iostream>
#include<stdlib.h>
using namespace std;
int top=-1;
int stack[7];

void push()
{
    if(top==7)
    {
        cout<<"\nOverflow!!!\n";
    }
    else
    {
    top++;
    cout<<"\nEnter the Number which you want to PUSH into the Stack : ";
    cin>>stack[top];
    cout<<"\nThe number "<<stack[top]<<" Successfully Pushed ";
    cout<<endl;
    }
}

void pop()
{
    if(top==-1)
    {
        cout<<"\nUnderflow!!!\n";
    }
    else
    {
    cout<<"\nThe number "<<stack[top]<<" Successfully Poped";
    top--;
    cout<<endl;
    }
}

void display()
{
    if(top==-1)
    {
        cout<<"\nStack is Empty!!!\n";
    }
    else
    {
    cout<<"\n Elements in stack : ";
    for(int i=top;i>=0;i--)
    {
        cout<<"\n"<<stack[i];
    }
    }

    cout<<endl;
}

void stacktop()
{
    if(top==-1)
    {
        cout<<"\nStack is Empty!!!\n";
    }
    else
    {
    cout<<"\nStack Top = "<<stack[top];
    cout<<endl;
    }

}



int main()
{
    int a;
    while(1)
    {
        cout<<"\nChoose the Operation On Stack : \n1) Push \n2) Pop \n3) Display \n4) Top \n5) Exit \n";
        cin>>a;
        switch(a)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            stacktop();
            break;

            case 5:
            exit(0);
            break;

            default:
            cout<<"\nInvalide Input! Try Again!\n";
        }

    }

    return 0;

}