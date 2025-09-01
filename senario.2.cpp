#include <iostream>
using namespace std;

#define SIZE 30

string line[SIZE];
int front = -1;
int rear = -1;

void addCustomer(string name)
{
    if (rear == SIZE - 1)

        {
        cout << "Line is full, " << name << " cannot join now." << endl;

        cout << endl;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    line[rear] = name;

    cout << name << " joined at the back of the line." << endl;
}

void seeNextCustomer()
 {
    if (front == -1 || front > rear)

        {
        cout << "No customers in the line." << endl;

    }
    cout << "Next to be served: " << line[front] << endl;
}

void serveCustomer()

{
    if (front == -1 || front > rear)

        {
        cout << "No one to serve, line is empty." << endl;
       cout << endl;
        }
    cout << line[front] << " got their coffee and left." << endl;
    front++;
}

void showLine()

{
    if (front == -1 || front > rear)
        {
        cout << "Line is empty now." << endl;
       cout << endl;
    }
    cout << "Customers in line: ";

for (int i = front; i <= rear; i++)

     {
        cout << line[i] << " ";
    }
    cout << endl;
}

int main()


 {
addCustomer("Ali");
    addCustomer("dkghed");
addCustomer("Cjjfghs");
 showLine();
    seeNextCustomer();
    serveCustomer();
    seeNextCustomer();

    return 0;
}








