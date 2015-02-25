#include "avltree.h"

////////////////////////////////////
#include <iostream>
using namespace std;
void print_new(int number)
{
    static int a;
    ++a;
    cout << a << "      NEW note " << number << endl;
}
void print_delete(int number)
{
    static int a;
    ++a;
    cout << a << "   DELETE note " << number << endl;
}
void print_new_tree(int number)
{
    static int a;
    ++a;
    cout << a << "      NEW tree " << number << endl;
}
void print_delete_tree(int number)
{
    static int a;
    ++a;
    cout << a << "   DELETE tree " << number << endl;
}
////////////////////////////////////

AVLTree::AVLTree()
    :note(nullptr)
{}

AVLTree::AVLNote::AVLNote(int value)
    : value(value),
    note_left(nullptr),
    note_right(nullptr),
    height(-1)
{}

AVLTree::~AVLTree()
{
    if (!note->empty())
        print_delete_tree(note->value);
    delete note;
}

AVLTree::AVLNote::~AVLNote()
{
    if (!note_left->empty())
        print_delete(note_left->value);
    if (!note_right->empty())
        print_delete(note_right->value);
    delete note_left;
    delete note_right;
}

bool AVLTree::empty()
{
    return (note->empty());
}

bool AVLTree::AVLNote::empty()
{
    return (this == nullptr);
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

bool AVLTree::contains(int number) const
{
    if (note->empty())
        return false;
    else
        return note->contains(number);
}

bool AVLTree::AVLNote::contains(int number) const
{
    if (value == number)
        return true;
    if (number < value)
        if (note_left->empty())
            return false;
        else
            return note_left->contains(number);
    else
        if (note_right->empty())
            return false;
        else
            return note_right->contains(number);
}

void AVLTree::del(int number)
{
    if (!empty())
        note->del(number, note);
}

void AVLTree::AVLNote::del(int number, AVLNote *parent)
{

}

/* --------  find() для не повторного использования кода ------
   --------      в del() и contains() класса AVLNode     ------ */

//AVLTree::AVLNote * AVLTree::AVLNote::find(int number)
//{
//
//}

//AVLTree::AVLTree(AVLTree &avlt)
//    :value(avlt.value)
//{
//    
//}

//int AVLTree::getValue()
//{
//    return value;
//}