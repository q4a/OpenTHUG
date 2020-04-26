project(gel)

list(APPEND DIRS
    "."
    "AssMan"
    "Collision"
    "Components"
    "Environment"
    "Input"
    "MainLoop"
    "Module"
    "Movies"
    "Music"
    "Net"
    "Net/App"
    "Net/Client"
    "Net/Dispatch"
    "Net/Handler"
    "Net/Server"
    "Object"
    "Prefs"
    "Scripting"
    "SoundFX"
    )

add_dir("${DIRS}")

add_library(${PROJECT_NAME} STATIC ${${PROJECT_NAME}__SOURCES} ${${PROJECT_NAME}__INCLUDES})
