#ifndef AVLTREE_H
#define AVLTREE_H

class AVLTree {
    int value;
    AVLTree *avlt_left, *avlt_right;
    int height;

public:
    AVLTree(); // ����������� �� ���������
    ~AVLTree(); // ����������
    void add(int number); // ���������� ����� � ������
    void del(int number); // �������� ����� �� ������
    // �������� ������� �����, ��������� true ���� ����
    bool contains(int number) const;
    int size() const; // ����� ���������� ����� � ������
    // �������� ��� ����� �� tree � ��� ������
    void addAll(const AVLTree& tree);
    // ������� ��� ����� �� tree �� ����� ������
    void delAll(const AVLTree& tree);
    void clear(); // �������� ������
    bool empty(); // ������� true ���� ������

    AVLTree(AVLTree &avlt);
    //int getValue(); // �������� �������� �������� ������
};#endif // AVLTREE_H