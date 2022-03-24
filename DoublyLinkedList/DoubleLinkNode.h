#ifndef DATASTRUCTURES_DOUBLYLINKEDLIST_DOUBLELINKNODE_H
#define DATASTRUCTURES_DOUBLYLINKEDLIST_DOUBLELINKNODE_H

#include <iostream>

template<typename T>
class DoubleLinkNode {
public:
    DoubleLinkNode()
        : m_prev{nullptr}, m_next{nullptr}, m_data{} {}
    DoubleLinkNode(DoubleLinkNode<T>* prev, DoubleLinkNode<T>* next, T data)
        : m_prev{prev}, m_next{next}, m_data{data} {}
private:
    DoubleLinkNode<T>* m_prev;
    DoubleLinkNode<T>* m_next;
    T m_data;

public:
    DoubleLinkNode<T>* get_prev() { return m_prev; }
    DoubleLinkNode<T>* get_next() { return m_next; }
    void set_prev(DoubleLinkNode<T>* prev) { m_prev = prev; }
    void set_next(DoubleLinkNode<T>* next) { m_next = next; }
};


#endif //DATASTRUCTURES_DOUBLYLINKEDLIST_DOUBLELINKNODE_H
