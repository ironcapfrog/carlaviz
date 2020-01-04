// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: annotation.proto

#include "proto/annotation.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_style_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_StyleObjectValue_style_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_annotation_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_VisualBase_annotation_2eproto;
namespace xviz {
class VisualBaseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<VisualBase> _instance;
} _VisualBase_default_instance_;
class VisualDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Visual> _instance;
} _Visual_default_instance_;
}  // namespace xviz
static void InitDefaultsscc_info_Visual_annotation_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::xviz::_Visual_default_instance_;
    new (ptr) ::xviz::Visual();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::xviz::Visual::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Visual_annotation_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_Visual_annotation_2eproto}, {
      &scc_info_VisualBase_annotation_2eproto.base,
      &scc_info_StyleObjectValue_style_2eproto.base,}};

static void InitDefaultsscc_info_VisualBase_annotation_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::xviz::_VisualBase_default_instance_;
    new (ptr) ::xviz::VisualBase();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::xviz::VisualBase::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_VisualBase_annotation_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_VisualBase_annotation_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_annotation_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_annotation_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_annotation_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_annotation_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::xviz::VisualBase, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::xviz::VisualBase, object_id_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::xviz::Visual, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::xviz::Visual, base_),
  PROTOBUF_FIELD_OFFSET(::xviz::Visual, style_classes_),
  PROTOBUF_FIELD_OFFSET(::xviz::Visual, inline_style_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::xviz::VisualBase)},
  { 6, -1, sizeof(::xviz::Visual)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::xviz::_VisualBase_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::xviz::_Visual_default_instance_),
};

const char descriptor_table_protodef_annotation_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\020annotation.proto\022\004xviz\032\roptions.proto\032"
  "\013style.proto\"9\n\nVisualBase\022\021\n\tobject_id\030"
  "\001 \001(\t:\030\302\273\032\024core/annotation_base\"\211\001\n\006Visu"
  "al\022\036\n\004base\030\001 \001(\0132\020.xviz.VisualBase\022\025\n\rst"
  "yle_classes\030\002 \003(\t\022,\n\014inline_style\030\003 \001(\0132"
  "\026.xviz.StyleObjectValue:\032\302\273\032\026core/annota"
  "tion_visualB7\n\013com.xviz.v2B\017AnnotationPr"
  "otoP\001Z\004v2pb\242\002\004XVIZ\252\002\007xviz.V2b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_annotation_2eproto_deps[2] = {
  &::descriptor_table_options_2eproto,
  &::descriptor_table_style_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_annotation_2eproto_sccs[2] = {
  &scc_info_Visual_annotation_2eproto.base,
  &scc_info_VisualBase_annotation_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_annotation_2eproto_once;
static bool descriptor_table_annotation_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_annotation_2eproto = {
  &descriptor_table_annotation_2eproto_initialized, descriptor_table_protodef_annotation_2eproto, "annotation.proto", 316,
  &descriptor_table_annotation_2eproto_once, descriptor_table_annotation_2eproto_sccs, descriptor_table_annotation_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_annotation_2eproto::offsets,
  file_level_metadata_annotation_2eproto, 2, file_level_enum_descriptors_annotation_2eproto, file_level_service_descriptors_annotation_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_annotation_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_annotation_2eproto), true);
namespace xviz {

// ===================================================================

void VisualBase::InitAsDefaultInstance() {
}
class VisualBase::_Internal {
 public:
};

VisualBase::VisualBase()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:xviz.VisualBase)
}
VisualBase::VisualBase(const VisualBase& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  object_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_object_id().empty()) {
    object_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.object_id_);
  }
  // @@protoc_insertion_point(copy_constructor:xviz.VisualBase)
}

void VisualBase::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_VisualBase_annotation_2eproto.base);
  object_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

VisualBase::~VisualBase() {
  // @@protoc_insertion_point(destructor:xviz.VisualBase)
  SharedDtor();
}

void VisualBase::SharedDtor() {
  object_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void VisualBase::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const VisualBase& VisualBase::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_VisualBase_annotation_2eproto.base);
  return *internal_default_instance();
}


void VisualBase::Clear() {
// @@protoc_insertion_point(message_clear_start:xviz.VisualBase)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  object_id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* VisualBase::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string object_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_object_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xviz.VisualBase.object_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* VisualBase::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xviz.VisualBase)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string object_id = 1;
  if (this->object_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_object_id().data(), static_cast<int>(this->_internal_object_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xviz.VisualBase.object_id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_object_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xviz.VisualBase)
  return target;
}

size_t VisualBase::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xviz.VisualBase)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string object_id = 1;
  if (this->object_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_object_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VisualBase::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:xviz.VisualBase)
  GOOGLE_DCHECK_NE(&from, this);
  const VisualBase* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<VisualBase>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:xviz.VisualBase)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:xviz.VisualBase)
    MergeFrom(*source);
  }
}

void VisualBase::MergeFrom(const VisualBase& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:xviz.VisualBase)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.object_id().size() > 0) {

    object_id_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.object_id_);
  }
}

void VisualBase::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:xviz.VisualBase)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VisualBase::CopyFrom(const VisualBase& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xviz.VisualBase)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VisualBase::IsInitialized() const {
  return true;
}

void VisualBase::InternalSwap(VisualBase* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  object_id_.Swap(&other->object_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata VisualBase::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Visual::InitAsDefaultInstance() {
  ::xviz::_Visual_default_instance_._instance.get_mutable()->base_ = const_cast< ::xviz::VisualBase*>(
      ::xviz::VisualBase::internal_default_instance());
  ::xviz::_Visual_default_instance_._instance.get_mutable()->inline_style_ = const_cast< ::xviz::StyleObjectValue*>(
      ::xviz::StyleObjectValue::internal_default_instance());
}
class Visual::_Internal {
 public:
  static const ::xviz::VisualBase& base(const Visual* msg);
  static const ::xviz::StyleObjectValue& inline_style(const Visual* msg);
};

const ::xviz::VisualBase&
Visual::_Internal::base(const Visual* msg) {
  return *msg->base_;
}
const ::xviz::StyleObjectValue&
Visual::_Internal::inline_style(const Visual* msg) {
  return *msg->inline_style_;
}
void Visual::clear_inline_style() {
  if (GetArenaNoVirtual() == nullptr && inline_style_ != nullptr) {
    delete inline_style_;
  }
  inline_style_ = nullptr;
}
Visual::Visual()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:xviz.Visual)
}
Visual::Visual(const Visual& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      style_classes_(from.style_classes_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_base()) {
    base_ = new ::xviz::VisualBase(*from.base_);
  } else {
    base_ = nullptr;
  }
  if (from._internal_has_inline_style()) {
    inline_style_ = new ::xviz::StyleObjectValue(*from.inline_style_);
  } else {
    inline_style_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:xviz.Visual)
}

void Visual::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Visual_annotation_2eproto.base);
  ::memset(&base_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&inline_style_) -
      reinterpret_cast<char*>(&base_)) + sizeof(inline_style_));
}

Visual::~Visual() {
  // @@protoc_insertion_point(destructor:xviz.Visual)
  SharedDtor();
}

void Visual::SharedDtor() {
  if (this != internal_default_instance()) delete base_;
  if (this != internal_default_instance()) delete inline_style_;
}

void Visual::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Visual& Visual::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Visual_annotation_2eproto.base);
  return *internal_default_instance();
}


void Visual::Clear() {
// @@protoc_insertion_point(message_clear_start:xviz.Visual)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  style_classes_.Clear();
  if (GetArenaNoVirtual() == nullptr && base_ != nullptr) {
    delete base_;
  }
  base_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && inline_style_ != nullptr) {
    delete inline_style_;
  }
  inline_style_ = nullptr;
  _internal_metadata_.Clear();
}

const char* Visual::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .xviz.VisualBase base = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_base(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string style_classes = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_style_classes();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xviz.Visual.style_classes"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // .xviz.StyleObjectValue inline_style = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_inline_style(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Visual::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xviz.Visual)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .xviz.VisualBase base = 1;
  if (this->has_base()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::base(this), target, stream);
  }

  // repeated string style_classes = 2;
  for (int i = 0, n = this->_internal_style_classes_size(); i < n; i++) {
    const auto& s = this->_internal_style_classes(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xviz.Visual.style_classes");
    target = stream->WriteString(2, s, target);
  }

  // .xviz.StyleObjectValue inline_style = 3;
  if (this->has_inline_style()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::inline_style(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xviz.Visual)
  return target;
}

size_t Visual::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xviz.Visual)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string style_classes = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(style_classes_.size());
  for (int i = 0, n = style_classes_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      style_classes_.Get(i));
  }

  // .xviz.VisualBase base = 1;
  if (this->has_base()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *base_);
  }

  // .xviz.StyleObjectValue inline_style = 3;
  if (this->has_inline_style()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *inline_style_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Visual::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:xviz.Visual)
  GOOGLE_DCHECK_NE(&from, this);
  const Visual* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Visual>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:xviz.Visual)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:xviz.Visual)
    MergeFrom(*source);
  }
}

void Visual::MergeFrom(const Visual& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:xviz.Visual)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  style_classes_.MergeFrom(from.style_classes_);
  if (from.has_base()) {
    _internal_mutable_base()->::xviz::VisualBase::MergeFrom(from._internal_base());
  }
  if (from.has_inline_style()) {
    _internal_mutable_inline_style()->::xviz::StyleObjectValue::MergeFrom(from._internal_inline_style());
  }
}

void Visual::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:xviz.Visual)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Visual::CopyFrom(const Visual& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xviz.Visual)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Visual::IsInitialized() const {
  return true;
}

void Visual::InternalSwap(Visual* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  style_classes_.InternalSwap(&other->style_classes_);
  swap(base_, other->base_);
  swap(inline_style_, other->inline_style_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Visual::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace xviz
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::xviz::VisualBase* Arena::CreateMaybeMessage< ::xviz::VisualBase >(Arena* arena) {
  return Arena::CreateInternal< ::xviz::VisualBase >(arena);
}
template<> PROTOBUF_NOINLINE ::xviz::Visual* Arena::CreateMaybeMessage< ::xviz::Visual >(Arena* arena) {
  return Arena::CreateInternal< ::xviz::Visual >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
