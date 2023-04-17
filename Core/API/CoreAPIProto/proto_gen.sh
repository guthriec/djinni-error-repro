rm -r cpp/* objc/* js/*; \
mkdir cpp; \
mkdir js; \
protoc \
    --proto_path=src \
    --cpp_out=cpp \
    --js_out=js \
    src/*
