load("@emsdk//emscripten_toolchain:wasm_rules.bzl", "wasm_cc_binary")

cc_library(
  name = "core",
  srcs = glob([
    "API/CoreAPIProto/cpp/*.pb.cc",
    "Implementation/*.cpp",
  ]),
  hdrs = glob([
    "API/CoreAPIProto/cpp/*.pb.h",
    "API/cpp/*.hpp",
    "Implementation/*.hpp",
  ]),
  includes = [
    "API",
    "Implementation/cpp",
  ],
  deps = [
    "@com_google_protobuf//:protobuf_lite",
    "@djinni//support-lib:djinni-support-common",
  ],
  alwayslink = 1,
)

EMSCRIPTEN_LINKOPTS = [
    "--bind",  # Compiles the source code using the Embind bindings to connect C/C++ and JavaScript
    "-s MALLOC=emmalloc",  # Switch to using the much smaller implementation
    "-s MODULARIZE=1",  # Allows us to manually invoke the initialization of wasm
    "-s WASM_BIGINT=1", # We need to pass int64_t
]

cc_binary(
    name = "core-wasm",
    srcs = glob([
        "API/wasm/*.cpp",
        "API/wasm/*.hpp",
    ]),
    copts = [
        "-fexceptions",
        "-Wno-error",
        "-Wno-unused-function",
    ],
    linkopts = EMSCRIPTEN_LINKOPTS,
    deps = [
        ":core",
        "@djinni//support-lib:djinni-support-wasm",
    ],
)

wasm_cc_binary(
    name = "wasm",
    cc_target = ":core-wasm",
)
