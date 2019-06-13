
def can_build(env, platform):
    return True

def configure(env):
    if (env['platform'] == 'android'):
        env.android_add_dependency("implementation 'com.playfab:client-sdk:0.81.181204'")
        env.android_add_default_config("multiDexEnabled true")
        env.android_add_dependency("implementation 'com.android.support:multidex:1.0.3'")

        env.android_add_java_dir("src/")
    pass
