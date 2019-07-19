#include "register_types.h"
#include "core/class_db.h"
#include "core/engine.h"
#ifdef IPHONE_ENABLED
#include "ios/godotplayfab.h"
#endif

void register_GodotPlayFab_types() {
#ifdef IPHONE_ENABLED
    Engine::get_singleton()->add_singleton(Engine::Singleton("PlayFab", memnew(GodotPlayFab)));
#endif

}

void unregister_GodotPlayFab_types() {}
