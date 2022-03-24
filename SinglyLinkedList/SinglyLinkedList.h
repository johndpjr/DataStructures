#ifndef DATASTRUCTURES_SINGLYLINKEDLIST_SINGLYLINKEDLIST_H
#define DATASTRUCTURES_SINGLYLINKEDLIST_SINGLYLINKEDLIST_H

#include <iostream>
#include "SingleLinkNode.h"

template<typename T>
class SinglyLinkedList {
public:
    SinglyLinkedList()
        : m_head{nullptr}, m_size{0} {}

private:
    SingleLinkNode<T>* m_head;
    size_t m_size;

public:
    /**
     * Adds a node to the first of the list
     * @param data
     */
    void add_first(const T& data) {
        auto node = new SingleLinkNode<T>(data);
        if (m_size) {
            node->set_next(m_head);
        }
        m_head = node;
        ++m_size;
    }
    /**
     * Adds a node to the last of the list
     * @param data
     */
    void add_last(const T& data) {
        auto node = new SingleLinkNode<T>(data);
        if (!m_size) {
            m_head = node;
            ++m_size;
            return;
        }
        SingleLinkNode<T>* next = m_head;
        while (next->get_next() != nullptr) {
            next = next->get_next();
        }
        next->set_next(node);
        ++m_size;
    }

    void remove_first() {
        if (!m_size) {
            std::cout << "LinkedList is empty" << std::endl;
            return;
        }
        if (m_size == 1) {
            delete m_head;
        } else {
            auto next = m_head->get_next();
            delete m_head;
            m_head = next;
        }
        --m_size;
    }

    void remove_last() {
        if (!m_size) {
            std::cout << "LinkedList is empty" << std::endl;
            return;
        }
        
    }

    void traverse() {
        if (!m_size) {
            std::cout << "LinkedList is empty" << std::endl;
            return;
        }
        std::cout << "Head: " << m_head << std::endl;
        SingleLinkNode<T>* next = m_head;
        for (size_t count {1}; count <= m_size; ++count) {
            std::cout << "Node #" << count << " @ " << next << std::endl;
            std::cout << "Value: " << next->get_data() << std::endl;
            std::cout << "Next @ " << next->get_next() << std::endl << std::endl;
            next = next->get_next();
        }
    }
};


#endif //DATASTRUCTURES_SINGLYLINKEDLIST_SINGLYLINKEDLIST_H
