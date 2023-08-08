project(
    'PanTompkinsQRS',
    ['c', 'cpp'],
    default_options: [
        'c_std=c18', # Set the C standard
        'cpp_std=c++20', # Set the C++ standard
        'warning_level=3', # Set the warning level
        'buildtype=debugoptimized',
        # 'buildtype=debug'
        # 'buildtype=release'
    ],
)

lib_sources = files('panTompkins.c')

pan_tompkins_qrs_lib = library('PanTompkinsQRS', lib_sources)

lib_pan_tompkins_qrs_dep = declare_dependency(
    link_with: pan_tompkins_qrs_lib,
    include_directories: include_directories('.'),
)
