#include "avltree.h"

AVLTree::AVLTree()
    :value(0),
    avlt_left(nullptr),
    avlt_right(nullptr),
    height(1)
{}

AVLTree::AVLTree(AVLTree &avlt)
    :value(avlt.value)
{
    
}

//int AVLTree::getValue()
//{
//    return value;
//}