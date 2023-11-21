cmake_minimum_required(VERSION 3.5)

project(03_homework)

add_executable(03_homework
	03_homework.cpp
		introducing.h
		introducing.cpp
		accepts_digit.cpp
		accepts_digit.h
		random_value.cpp
		random_value.h
		check_value.h
		check_value.cpp
		high_scores.h
		high_scores.cpp

)

set_target_properties(03_homework PROPERTIES
		CXX_STANDARD 17
		CXX_STANDARD_REQUIRED ON)

#if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR
#		CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
#	target_compile_options(${target_name} PRIVATE
#			-g
#			-Wall
#			-Wextra
#			-Werror
#			-pedantic
#	)
#elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
#	target_compile_options(${target_name} PRIVATE
#			/EHsc
#			/W4
#			/WX
#	)
#endif()