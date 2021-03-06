/*
 * File:   bttraverseTest.h
 * Author: tlibal
 *
 * Created on May 9, 2016, 10:57:00 PM
 */

#ifndef _bttraverseTEST_H_
#define	_bttraverseTEST_H_

#include <cppunit/extensions/HelperMacros.h>

#include "../src/bttraverse.h"

#include <iostream>

class bttraverseTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(bttraverseTest);

    CPPUNIT_TEST(testPreorder);
    CPPUNIT_TEST(testInorder);
    CPPUNIT_TEST(testPostorder);
    CPPUNIT_TEST(testRootIsNullForPreorder);
    CPPUNIT_TEST(testRootIsNullForInorder);
    CPPUNIT_TEST(testRootIsNullForPostorder);
   
    CPPUNIT_TEST_SUITE_END();

public:
    bttraverseTest();
    virtual ~bttraverseTest();
    void setUp();
    void tearDown();

private:
    BinNode* root = nullptr;
    BinNode* l1 = nullptr;
    BinNode* r1 = nullptr;
    BinNode* l2 = nullptr;
  
    void testPreorder();
    void testInorder();
    void testPostorder();
    void testRootIsNullForPreorder();
    void testRootIsNullForInorder();
    void testRootIsNullForPostorder();
};

#endif	/* _bttraverseTEST_H_ */

