file(GLOB CH05_SOURCES CONFIGURE_DEPENDS
    r_*.cc
    c_*.cc
    p_*.cc
)

foreach(src ${CH05_SOURCES})
    get_filename_component(exe ${src} NAME_WE)
    add_executable(ch05_${exe} ${src})
endforeach()
