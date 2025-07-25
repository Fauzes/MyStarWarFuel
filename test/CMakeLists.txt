project(tests)

find_package (Boost COMPONENTS unit_test_framework REQUIRED)

set(test1_source test_1_CheckFuelComand_good.cpp)
set(test2_source test_2_CheckFuelComand_bad.cpp)
set(test3_source test_3_BurnFuelComand.cpp)
set(test4_source test_4_MacroComand.cpp)


add_executable(test1 ${test1_source})
add_executable(test2 ${test2_source})
add_executable(test3 ${test3_source})
add_executable(test4 ${test4_source})


target_link_libraries(test1 ${Boost_LIBRARIES} MyStarWarFuel)
target_link_libraries(test2 ${Boost_LIBRARIES} MyStarWarFuel)
target_link_libraries(test3 ${Boost_LIBRARIES} MyStarWarFuel)
target_link_libraries(test4 ${Boost_LIBRARIES} MyStarWarFuel)


add_test(NAME Test1 COMMAND test1)
add_test(NAME Test2 COMMAND test2)
add_test(NAME Test3 COMMAND test3)
add_test(NAME Test4 COMMAND test4)

