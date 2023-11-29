# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Espressif/frameworks/esp-idf-v5.0.1/components/bootloader/subproject"
  "D:/Projects/path_finder_body/build/bootloader"
  "D:/Projects/path_finder_body/build/bootloader-prefix"
  "D:/Projects/path_finder_body/build/bootloader-prefix/tmp"
  "D:/Projects/path_finder_body/build/bootloader-prefix/src/bootloader-stamp"
  "D:/Projects/path_finder_body/build/bootloader-prefix/src"
  "D:/Projects/path_finder_body/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Projects/path_finder_body/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/Projects/path_finder_body/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
