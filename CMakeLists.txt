cmake_minimum_required(VERSION 3.10)

project(cpp_project
	VERSION 0.1.2
	LANGUAGES CXX
	DESCRIPTION "C++ tutorial project."
	)
enable_testing()

# add an executable
add_executable(my_test my_test.cpp)

# add a test
add_test(my_test my_test)

# define where to install the executable
install(TARGETS my_test RUNTIME DESTINATION bin)


# define how to build packages
set(CPACK_PACKAGE_CONTACT "james.goppert@gmail.com")
set(CPACK_SOURCE_GENERATOR "ZIP")
set(CPACK_SOURCE_IGNORE_FILES "build")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
include(CPack)
