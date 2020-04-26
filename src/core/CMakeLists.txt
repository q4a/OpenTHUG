project(core)

list(APPEND DIRS
    "."
    "Debug"
    "Debug/Wn32"
    "List"
    "Math"
    "String"
    "Support"
    "Task"
    "Thread"
    "Thread/wn32"
    )

add_dir("${DIRS}")

add_library(${PROJECT_NAME} STATIC ${${PROJECT_NAME}__SOURCES} ${${PROJECT_NAME}__INCLUDES})
