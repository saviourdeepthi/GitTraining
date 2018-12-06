set(Test_SRCS birthday_unittest.cc)

add_executable(cpp_birthday_test ${Test_SRCS})
target_link_libraries(cpp_birthday_test gtest gtest_main core)

