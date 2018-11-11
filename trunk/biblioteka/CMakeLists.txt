cmake_minimum_required(VERSION 3.4)
project(Biblioteka)

set(SOURCE_FILES
    src/Client.cpp
)
#utwórz bibliotekê typu STATIC, SHARED albo MODULE ze wskazanych Ÿróde³
add_library(Biblioteka ${SOURCE_FILES})

target_include_directories(Biblioteka PUBLIC include)
enable_testing()

find_package (Boost 1.60.0 COMPONENTS "unit_test_framework" REQUIRED)

include_directories(
 ${CMAKE_CURRENT_SOURCE_DIR}/include
 ${Boost_INCLUDE_DIRS}
)

set(SOURCE_TEST_HUMAN_FILES
 test/master.cpp
 test/ClientTest.cpp)

add_executable (TestBibl ${SOURCE_TEST_HUMAN_FILES})

#do³¹cz bibliotekê z testowanymi klasami do programu testów
target_link_libraries (TestBibl
 Biblioteka
 ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
 )

#dodaj test TestBiblioteki1. Instrukcji cmake add_test mo¿e byæ wiele. 
#Dodatkowe parametry wp³ywaj¹ na szczegó³owoœæ generowanego raportu. Standardowo znajduje siê on w Testing/Temporary.
add_test(TestBiblioteki1 TestBibl
 --report_level=detailed
 --log_level=all
 --color_output=yes
 )
add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1 BOOST_TEST_LOG_LEVEL=all
        ${CMAKE_CTEST_COMMAND} -C $<CONFIG> --verbose
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})

