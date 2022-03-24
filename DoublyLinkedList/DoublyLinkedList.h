#ifndef DATASTRUCTURES_DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_H
#define DATASTRUCTURES_DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_H

#include <iostream>
#include "DoubleLinkNode.h"

template<typename T>
class DoublyLinkedList {
public:
    DoublyLinkedList() : m_size{0} {
        m_header.set_next(&m_trailer);
        m_trailer.set_prev(&m_header);
    }

private:
    DoubleLinkNode<T> m_header;
    DoubleLinkNode<T> m_trailer;
    size_t m_size;

public:
    void add_first(T data) {
        auto node = new DoubleLinkNode<T>{data};
        node->set_prev(&m_header);
        if (!m_size) {
            node->set_next(&m_trailer);
            m_header.set_next(node);
            m_trailer.set_prev(node);
        } else {
            m_header.get_next()->set_prev(node);
        }

        ++m_size;
    }
    void add_last(T data) {}

    void remove_first() {}
    void remove_last() {}
};


#endif //DATASTRUCTURES_DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_H
