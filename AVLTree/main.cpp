#include <iostream>
#include "avltree.h"

using namespace std;

void testAddContains();

int main(void)
{
    testAddContains();

    cin.get();
    return 0;
}

void testAddContains()
{
    {
        cout << "testAddContains" << endl;
        AVLTree a;
        a.add(5);
        a.add(10);
        a.add(10);
        a.add(3);
        a.add(2);
        a.add(8);
        a.add(7);

        if (a.contains(5)) cout << "+";
        if (a.contains(10)) cout << "+";
        if (a.contains(3)) cout << "+";
        if (a.contains(2)) cout << "+";
        if (a.contains(8)) cout << "+";
        if (a.contains(7)) cout << "+";

        if (!a.contains(0)) cout << "+";
        if (!a.contains(11)) cout << "+";
        if (!a.contains(6)) cout << "+";

        cout << endl;
    }
    cout << endl;
    return;
}