#add_library(myLib INTERFACE)    #INTERFACE keyword here is saying that this library that we make is header only(.h), means it doesn't contain any source/implementation files(.cpp)
                                 # note it as we use INTERFACE keyword in add_library() when creating an header only library.
#target_include_directories(myLib INTERFACE ${CMAKE_CURRENT_LIST_DIR}/inc)

set(SOURCES
    src/CheckPoint.cpp
    src/CheckString.cpp
    src/CheckSyntax.cpp
    src/DeduceExpression.cpp
    src/EvaluateExpression.cpp
    src/EvaluatePoint.cpp
    src/HandleInput.cpp
    src/MakePoint.cpp
    #"src/Point.cpp"
    src/Result.cpp
    src/Variabl.cpp
)

add_library(myLib ${SOURCES})

target_include_directories(myLib PUBLIC ${CMAKE_CURRENT_LIST_DIR}/inc)