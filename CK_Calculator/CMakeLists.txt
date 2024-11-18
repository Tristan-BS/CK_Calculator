cmake_minimum_required(VERSION 3.10)
project(CK_Calculator)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_PREFIX_PATH "C:/Qt/6.8.0/msvc2022_64")

# Fügen Sie Ihre Quell- und Header-Dateien hinzu
set(SOURCES
    CK_Calculator.cpp
    CalculatorFunction.cpp
    main.cpp
)

set(HEADERS
    CK_Calculator.h
    CalculatorFunction.h
)

# Erstellen Sie das ausführbare Ziel
add_executable(CK_Calculator ${SOURCES} ${HEADERS})

# Fügen Sie Qt6-Bibliotheken hinzu
set(CMAKE_PREFIX_PATH "C:/Qt/6.2.0/msvc2019_64/lib/cmake/Qt6")
find_package(Qt6Widgets REQUIRED)
target_link_libraries(CK_Calculator Qt6::Widgets)

# Google Test einbinden
add_subdirectory(googletest)
include_directories(googletest/googletest/include)

# Erstellen Sie das Testziel
add_executable(CK_Calculator_Tests CK_Calculator_Tests.cpp ${SOURCES} ${HEADERS})
target_link_libraries(CK_Calculator_Tests gtest gtest_main Qt6::Widgets)


