#include "concern_service_impl.hpp"

ConcernServiceImpl::ConcernServiceImpl() {
}

::core::api::proto::RenderableConcern ConcernServiceImpl::get_concern(int64_t concern_id) {
    return ::core::api::proto::RenderableConcern();
}


std::shared_ptr<ConcernService> ConcernService::create() {
    return std::make_shared<ConcernServiceImpl>();
}
