#include <iostream>
#include "queue.h"
#include "queue.cpp"
using namespace std;

int main()
{

    cout << "Hello World!" << endl;
    Queue<int>*cola=new Queue<int>();
    cola->enqueue(10);
    cola->vaciar();
    delete cola;
    return 0;
}
