#include "liblzma.inc"

module_type = 'lib-static'
module_name = 'lzma_static'

definitions = ['HAVE_CONFIG_H', 'NDEBUG']

if BUILDSYS_TOOLSET_NAME == 'msvs':
    disabled_warnings = ['4028'] # formal parameter different from declaration
