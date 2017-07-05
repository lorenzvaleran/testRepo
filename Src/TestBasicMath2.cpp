/*
 * TestBasicMath2.cpp
 *
 *  Created on: 5 juil. 2017
 *      Author: lo
 */

#include "../Inc/TestBasicMath2.h"
#include <cppunit/TestAssert.h>

void TestBasicMath2::setUp()
{
	mTestObj = new Math();
}

void TestBasicMath2::tearDown()
{
	delete mTestObj;
}

void TestBasicMath2::testSubstraction(void)
{
	const int sub = mTestObj->sub(10, 100);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Sub(10, 100) != -90", -90, sub);
}

void TestBasicMath2::testSubstraction2(void)
{
	const int sub = mTestObj->sub(-100, 0);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Sub(-100, 0) != -100", -100, sub);
}
