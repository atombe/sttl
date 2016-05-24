cmake_minimum_required (VERSION 2.6)
project (sttl)

# Versioning
set (sttl_VERSION_MAJOR 1)
set (sttl_VERSION_MINOR 0)

# Generate config file
configure_file (
    "${/include/sttl/Config.hpp}"
)

include_directories("${/include/sttl}")
