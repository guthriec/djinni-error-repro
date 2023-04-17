workspace(name="spring_extension")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

local_repository(
  name = "djinni",
  path = "../djinni",
)

#load("@djinni//bzl:deps.bzl", "djinni_deps")
#djinni_deps()
#load("@djinni//bzl:scala_config.bzl", "djinni_scala_config")
#djinni_scala_config()
#load("@djinni//bzl:setup_deps.bzl", "djinni_setup_deps")
#djinni_setup_deps()

emsdk_version = "3.1.8"

http_archive(
    name = "emsdk",
    strip_prefix = "emsdk-%s/bazel" % emsdk_version,
    type = "zip",
    url = "https://github.com/emscripten-core/emsdk/archive/%s.zip" % emsdk_version,
    sha256 = "7795202a50ab09958d8943f79110de4386ff0f38bf4c97ec1a896885f28fe1cf",
)

load("@emsdk//:deps.bzl", emsdk_deps = "deps")
emsdk_deps()

load("@emsdk//:emscripten_deps.bzl", emsdk_emscripten_deps = "emscripten_deps")
emsdk_emscripten_deps()

local_repository(
  name = "com_google_protobuf",
  path = "third_party/protobuf",
)

load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")
protobuf_deps()
