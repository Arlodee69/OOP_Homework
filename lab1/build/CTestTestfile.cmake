# CMake generated Testfile for 
# Source directory: /home/anton/code/OOP
# Build directory: /home/anton/code/OOP/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(MyProjectTests "/home/anton/code/OOP/build/tests")
set_tests_properties(MyProjectTests PROPERTIES  _BACKTRACE_TRIPLES "/home/anton/code/OOP/CMakeLists.txt;36;add_test;/home/anton/code/OOP/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
