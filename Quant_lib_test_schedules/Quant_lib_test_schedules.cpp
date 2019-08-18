// Quant_lib_test_schedules.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <boost/foreach.hpp>
#include <ql/quantlib.hpp>

using namespace boost;
using namespace QuantLib;

int main()
{
    std::cout << "Hello World!\n"; 

	QuantLib::Date myEffDate(30, September, 2009), myTermDate(30, September, 2012);
	QuantLib::Period myTenor(12, Months);

	QuantLib::Schedule mySchedule = MakeSchedule().from(myEffDate).to(myTermDate).withTenor(myTenor);

	std::vector <Date > finalSched = mySchedule.dates();
	BOOST_FOREACH ( Date d, finalSched) std :: cout << d << std :: endl ;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
