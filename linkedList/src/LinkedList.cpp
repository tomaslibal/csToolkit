/* 
 * File:   LinkedList.cpp
 * Author: tlibal
 * 
 * Created on November 20, 2015, 10:09 PM
 */

#include <cstdlib>
#include <new>
#include <string.h>
#include "LinkedList.h"
#include <cassert>

using namespace std;

template <class T> LinkedList<T>::LinkedList() {
    this->first = (linkedNode<T>*) malloc(sizeof(linkedNode<T>));
    this->first->key = NULL;
    this->first->value = (T) 0;
    this->first->next = NULL;
    
    this->last = NULL;
}

template <class T> LinkedList<T>::~LinkedList() {
    linkedNode<T> *node = this->first;
    linkedNode<T> *next;
    
    while(node) {
        next = node->next;
        this->freeNode(node);
        node = next;
    }
}

template <class T> linkedNode<T>* LinkedList<T>::createNewNode(const char* key, T value) {
    linkedNode<T>* node = (linkedNode<T>*) malloc(sizeof(linkedNode<T>));
    
    if (!node) {
        throw bad_alloc();
    }
    
    node->key = strdup(key);
    node->value = value;
    
    return node;
}

template <class T> void LinkedList<T>::setKey(linkedNode<T> *node, const char* key) {
    if (node->key != NULL) {
        node->key = (char*) realloc(node->key, sizeof(key)+1);
        if (!node->key) {
            throw bad_alloc();
        }
        strcpy(node->key, key);
    } else {
        node->key = strdup(key);
    }
}

template <class T> void LinkedList<T>::addNode(T value) {
    linkedNode<T> *last = this->last;
    
    if (last == NULL) {
        last = this->first;
    }
    
    this->last = addNodeWithValue<T>(last, value);
}

template <class T> void LinkedList<T>::addNode(const char* key, T value) {
    linkedNode<T> *last = this->last;
    
    if (last == NULL) {
        last = this->first;
    }
    
    this->last = addNodeWithKeyValue<T>(last, key, value);
}

template <class T> void LinkedList<T>::addNodeAtHead(const char* key, T value) {
    linkedNode<T>* first = this->first;
    
    linkedNode<T>* node = this->createNewNode(key, value);
    node->next = first; 
    this->first = node;
}

template <class T> int LinkedList<T>::getLength() {
    int c = 0;
    
    linkedNode<T> *node = this->first;
    
    while(node) {
        c++;
        node = node->next;
    }
    
    return c;
}

template <class T> linkedNode<T>* LinkedList<T>::getAtIndex(int idx) {
    linkedNode<T> *node = this->first;
    
    int c = 0;
    
    assert(idx >= 0);
    
    while(node) {
        if (c == idx) {
            return node;
        }
        c++;
        node = node->next;
    }
    
    return NULL;
}

template <class T> void LinkedList<T>::removeNode(T value) {
    removeNodeByValue<T>(this->first, value);
    this->updatePointerToLastNode();
}

template <class T> void LinkedList<T>::removeNode(const char* key) {
    removeNodeByKey<T>(this->first, key);
    this->updatePointerToLastNode();
}

template <class T> void LinkedList<T>::updatePointerToLastNode() {
    linkedNode<T> *node = this->first;
    
    while(node->next) {
        node = node->next;
    }
    
    this->last = node;
}

template <class T> void LinkedList<T>::print() {
    printList<T>(this->first);
}

template <class T> linkedNode<T>* LinkedList<T>::getNode(T value) {
    linkedNode<T> *node = this->first;
    
    while(node) {
        if (node->value == value) {
            return node;
        }
        node = node->next;
    }
    
    return NULL;
}

template <class T> linkedNode<T>* LinkedList<T>::getNode(const char* key) {
    linkedNode<T> *node = this->first;
    
    while(node) {
        if (node->key != NULL && strcmp(node->key, key) == 0) {
            return node;
        }
        node = node->next;
    }
    
    return NULL;
}

template <class T> linkedNode<T>* LinkedList<T>::getNode(const char* key, T value) {
    linkedNode<T> *node = this->getNode(key);
    
    if (node->value == value) {
        return node;
    } else {
        return NULL;
    }
}

template <class T> T LinkedList<T>::sum() {
    T sum = (T) 0;
    
    linkedNode<T>* node = this->first;
    
    while(node) {
        sum += node->value;
        node = node->next;
    }
    
    return sum;
}

template <class T> void LinkedList<T>::freeNode(linkedNode<T>* node) {
    if (node->key != NULL) {
        free(node->key);
    }
    free(node);
}

template class LinkedList<int>;