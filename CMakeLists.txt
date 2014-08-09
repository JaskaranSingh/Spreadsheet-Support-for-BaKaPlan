cmake_minimum_required(VERSION 2.8)

project(Spreadsheet-BakaPlan)

#EXTERNAL HEADER FILES
set(H_External 
	mysqlclient
	cgicc)

#SOURCE FILES
set(SOURCE
	src/main.cc
	src/parser-main.cpp)

add_executable(parser ${SOURCE})

target_link_libraries(parser ${H_External})