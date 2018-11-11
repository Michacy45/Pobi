#include <boost/test/unit_test.hpp>

#include "Client.h"

BOOST_AUTO_TEST_SUITE(TestSuiteCorrect)

BOOST_AUTO_TEST_CASE(ClientFirstNameCase) {
    Client client("Jan", "Kowalski", "1234567890");
    BOOST_CHECK_EQUAL(client.getFirstName(), "Jan");
//tutaj sprawd� pozosta�e warto�ci dla clienta
}

BOOST_AUTO_TEST_SUITE_END()