#ifndef AVLTREE_H
#define AVLTREE_H

class AVLTree {
    int value;
    AVLTree *avlt_left, *avlt_right;
    int height;

public:
    AVLTree(); // конструктор по умолчанию
    ~AVLTree(); // деструктор
    void add(int number); // добавление числа в дерево
    void del(int number); // удаление числа из дерева
    // проверка наличия числа, результат true если есть
    bool contains(int number) const;
    int size() const; // выдат количество чисел в дереве
    // Добавить все числа из tree в это дерево
    void addAll(const AVLTree& tree);
    // Удалить все числа из tree из этого дерева
    void delAll(const AVLTree& tree);
    void clear(); // очистить дерево
    bool empty(); // вернуть true если пустое

    AVLTree(AVLTree &avlt);
    //int getValue(); // получить значение верхушки дерева
};#endif // AVLTREE_H