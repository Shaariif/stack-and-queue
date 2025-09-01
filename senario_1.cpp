#include <iostream>


using namespace std;
#define MAX 5

string stackArr[MAX];
int top = -1;


bool isEmpty()
{
    return (top == -1);
}


bool isFull()
{
    return (top == MAX - 1);
}


void push(string dish)
{
    if (isFull())
    {
        cout << "Shelf is full! Cannot store" << dish << endl;
    }
    else
    {
        top++;
        stackArr[top] = dish;
        cout << dish << " stored into shelf." << endl;
    }
}
void pop()
{
    if (isEmpty())
    {
        cout << "Store is empty! Cannot merge" << endl;
    }
    else
    {
        cout << stackArr[top] << " mearged from store." << endl;
        top--;
    }
}


void display()
{
    if (isEmpty())
    {
        cout << "Shelf is empty." << endl;
    }
    else
    {
        cout << "Stored kitchen elements: ";
        for (int i = 0; i <= top; i++)
        {
            cout << stackArr[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int choice;
    string dish;

    while (1)
        {

cout <<"1-Store,clean dish"<<endl;

cout<<  " 2- Dishh for next meal"<<endl;

cout << "3-Show all clean dishes in cupboard"<<endl;

cout<<"40- Exit the progra"<<endl;

cout<< "Enter your choice: "<< endl;


cin >> choice;

        if ( choice== 1 )
        {

            cout << "Enter dish name: ";
            cin >> dish;

            push(dish);
        }
        else if
            (choice == 2)
        {

            pop();
        }
        else if
            (choice == 3)
        {
            display();
        }
        else if (choice == 4)
        {
            cout << "Exiting program..." << endl;

        }





        else
        {
            cout << "No clean dishes left. Please STRATOVER" << endl;
        }
    }


    return 0;
}
