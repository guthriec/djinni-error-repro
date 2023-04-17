rm -r cpp/*; \
rm -r objc/*; \
rm -r objcpp/*; \
rm -r java/*; \
rm -r wasm/*; \
rm -r ts/*; \
../../../djinni/src/run \
    --wasm-out wasm \
    --wasm-include-cpp-prefix 'cpp/' \
    --ts-out ts \
    --ts-module core \
    --java-out java \
    --java-package my.package.core \
    --cpp-out cpp \
    --idl local_interface.djinni
