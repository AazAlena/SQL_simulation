cmake_minimum_required(VERSION 3.10)

# Название проекта и требуемый язык (находит компилятор C++)
project(sqlsim LANGUAGES CXX)

# Стандарт C++17 (или новее) — компилятору передаётся флаг -std=c++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Список исходных файлов
set(SOURCES
    src/main.cpp
    src/hello.cpp
)

# Исполняемый файл
add_executable(sqlsim ${SOURCES})

# Подключение публичных заголовков из каталога include/
target_include_directories(sqlsim PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Сторонние библиотеки (пример на будущее — сейчас не используются):
# find_package(SQLite3 REQUIRED)
# target_link_libraries(sqlsim PRIVATE SQLite::SQLite3)
