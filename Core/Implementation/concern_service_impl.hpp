#include "cpp/concern_service.hpp"

class ConcernServiceImpl : public ConcernService {
public:
    ConcernServiceImpl();
    ::core::api::proto::RenderableConcern get_concern(int64_t concern_id);
};
