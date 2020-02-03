
def can_build(env, platform):
    return platform == "android" or platform == "iphone"

def configure(env):
    if (env['platform'] == 'android'):
        return
        env.android_add_dependency("implementation 'com.playfab:client-sdk:0.81.181204'")
        env.android_add_default_config("multiDexEnabled true")
        env.android_add_dependency("implementation 'com.android.support:multidex:1.0.3'")
        env.android_add_java_dir("android/src/")
    if env['platform'] == "iphone":
        env.Append(FRAMEWORKPATH=['ios/lib'])
        env.Append(LINKFLAGS=['-ObjC', '-framework', 'PlayFabSDK'])
