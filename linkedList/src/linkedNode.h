/* 
 * File:   linkedNode.h
 * Author: tlibal
 *
 * Created on November 20, 2015, 10:10 PM
 */

#ifndef LINKEDNODE_H
#define	LINKEDNODE_H

#include <initializer_list>

template <typename T> struct linkedNode {
    int id;
    T value;
    linkedNode<T> *next;
};

template <typename T> linkedNode<T>* addEmptyNode(linkedNode<T> *parent);
template <typename T> linkedNode<T>* addNodeWithValue(linkedNode<T> *parent, T value);
template <typename T, typename... Args> void addListOfNodesWithValues(linkedNode<T> *parent, Args... values);

template <typename T> void removeNodeByValue(linkedNode<T> *first, T value);

template <typename T> void printList(linkedNode<T> *first);

template <typename T> void freeList(linkedNode<T> *first);


#endif	/* LINKEDNODE_H */
