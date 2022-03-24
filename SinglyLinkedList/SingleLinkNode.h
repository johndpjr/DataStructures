#ifndef DATASTRUCTURES__SINGLELINKNODE_H
#define DATASTRUCTURES__SINGLELINKNODE_H

template<typename T>
class SingleLinkNode {
public:
    SingleLinkNode()
        : m_data{}, m_next{nullptr} {}
    SingleLinkNode(T data)
        : m_data{data}, m_next{nullptr} {}
    SingleLinkNode(T data, SingleLinkNode<T>* next)
        : m_data{data}, m_next{next} {}
private:
    T m_data;
    SingleLinkNode<T>* m_next;
public:
    T get_data() { return m_data; }
    SingleLinkNode<T>* get_next() { return m_next; }
    void set_data(const T& data) { m_data = data; }
    void set_next(SingleLinkNode<T>* next) { m_next = next; }
};


#endif //DATASTRUCTURES__SINGLELINKNODE_H
