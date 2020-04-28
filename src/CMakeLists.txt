#file(GLOB_RECURSE CORE_SOURCE ./core/*.cpp)
#file(GLOB_RECURSE CORE_INLINE ./core/*.inl)
#file(GLOB_RECURSE CORE_HEADER ./core/*.h)
list(APPEND DIRS_CORE
	"core"
	"core/debug"
	"core/debug/wn32"
	"core/list"
	"core/math"
	"core/string"
	"core/support"
	"core/task"
	"core/thread/wn32"
	)
add_dir("${DIRS_CORE}" "CORE")

list(APPEND DIRS_GEL
	"gel"
	"gel/assman"
	"gel/collision"
	"gel/components"
	"gel/environment"
	"gel/input"
	"gel/mainloop"
	"gel/module"
	"gel/movies"
	"gel/music"
	"gel/net"
	"gel/net/app"
	"gel/net/client"
	"gel/net/dispatch"
	"gel/net/handler"
	"gel/net/server"
	"gel/object"
	"gel/prefs"
	"gel/scripting"
#	"gel/soundfx"
	)
add_dir("${DIRS_GEL}" "GEL")
# they included skiptoken.cpp ?!
list(REMOVE_ITEM GEL_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/gel/scripting/skiptoken.cpp")

list(APPEND DIRS_GFX
	"gfx"
	"gfx/2d"
	"gfx/image"
	)
add_dir("${DIRS_GFX}" "GFX")

list(APPEND DIRS_SK
	"sk"
	"sk/components"
	"sk/engine"
	"sk/gamenet"
	"sk/modules/frontend"
	"sk/modules/skate"
	"sk/modules/viewer"
	"sk/objects"
	"sk/parkeditor"
	"sk/parkeditor2"
#	"sk/scripting"
	)
add_dir("${DIRS_SK}" "SK")

list(APPEND DIRS_SYS
	"sys"
	"sys/config"
	"sys/config/win32"
	"sys/file"
	"sys/mem"
	"sys/replay"
	"sys/replay/win32"
	"sys/sio"
	"sys/win32"
	)
add_dir("${DIRS_SYS}" "SYS")

source_group("Core Files" FILES ${CORE_SOURCE})
source_group("Core Files" FILES ${CORE_INLINE})
source_group("Core Files" FILES ${CORE_HEADER})
source_group("Gel Files" FILES ${GEL_SOURCE})
source_group("Gel Files" FILES ${GEL_INLINE})
source_group("Gel Files" FILES ${GEL_HEADER})
source_group("Gfx Files" FILES ${GFX_SOURCE})
source_group("Gfx Files" FILES ${GFX_INLINE})
source_group("Gfx Files" FILES ${GFX_HEADER})
source_group("Sk Files" FILES ${SK_SOURCE})
source_group("Sk Files" FILES ${SK_INLINE})
source_group("Sk Files" FILES ${SK_HEADER})
source_group("Sys Files" FILES ${SYS_SOURCE})
source_group("Sys Files" FILES ${SYS_INLINE})
source_group("Sys Files" FILES ${SYS_HEADER})

#add_executable(thug INTERFACE)
add_executable(thug
	${CORE_SOURCE} ${CORE_INLINE} ${CORE_HEADER}
	${GEL_SOURCE}  ${GEL_INLINE}  ${GEL_HEADER}
	${GFX_SOURCE}  ${GFX_INLINE}  ${GFX_HEADER}
	${SK_SOURCE}   ${SK_INLINE}   ${SK_HEADER}
	${SYS_SOURCE}  ${SYS_INLINE}  ${SYS_HEADER})

#target_include_directories(thug INTERFACE ${PROJECT_SOURCE_DIR}/src)
include_directories(${INCLUDE_DIRECTORIES} ${PROJECT_SOURCE_DIR}/src)
