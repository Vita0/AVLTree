#include "avltree.h"

#include <iostream>
using namespace std;
void print_new(int number)
{
    cout << "   NEW note " << number << endl;
}
void print_delete(int number)
{
    cout << "DELETE note " << number << endl;
}
void print_new_tree(int number)
{
    cout << "   NEW tree " << number << endl;
}
void print_delete_tree(int number)
{
    cout << "DELETE tree " << number << endl;
}

AVLTree::AVLNote::AVLNote(int value)
    :value(value),
    note_left(nullptr),
    note_right(nullptr),
    height(-1)
{}

AVLTree::AVLTree()
    :note(nullptr)
{}

AVLTree::AVLNote::~AVLNote()
{
    if (!note_left->empty())
        print_delete(note_left->value);
    if (!note_right->empty())
        print_delete(note_right->value);
    delete note_left;
    delete note_right;
}

AVLTree::~AVLTree()
{
    if (!note->empty())
        print_delete_tree(note->value);
    delete note;
}

bool AVLTree::AVLNote::empty()
{
    return (this == nullptr);
}

bool AVLTree::empty()
{
    return (note->empty());
}

void AVLTree::AVLNote::add(int number)
{
    if (number == value)
        return;
    if (number < value)
        if (note_left->empty())
        {
            note_left = new AVLNote(number);
            print_new(number);
        }
        else
            note_left->add(number);
    else
        if (note_right->empty())
        {
            note_right = new AVLNote(number);
            print_new(number);
        }
        else
            note_right->add(number);
    return;
}

void AVLTree::add(int number)
{
    if (empty())
    {
        note = new AVLNote(number);
        print_new_tree(number);
    }
    else
        note->add(number);
    return;
}

//AVLTree::AVLTree(AVLTree &avlt)
//    :value(avlt.value)
//{
//    
//}

//int AVLTree::getValue()
//{
//    return value;
//}