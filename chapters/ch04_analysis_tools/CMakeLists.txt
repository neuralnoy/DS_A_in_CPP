file(GLOB CH04_SOURCES CONFIGURE_DEPENDS
    r_*.cc
    c_*.cc
    p_*.cc
)

foreach(src ${CH04_SOURCES})
    get_filename_component(exe ${src} NAME_WE)
    add_executable(ch04_${exe} ${src})
endforeach()
