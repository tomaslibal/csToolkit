/* 
 * File:   ChainedHashTable.h
 * Author: tlibal
 *
 * Created on December 13, 2015, 2:32 PM
 */

#ifndef CHAINEDHASHTABLE_H
#define	CHAINEDHASHTABLE_H

#include "../../doublyLinkedList/src/DoublyLinkedList.h"

template <class T> class ChainedHashTable {
public:
    ChainedHashTable();
    virtual ~ChainedHashTable();
    
    void insert(const char* key, T value);
    T search(const char* key);
    void remove(const char* key);
private:
    short int tableSize = 100;
    int hash(const char* key);
    DoublyLinkedList<T> **hashTable;
    void createHashTable(short int size);
    void resizeHashTable(short int newSize);
};

#endif	/* CHAINEDHASHTABLE_H */

