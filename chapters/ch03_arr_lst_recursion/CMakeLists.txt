
file(GLOB CH03_SOURCES CONFIGURE_DEPENDS
    r_*.cc
    c_*.cc
    p_*.cc
)

foreach(src ${CH03_SOURCES})
    get_filename_component(exe ${src} NAME_WE)
    add_executable(ch03_${exe} ${src})
endforeach()
