project(sys)

list(APPEND DIRS
    "."
    "Config"
    "Config/Win32"
    "File"
    "Mem"
    "Replay"
    "Replay/Win32"
    "SIO"
    "Win32"
    )

add_dir("${DIRS}")

add_library(${PROJECT_NAME} STATIC ${${PROJECT_NAME}__SOURCES} ${${PROJECT_NAME}__INCLUDES})
