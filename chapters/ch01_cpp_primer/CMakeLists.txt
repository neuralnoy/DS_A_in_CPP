file(GLOB CH01_SOURCES CONFIGURE_DEPENDS
    r_*.cc
    c_*.cc
    p_*.cc
)

foreach(src ${CH01_SOURCES})
    get_filename_component(exe ${src} NAME_WE)
    add_executable(ch01_${exe} ${src})
endforeach()
