// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from local_interface.djinni

#pragma once

#include "CoreAPIProto/cpp/concern.pb.h"
#include <cstdint>
#include <memory>

class ConcernService {
public:
    virtual ~ConcernService() = default;

    static /*not-null*/ std::shared_ptr<ConcernService> create();

    virtual ::core::api::proto::RenderableConcern get_concern(int64_t concern_id) = 0;
};
