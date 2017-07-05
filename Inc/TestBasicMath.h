/*
 * TestBasicMath.h
 *
 *  Created on: 3 juil. 2017
 *      Author: lo
 */

#include "Math.h"
#include <cppunit/extensions/HelperMacros.h>


class TestBasicMath : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(TestBasicMath);
	CPPUNIT_TEST(testAddition);
	CPPUNIT_TEST(testAddition2);
	CPPUNIT_TEST(testAddition3);
	CPPUNIT_TEST_SUITE_END();

	public:
		void setUp(void);
		void tearDown(void);

	protected:
		void testAddition(void);
		void testAddition2(void);
		void testAddition3(void);

	private:
		Math *mTestObj;
};
