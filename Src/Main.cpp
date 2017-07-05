/*
 * Main.cpp
 *
 *  Created on: 3 juil. 2017
 *      Author: lo
 */

#include <cppunit/TestSuite.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestCase.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/XmlOutputter.h>
#include <netinet/in.h>
#include "../Inc/TestBasicMath.h"
#include "../Inc/TestBasicMath2.h"
#include <iostream>

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION( TestBasicMath );
CPPUNIT_TEST_SUITE_REGISTRATION( TestBasicMath2 );

int main(int argc, char* argv[])
{
	cout << "Running tests" << endl;

	// informs test-listener about testresults
	CPPUNIT_NS::TestResult testresult;

	// register listener for collecting the test-results
	CPPUNIT_NS::TestResultCollector collectedresults;
	testresult.addListener (&collectedresults);

	// register listener for per-test progress output
	CPPUNIT_NS::BriefTestProgressListener progress;
	testresult.addListener (&progress);

	// insert test-suite at test-runner by registry
	CPPUNIT_NS::TestRunner testrunner;
	testrunner.addTest (CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest ());
	testrunner.run(testresult);

	// return 0 if tests were successful
	return collectedresults.wasSuccessful() ? 0 : 1;

	return 0;

}
