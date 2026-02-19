file(GLOB CH02_SOURCES CONFIGURE_DEPENDS
    r_*.cc
    c_*.cc
    p_*.cc
)

foreach(src ${CH02_SOURCES})
    get_filename_component(exe ${src} NAME_WE)
    add_executable(ch02_${exe} ${src})
endforeach()
