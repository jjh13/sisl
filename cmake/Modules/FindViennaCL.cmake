# - Find ViennaCL
# Find the native ViennaCL includes and library
#
#  ViennaCL_INCLUDES    - where to find the path of viennacl
#  ViennaCL_FOUND       - True if ViennaCL found.
# From: 
#  https://github.com/jedbrown/cmake-modules

if (ViennaCL_INCLUDES)
  # Already in cache, be silent
  set (ViennaCL_FIND_QUIETLY TRUE)
endif (ViennaCL_INCLUDES)

find_path (ViennaCL_INCLUDES viennacl)

# handle the QUIETLY and REQUIRED arguments and set ViennaCL_FOUND to TRUE if
# all listed variables are TRUE
include (FindPackageHandleStandardArgs)
find_package_handle_standard_args (ViennaCL DEFAULT_MSG ViennaCL_INCLUDES)

mark_as_advanced (ViennaCL_INCLUDES)
