/*
 * File:   heapTest.h
 * Author: tlibal
 *
 * Created on Dec 28, 2016, 5:17:02 PM
 */

#ifndef heapTest_H
#define	heapTest_H

#include <cppunit/extensions/HelperMacros.h>

#include "../src/Heap.h"

class heapTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(heapTest);

    CPPUNIT_TEST(testLen);
    CPPUNIT_TEST(testHeapSizeIsZeroOnInit);
    CPPUNIT_TEST(testParentIdx);
    CPPUNIT_TEST(testLeftIdx);
    CPPUNIT_TEST(testRightIdx);
    CPPUNIT_TEST(testMaxHeapifyOnRoot);
    CPPUNIT_TEST(testHeapsort);

    CPPUNIT_TEST_SUITE_END();

public:
    heapTest();
    virtual ~heapTest();
    void setUp();
    void tearDown();

private:
    HeapArray * heap;
    void testLen();
    void testHeapSizeIsZeroOnInit();
    void testParentIdx();
    void testLeftIdx();
    void testRightIdx();
    void testMaxHeapifyOnRoot();
    void testHeapsort();
};

#endif	/* heapTest_H */

