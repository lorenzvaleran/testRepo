/*
 * Main.cpp
 *
 *  Created on: 3 juil. 2017
 *      Author: lo
 */

#include <cppunit/ui/text/TestRunner.h>
#include "../Inc/TestBasicMath.h"
#include "../Inc/TestBasicMath2.h"


CPPUNIT_TEST_SUITE_REGISTRATION( TestBasicMath );
CPPUNIT_TEST_SUITE_REGISTRATION( TestBasicMath2 );

int main(int argc, char* argv[])
{
	CppUnit::TextUi::TestRunner runner;
	CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry();
	runner.addTest( registry.makeTest() );
	bool wasSuccessful = runner.run();
	return !wasSuccessful;
}
