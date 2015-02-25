#ifndef AVLTREE_H
#define AVLTREE_H

class AVLTree {
    struct AVLNote;
    AVLNote *note;

public:
    AVLTree(); //+ ����������� �� ���������
    ~AVLTree(); //+-whachAVLNote ����������
    void add(int number); //+ ���������� ����� � ������
    void del(int number); // �������� ����� �� ������
    // �������� ������� �����, ��������� true ���� ����
    bool contains(int number) const;
    int size() const; // ����� ���������� ����� � ������
    // �������� ��� ����� �� tree � ��� ������
    void addAll(const AVLTree& tree);
    // ������� ��� ����� �� tree �� ����� ������
    void delAll(const AVLTree& tree);
    void clear(); // �������� ������
    bool empty(); //+- ������� true ���� ������

    //AVLTree(AVLTree &avlt);
    //int getValue(); // �������� �������� �������� ������
};

struct AVLTree::AVLNote
{
    int value;
    AVLNote *note_left, *note_right;
    int height;

    AVLNote(int value);
    ~AVLNote();//+-?
    void add(int number);//+;

    bool empty();//+-?
};

#endif // AVLTREE_H