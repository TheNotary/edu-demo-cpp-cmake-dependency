file (GLOB_RECURSE SRCS . *.cpp)

add_library(${PROJECT_NAME}
    ${SRCS}
)

#add_dependencies(${PROJECT_NAME} ${EXTERNAL_PROJECTS} ${EXTERNAL_TEST_PROJECTS})

add_executable(my_dep
    main.cpp
)

target_link_libraries(my_dep
   # Add libraries here
   ${PROJECT_NAME}
   ${EXTERNAL_LIBRARIES}
)

# This might be required
install(FILES my_dep.h DESTINATION include/my_dep)
install(TARGETS my_dep EXPORT my_dep-targets DESTINATION lib)
