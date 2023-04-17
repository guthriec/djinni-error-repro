// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sources.proto

#include "sources.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/io/zero_copy_stream_impl_lite.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
namespace core {
namespace api {
namespace proto {
PROTOBUF_CONSTEXPR ListSourceRequest::ListSourceRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._cached_size_)*/{}} {}
struct ListSourceRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ListSourceRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ListSourceRequestDefaultTypeInternal() {}
  union {
    ListSourceRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ListSourceRequestDefaultTypeInternal _ListSourceRequest_default_instance_;
PROTOBUF_CONSTEXPR ListSourceResponse::ListSourceResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.source_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ListSourceResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ListSourceResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ListSourceResponseDefaultTypeInternal() {}
  union {
    ListSourceResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ListSourceResponseDefaultTypeInternal _ListSourceResponse_default_instance_;
PROTOBUF_CONSTEXPR RenderableSource::RenderableSource(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.source_name_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.source_icon_url_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }
} {}
struct RenderableSourceDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RenderableSourceDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~RenderableSourceDefaultTypeInternal() {}
  union {
    RenderableSource _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RenderableSourceDefaultTypeInternal _RenderableSource_default_instance_;
}  // namespace proto
}  // namespace api
}  // namespace core
namespace core {
namespace api {
namespace proto {
// ===================================================================

class ListSourceRequest::_Internal {
 public:
};

ListSourceRequest::ListSourceRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:core.api.proto.ListSourceRequest)
}
ListSourceRequest::ListSourceRequest(const ListSourceRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(), _impl_(from._impl_) {
  _internal_metadata_.MergeFrom<std::string>(
      from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:core.api.proto.ListSourceRequest)
}

inline void ListSourceRequest::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      /*decltype(_impl_._cached_size_)*/{}
  };
}

ListSourceRequest::~ListSourceRequest() {
  // @@protoc_insertion_point(destructor:core.api.proto.ListSourceRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ListSourceRequest::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
}

void ListSourceRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ListSourceRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:core.api.proto.ListSourceRequest)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<std::string>();
}

const char* ListSourceRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* ListSourceRequest::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:core.api.proto.ListSourceRequest)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:core.api.proto.ListSourceRequest)
  return target;
}

::size_t ListSourceRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:core.api.proto.ListSourceRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ListSourceRequest::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const ListSourceRequest*>(
      &from));
}

void ListSourceRequest::MergeFrom(const ListSourceRequest& from) {
  ListSourceRequest* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:core.api.proto.ListSourceRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void ListSourceRequest::CopyFrom(const ListSourceRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:core.api.proto.ListSourceRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ListSourceRequest::IsInitialized() const {
  return true;
}

void ListSourceRequest::InternalSwap(ListSourceRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
}

std::string ListSourceRequest::GetTypeName() const {
  return "core.api.proto.ListSourceRequest";
}

// ===================================================================

class ListSourceResponse::_Internal {
 public:
};

ListSourceResponse::ListSourceResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:core.api.proto.ListSourceResponse)
}
ListSourceResponse::ListSourceResponse(const ListSourceResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  ListSourceResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.source_){from._impl_.source_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:core.api.proto.ListSourceResponse)
}

inline void ListSourceResponse::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.source_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ListSourceResponse::~ListSourceResponse() {
  // @@protoc_insertion_point(destructor:core.api.proto.ListSourceResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ListSourceResponse::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.source_.~RepeatedPtrField();
}

void ListSourceResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ListSourceResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:core.api.proto.ListSourceResponse)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.source_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* ListSourceResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .core.api.proto.RenderableSource source = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_source(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* ListSourceResponse::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:core.api.proto.ListSourceResponse)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .core.api.proto.RenderableSource source = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_source_size()); i < n; i++) {
    const auto& repfield = this->_internal_source(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:core.api.proto.ListSourceResponse)
  return target;
}

::size_t ListSourceResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:core.api.proto.ListSourceResponse)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .core.api.proto.RenderableSource source = 1;
  total_size += 1UL * this->_internal_source_size();
  for (const auto& msg : this->_impl_.source_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ListSourceResponse::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const ListSourceResponse*>(
      &from));
}

void ListSourceResponse::MergeFrom(const ListSourceResponse& from) {
  ListSourceResponse* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:core.api.proto.ListSourceResponse)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.source_.MergeFrom(from._impl_.source_);
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void ListSourceResponse::CopyFrom(const ListSourceResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:core.api.proto.ListSourceResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ListSourceResponse::IsInitialized() const {
  return true;
}

void ListSourceResponse::InternalSwap(ListSourceResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.source_.InternalSwap(&other->_impl_.source_);
}

std::string ListSourceResponse::GetTypeName() const {
  return "core.api.proto.ListSourceResponse";
}

// ===================================================================

class RenderableSource::_Internal {
 public:
  using HasBits = decltype(std::declval<RenderableSource>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(RenderableSource, _impl_._has_bits_);
  static void set_has_source_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_source_icon_url(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

RenderableSource::RenderableSource(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:core.api.proto.RenderableSource)
}
RenderableSource::RenderableSource(const RenderableSource& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  RenderableSource* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.source_name_) {}

    , decltype(_impl_.source_icon_url_) {}
  };

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  _impl_.source_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.source_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.source_name_.Set(from._internal_source_name(), _this->GetArenaForAllocation());
  }
  _impl_.source_icon_url_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.source_icon_url_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000002u) != 0) {
    _this->_impl_.source_icon_url_.Set(from._internal_source_icon_url(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:core.api.proto.RenderableSource)
}

inline void RenderableSource::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.source_name_) {}

    , decltype(_impl_.source_icon_url_) {}

  };
  _impl_.source_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.source_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.source_icon_url_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.source_icon_url_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

RenderableSource::~RenderableSource() {
  // @@protoc_insertion_point(destructor:core.api.proto.RenderableSource)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void RenderableSource::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.source_name_.Destroy();
  _impl_.source_icon_url_.Destroy();
}

void RenderableSource::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void RenderableSource::Clear() {
// @@protoc_insertion_point(message_clear_start:core.api.proto.RenderableSource)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.source_name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.source_icon_url_.ClearNonDefaultToEmpty();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* RenderableSource::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string source_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_source_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // optional string source_icon_url = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_source_icon_url();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* RenderableSource::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:core.api.proto.RenderableSource)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string source_name = 1;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_source_name();
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // optional string source_icon_url = 2;
  if (cached_has_bits & 0x00000002u) {
    const std::string& _s = this->_internal_source_icon_url();
    target = stream->WriteStringMaybeAliased(2, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:core.api.proto.RenderableSource)
  return target;
}

::size_t RenderableSource::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:core.api.proto.RenderableSource)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string source_name = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_source_name());
    }

    // optional string source_icon_url = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                      this->_internal_source_icon_url());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RenderableSource::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const RenderableSource*>(
      &from));
}

void RenderableSource::MergeFrom(const RenderableSource& from) {
  RenderableSource* const _this = this;
  // @@protoc_insertion_point(class_specific_merge_from_start:core.api.proto.RenderableSource)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_source_name(from._internal_source_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_source_icon_url(from._internal_source_icon_url());
    }
  }
  _this->_internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void RenderableSource::CopyFrom(const RenderableSource& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:core.api.proto.RenderableSource)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RenderableSource::IsInitialized() const {
  return true;
}

void RenderableSource::InternalSwap(RenderableSource* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.source_name_, lhs_arena,
                                       &other->_impl_.source_name_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.source_icon_url_, lhs_arena,
                                       &other->_impl_.source_icon_url_, rhs_arena);
}

std::string RenderableSource::GetTypeName() const {
  return "core.api.proto.RenderableSource";
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace api
}  // namespace core
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::core::api::proto::ListSourceRequest*
Arena::CreateMaybeMessage< ::core::api::proto::ListSourceRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::core::api::proto::ListSourceRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::core::api::proto::ListSourceResponse*
Arena::CreateMaybeMessage< ::core::api::proto::ListSourceResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::core::api::proto::ListSourceResponse >(arena);
}
template<> PROTOBUF_NOINLINE ::core::api::proto::RenderableSource*
Arena::CreateMaybeMessage< ::core::api::proto::RenderableSource >(Arena* arena) {
  return Arena::CreateMessageInternal< ::core::api::proto::RenderableSource >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"