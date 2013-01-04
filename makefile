
CC            = gcc
CXX           = g++
CFLAGS        = -pipe -g -gdwarf-2 -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5 -Wall -W
CXXFLAGS      = -pipe -g -gdwarf-2 -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5 -Wall -W
INCPATH       = -I/usr/local/lib/gtest-1.6.0/include -I.
LINK          = g++
LFLAGS        = -headerpad_max_install_names -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5
LIBS          = -L/usr/local/lib/ -lgtest 

test: sodamachinetest clean_o

sodamachinetest: TestRunner.o Vendor.o SodaMachine.o VendorTest.o SodaMachineTest.o 
	$(CXX) $(CXXFLAGS) $(LFLAGS) $(LIBS) TestRunner.o Vendor.o VendorTest.o SodaMachineTest.o SodaMachine.o -o SodaMachineTest

TestRunner.o: TestRunner.cpp
	$(CXX) $(INCPATH) -c TestRunner.cpp

SodaMachineTest.o: SodaMachineTest.cpp
	$(CXX) $(INCPATH) -c SodaMachineTest.cpp

VendorTest.o: VendorTest.cpp
	$(CXX) $(INCPATH) -c VendorTest.cpp	

SodaMachine.o: SodaMachine.cpp
	$(CXX) $(INCPATH) -c SodaMachine.cpp

Vendor.o: Vendor.cpp
	$(CXX) $(INCPATH) -c Vendor.cpp	

clean: clean_o
	rm -rf SodaMachineTest

clean_o:
	rm -rf *.o
