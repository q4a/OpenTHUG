project(sk)

list(APPEND DIRS
    "."
    "Components"
    "Engine"
    "GameNet"
    "Modules/FrontEnd"
    "Modules/Skate"
    "Modules/Viewer"
    "Objects"
    "ParkEditor"
    "ParkEditor2"
    "Scripting"
    )

add_dir("${DIRS}")

add_library(${PROJECT_NAME} STATIC ${${PROJECT_NAME}__SOURCES} ${${PROJECT_NAME}__INCLUDES})
