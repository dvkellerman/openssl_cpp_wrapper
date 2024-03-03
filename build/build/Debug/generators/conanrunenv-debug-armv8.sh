script_folder="/home/dvkeller/Desktop/openssl_cpp/build/build/Debug/generators"
echo "echo Restoring environment" > "$script_folder/../../../build/Debug/generators/deactivate_conanrunenv-debug-armv8.sh"
for v in OPENSSL_MODULES
do
    is_defined="true"
    value=$(printenv $v) || is_defined="" || true
    if [ -n "$value" ] || [ -n "$is_defined" ]
    then
        echo export "$v='$value'" >> "$script_folder/../../../build/Debug/generators/deactivate_conanrunenv-debug-armv8.sh"
    else
        echo unset $v >> "$script_folder/../../../build/Debug/generators/deactivate_conanrunenv-debug-armv8.sh"
    fi
done


export OPENSSL_MODULES="/home/dvkeller/.conan2/p/b/opens8d80e00d82d50/p/lib/ossl-modules"