#if defined(_WIN32)
#  include "config_winapi.h"
#elif defined(__linux__)
#  if defined(__x86_64__)
#    include "config_linux_x86_64.h"
#  elif defined(__i386__)
#    include "config_linux_i686.h"
#  elif defined(__aarch64__)
#    include "config_linux_aarch64.h"
#  elif defined(__arm__)
#    include "config_linux_arm.h"
#  else
#    error "Unknown linux arch."
#  endif
#elif defined(__APPLE__)
#  include "config_macosx.h"
#else
#  error "Unknown platform."
#endif
