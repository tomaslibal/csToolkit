/* 
 * File:   LinkedList.h
 * Author: tlibal
 *
 * Created on November 20, 2015, 10:09 PM
 */

#ifndef LINKEDLIST_H
#define	LINKEDLIST_H

#include "linkedNode.h"

template <class T>
class SimpleLinkedList {
public:
    linkedNode<T> *head;
    linkedNode<T> *tail;
    
    SimpleLinkedList();
    virtual ~SimpleLinkedList();
    
    void addNode(T value);
    void addNode(const char* key, T value);
    void addNodeAtHead(const char* key, T value);
    void removeNode(T value);
    void removeNode(const char* key);
    int getLength();
    linkedNode<T>* getAtIndex(int idx);
    linkedNode<T>* getNode(T value);
    linkedNode<T>* getNode(const char* key);
    linkedNode<T>* getNode(const char* key, T value);
    void print();
    void setKey(linkedNode<T> *node, const char* key);
    T sum();
    void freeNode(linkedNode<T>* node);
private:
    void updatePointerToTailNode();
    linkedNode<T>* createNewNode(const char* key, T value);

};

#endif	/* LINKEDLIST_H */
