
def can_build(env, platform):
    return plat=="android" or plat=="iphone"

def configure(env):
    if (env['platform'] == 'android'):
        env.android_add_dependency("implementation 'com.playfab:client-sdk:0.81.181204'")
        env.android_add_default_config("multiDexEnabled true")
        env.android_add_dependency("implementation 'com.android.support:multidex:1.0.3'")
        env.android_add_java_dir("android/src/")
    if env['platform'] == "iphone":
        #env.Append(FRAMEWORKPATH=['modules/GodotPlayFab/ios/lib'])
        #env.Append(LINKFLAGS=['-ObjC', '-framework', 'FBSDKCoreKit', '-framework', 'FBSDKLoginKit', '-framework', 'FBSDKShareKit', '-framework', 'Bolts'])
        pass
