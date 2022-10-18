#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

#define SIZE 100

int Stack[SIZE], top=-1;

int isFull()
{
  return top==(SIZE-1);
}

int isEmpty()
{
  return top==-1;
}

// Function to add an item to stack.  It increases top by 1
int push(int item)
{
  if (isFull())
  {
    return -1;
  }
  Stack[++top] = item;
}

// Function to remove an item from stack.  It decreases top by 1
int pop()
{
  int temp;
  if (isEmpty())
  {
    return -1;
  }
  temp=Stack[top--];
  return temp;
}


//========================
void infixToPostfix(char exp[],char output[])
{

}






//=========================

int main()
{
  int n;
  char *exp, input[100], output[100];
  cin>>n;
  exp = input;
  while(n--)
  {
    cin>>exp;
    infixToPostfix(exp, output);
    cout<<output<<endl;
  }
  return 0;
}