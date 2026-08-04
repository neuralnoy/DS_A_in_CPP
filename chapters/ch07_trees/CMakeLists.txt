file(GLOB CH07_SOURCES CONFIGURE_DEPENDS
    r_*.cc
    c_*.cc
    p_*.cc
)

foreach(src ${CH07_SOURCES})
    get_filename_component(exe ${src} NAME_WE)
    add_executable(ch07_${exe} ${src})
endforeach()
