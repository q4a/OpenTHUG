macro(add_dir DIRS FILE_GROUP)
  foreach(dir ${DIRS})
    message("adding ${dir} to ${FILE_GROUP}")
#    include_directories(${dir})
    file( GLOB ${FILE_GROUP}_SOURCE ${dir}/*.cpp ${dir}/*.cxx ${dir}/*.c)
    file( GLOB ${FILE_GROUP}_INLINE ${dir}/*.inl)
    file( GLOB ${FILE_GROUP}_HEADER ${dir}/*.h ${dir}/*.hpp)
  endforeach()
endmacro()