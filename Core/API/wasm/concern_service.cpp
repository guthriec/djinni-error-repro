// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from local_interface.djinni

#include "concern_service.hpp"  // my header

namespace djinni_generated {

em::val ConcernService::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
        "getConcern",
    });
    return methods;
}

em::val ConcernService::create() {
    try {
        auto r = ::ConcernService::create();
        return ::djinni_generated::ConcernService::fromCpp(r);
    }
    catch(const std::exception& e) {
        return ::djinni::ExceptionHandlingTraits<::djinni_generated::ConcernService>::handleNativeException(e);
    }
}
em::val ConcernService::get_concern(const CppType& self, int64_t w_concern_id) {
    try {
        auto r = self->get_concern(::djinni::I64::toCpp(w_concern_id));
        return ::djinni::Protobuf::fromCpp(r);
    }
    catch(const std::exception& e) {
        return ::djinni::ExceptionHandlingTraits<::djinni::Protobuf>::handleNativeException(e);
    }
}

EMSCRIPTEN_BINDINGS(_concern_service) {
    em::class_<::ConcernService>("ConcernService")
        .smart_ptr<std::shared_ptr<::ConcernService>>("ConcernService")
        .function("nativeDestroy", &ConcernService::nativeDestroy)
        .class_function("create", ConcernService::create)
        .function("getConcern", ConcernService::get_concern)
        ;
}

} // namespace djinni_generated
