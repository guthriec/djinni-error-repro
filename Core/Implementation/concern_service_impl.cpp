#include "concern_service_impl.hpp"
#include "concern_store.hpp"

ConcernServiceImpl::ConcernServiceImpl() {
}

::core::api::proto::RenderableConcern ConcernServiceImpl::get_concern(int64_t concern_id) {
    std::shared_ptr<ConcernStore> store = ConcernStore::shared();
    return store->renderable_concerns_[concern_id];
}


std::shared_ptr<ConcernService> ConcernService::create() {
    return std::make_shared<ConcernServiceImpl>();
}
