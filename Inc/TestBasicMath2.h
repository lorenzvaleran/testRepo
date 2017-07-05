/*
 * TestBasicMath2.h
 *
 *  Created on: 5 juil. 2017
 *      Author: lo
 */

#ifndef TESTBASICMATH2_H_
#define TESTBASICMATH2_H_

#include "Math.h"
#include <cppunit/extensions/HelperMacros.h>

class TestBasicMath2 : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE(TestBasicMath2);
	CPPUNIT_TEST(testSubstraction);
	CPPUNIT_TEST(testSubstraction2);
	CPPUNIT_TEST_SUITE_END();

	public:
		void setUp(void);
		void tearDown(void);

	protected:
		void testSubstraction(void);
		void testSubstraction2(void);

	private:
		Math *mTestObj;
};

#endif /* TESTBASICMATH2_H_ */
