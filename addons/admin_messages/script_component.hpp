#define COMPONENT admin_messages
#define COMPONENT_BEAUTIFIED Admin Messages
#include "script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_ADMIN_MESSAGES
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_ADMIN_MESSAGES
    #define DEBUG_SETTINGS DEBUG_SETTINGS_ADMIN_MESSAGES
#endif

#include "script_macros.hpp"
