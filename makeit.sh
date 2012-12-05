#!/bin/bash

clear; g++ -l gtest_main -l gtest -l pthread SodaMachineTest.cpp SodaMachine.cpp -o test_sodamachine
