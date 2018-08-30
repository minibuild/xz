#include "../static/liblzma.inc"

module_type = 'lib-shared'

if BUILDSYS_TARGET_PLATFORM == 'windows':
    module_name = 'liblzma'
else:
    module_name = 'lzma'

export_def_file = 'liblzma.def'

definitions = ['HAVE_CONFIG_H', 'NDEBUG']
prebuilt_lib_list_linux = ['pthread', 'rt']

if BUILDSYS_TOOLSET_NAME == 'msvs':
    disabled_warnings = ['4028'] # formal parameter different from declaration
