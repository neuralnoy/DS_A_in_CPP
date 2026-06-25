file(GLOB CH06_SOURCES CONFIGURE_DEPENDS
    r_*.cc
    c_*.cc
    p_*.cc
)

foreach(src ${CH06_SOURCES})
    get_filename_component(exe ${src} NAME_WE)
    add_executable(ch06_${exe} ${src})
endforeach()
