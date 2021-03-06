/*
 * File:   redBlackTreeTest.h
 * Author: tlibal
 *
 * Created on Dec 20, 2015, 3:50:25 PM
 */

#ifndef REDBLACKTREETEST_H
#define	REDBLACKTREETEST_H

#include <cppunit/extensions/HelperMacros.h>

#include "../src/RedBlackTree.h"

class redBlackTreeTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(redBlackTreeTest);

    CPPUNIT_TEST(testCreateVoid);
    CPPUNIT_TEST(testRootIsBlack);
    CPPUNIT_TEST(testIsNilTest);   
    CPPUNIT_TEST(testNodeCopyConstructorCopiesValues); 
    CPPUNIT_TEST(testNodeCopyConstructorCreatesNewObjects);
    CPPUNIT_TEST(testNodeInsertRootStillBlack);

    CPPUNIT_TEST_SUITE_END();

public:
    redBlackTreeTest();
    virtual ~redBlackTreeTest();
    void setUp();
    void tearDown();

private:
    RedBlackTree* rbtree;
    void testCreateVoid();
    void testRootIsBlack();
    void testIsNilTest();
    void testNodeCopyConstructorCopiesValues();
    void testNodeCopyConstructorCreatesNewObjects();
    void testNodeInsertRootStillBlack();
};

#endif	/* REDBLACKTREETEST_H */

