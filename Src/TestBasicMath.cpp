/*
 * TestBasicMath.cpp
 *
 *  Created on: 3 juil. 2017
 *      Author: lo
 */

#include "../Inc/TestBasicMath.h"
#include <cppunit/TestAssert.h>

void TestBasicMath::setUp()
{
	mTestObj = new Math();
}

void TestBasicMath::tearDown()
{
	delete mTestObj;
}

void TestBasicMath::testAddition(void)
{
	const int sum = mTestObj->add(10, 100);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Add(10, 100) != 110", 110, sum);
}

void TestBasicMath::testSubtraction(void)
{
	const int sub = mTestObj->sub(10, 100);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("Sub(10, 100) != -90", -90, sub);
}
