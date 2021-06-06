if (NOT DEFINED LIBC_TARGET)
    set(LIBC_TARGET ismenaos-libc)
    message (WARNING "LIBC_TARGET was not set by project root. Defaulting to '${LIBC_TARGET}'.")
    set(LIBC_TARGET ${LIBC_TARGET} PARENT_SCOPE)
endif ()

set (STRING_SOURCES
        src/string/memchr.c
        src/string/memcmp.c
        src/string/memcpy.c
        src/string/memmove.c
        src/string/memset.c
        src/string/strchr.c
        src/string/strlen.c
        )

set (SOURCES
        ${STRING_SOURCES}
        )

macro(add_libc)
    add_library(${TARGET_NAME} STATIC ${SOURCES})
    target_link_libraries(${TARGET_NAME} clang)
    target_include_directories(${TARGET_NAME} PUBLIC include)
    set(LIBC_C_COMPILER_FLAGS ${C_COMPILER_FLAGS})

endmacro()

add_libc(${LIBC_TARGET} NO)
add_libc(${LIBC_TARGET} YES)