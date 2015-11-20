/*
 * File:   linkedListTest.h
 * Author: tlibal
 *
 * Created on Nov 20, 2015, 10:13:59 PM
 */

#ifndef LINKEDLISTTEST_H
#define	LINKEDLISTTEST_H

#include <cppunit/extensions/HelperMacros.h>

#include "../src/LinkedList.h"

class linkedListTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(linkedListTest);

    CPPUNIT_TEST(testItInitializesWithFirstAndLastSetToNull);

    CPPUNIT_TEST_SUITE_END();

public:
    
    linkedListTest();
    virtual ~linkedListTest();
    void setUp();
    void tearDown();

private:
    void testItInitializesWithFirstAndLastSetToNull();
};

#endif	/* LINKEDLISTTEST_H */

