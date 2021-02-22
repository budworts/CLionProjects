cmake_minimum_required(VERSION 3.17)
project(Accounts)

set(CMAKE_CXX_STANDARD 17)

add_executable(Accounts main.cpp Account.cpp Account.h SavingsAccount.cpp SavingsAccount.h AccountUtil.cpp AccountUtil.h CheckingAccount.cpp CheckingAccount.h TrustAccount.cpp TrustAccount.h)