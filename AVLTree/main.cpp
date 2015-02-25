#include <iostream>
#include "avltree.h"

using namespace std;

void testAdd();

int main(void)
{
    testAdd();

    cin.get();
    return 0;
}

void testAdd()
{
    AVLTree a;
    a.add(5);
    a.add(10);
    a.add(10);
    a.add(3);
    a.add(2);
    a.add(8);
    a.add(7);
    return;
}