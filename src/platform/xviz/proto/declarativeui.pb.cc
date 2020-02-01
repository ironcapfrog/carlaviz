// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: declarativeui.proto

#include "proto/declarativeui.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_declarativeui_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_UIPanel_declarativeui_2eproto;
namespace xviz {
class UIPanelDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<UIPanel> _instance;
} _UIPanel_default_instance_;
}  // namespace xviz
static void InitDefaultsscc_info_UIPanel_declarativeui_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::xviz::_UIPanel_default_instance_;
    new (ptr) ::xviz::UIPanel();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::xviz::UIPanel::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_UIPanel_declarativeui_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_UIPanel_declarativeui_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_declarativeui_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_declarativeui_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_declarativeui_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_declarativeui_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::xviz::UIPanel, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::xviz::UIPanel, name_),
  PROTOBUF_FIELD_OFFSET(::xviz::UIPanel, type_),
  PROTOBUF_FIELD_OFFSET(::xviz::UIPanel, layout_),
  PROTOBUF_FIELD_OFFSET(::xviz::UIPanel, title_),
  PROTOBUF_FIELD_OFFSET(::xviz::UIPanel, description_),
  PROTOBUF_FIELD_OFFSET(::xviz::UIPanel, children_),
  PROTOBUF_FIELD_OFFSET(::xviz::UIPanel, cameras_),
  PROTOBUF_FIELD_OFFSET(::xviz::UIPanel, streams_),
  PROTOBUF_FIELD_OFFSET(::xviz::UIPanel, independent_variable_),
  PROTOBUF_FIELD_OFFSET(::xviz::UIPanel, dependent_variables_),
  PROTOBUF_FIELD_OFFSET(::xviz::UIPanel, stream_),
  PROTOBUF_FIELD_OFFSET(::xviz::UIPanel, display_object_id_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::xviz::UIPanel)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::xviz::_UIPanel_default_instance_),
};

const char descriptor_table_protodef_declarativeui_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023declarativeui.proto\022\004xviz\032\roptions.pro"
  "to\"\305\002\n\007UIPanel\022\014\n\004name\030\001 \001(\t\022!\n\004type\030\002 \001"
  "(\0162\023.xviz.ComponentType\022 \n\006layout\030\003 \001(\0162"
  "\020.xviz.LayoutType\022\r\n\005title\030\004 \001(\t\022\023\n\013desc"
  "ription\030\005 \001(\t\022\037\n\010children\030\006 \003(\0132\r.xviz.U"
  "IPanel\022\017\n\007cameras\030\007 \003(\t\022\017\n\007streams\030\010 \003(\t"
  "\022\034\n\024independent_variable\030\t \001(\t\022\033\n\023depend"
  "ent_variables\030\n \003(\t\022\016\n\006stream\030\013 \001(\t\022\031\n\021d"
  "isplay_object_id\030\014 \001(\010:\032\302\273\032\026declarativeu"
  "i/ui_panel**\n\nLayoutType\022\014\n\010VERTICAL\020\000\022\016"
  "\n\nHORIZONTAL\020\001*e\n\rComponentType\022\t\n\005TABLE"
  "\020\000\022\n\n\006METRIC\020\001\022\010\n\004PLOT\020\002\022\r\n\tTREETABLE\020\003\022"
  "\t\n\005VIDEO\020\004\022\n\n\006SELECT\020\005\022\r\n\tCONTAINER\020\006B:\n"
  "\013com.xviz.v2B\022DeclarativeUIProtoP\001Z\004v2pb"
  "\242\002\004XVIZ\252\002\007xviz.V2b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_declarativeui_2eproto_deps[1] = {
  &::descriptor_table_options_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_declarativeui_2eproto_sccs[1] = {
  &scc_info_UIPanel_declarativeui_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_declarativeui_2eproto_once;
static bool descriptor_table_declarativeui_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_declarativeui_2eproto = {
  &descriptor_table_declarativeui_2eproto_initialized, descriptor_table_protodef_declarativeui_2eproto, "declarativeui.proto", 585,
  &descriptor_table_declarativeui_2eproto_once, descriptor_table_declarativeui_2eproto_sccs, descriptor_table_declarativeui_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_declarativeui_2eproto::offsets,
  file_level_metadata_declarativeui_2eproto, 1, file_level_enum_descriptors_declarativeui_2eproto, file_level_service_descriptors_declarativeui_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_declarativeui_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_declarativeui_2eproto), true);
namespace xviz {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LayoutType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_declarativeui_2eproto);
  return file_level_enum_descriptors_declarativeui_2eproto[0];
}
bool LayoutType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ComponentType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_declarativeui_2eproto);
  return file_level_enum_descriptors_declarativeui_2eproto[1];
}
bool ComponentType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void UIPanel::InitAsDefaultInstance() {
}
class UIPanel::_Internal {
 public:
};

UIPanel::UIPanel()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:xviz.UIPanel)
}
UIPanel::UIPanel(const UIPanel& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      children_(from.children_),
      cameras_(from.cameras_),
      streams_(from.streams_),
      dependent_variables_(from.dependent_variables_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  title_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_title().empty()) {
    title_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.title_);
  }
  description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_description().empty()) {
    description_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  independent_variable_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_independent_variable().empty()) {
    independent_variable_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.independent_variable_);
  }
  stream_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_stream().empty()) {
    stream_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.stream_);
  }
  ::memcpy(&type_, &from.type_,
    static_cast<size_t>(reinterpret_cast<char*>(&display_object_id_) -
    reinterpret_cast<char*>(&type_)) + sizeof(display_object_id_));
  // @@protoc_insertion_point(copy_constructor:xviz.UIPanel)
}

void UIPanel::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_UIPanel_declarativeui_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  title_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  independent_variable_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  stream_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&display_object_id_) -
      reinterpret_cast<char*>(&type_)) + sizeof(display_object_id_));
}

UIPanel::~UIPanel() {
  // @@protoc_insertion_point(destructor:xviz.UIPanel)
  SharedDtor();
}

void UIPanel::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  title_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  description_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  independent_variable_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  stream_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void UIPanel::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const UIPanel& UIPanel::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_UIPanel_declarativeui_2eproto.base);
  return *internal_default_instance();
}


void UIPanel::Clear() {
// @@protoc_insertion_point(message_clear_start:xviz.UIPanel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  children_.Clear();
  cameras_.Clear();
  streams_.Clear();
  dependent_variables_.Clear();
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  title_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  description_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  independent_variable_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  stream_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&display_object_id_) -
      reinterpret_cast<char*>(&type_)) + sizeof(display_object_id_));
  _internal_metadata_.Clear();
}

const char* UIPanel::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xviz.UIPanel.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .xviz.ComponentType type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::xviz::ComponentType>(val));
        } else goto handle_unusual;
        continue;
      // .xviz.LayoutType layout = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_layout(static_cast<::xviz::LayoutType>(val));
        } else goto handle_unusual;
        continue;
      // string title = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_title();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xviz.UIPanel.title"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string description = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_description();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xviz.UIPanel.description"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .xviz.UIPanel children = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_children(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<50>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated string cameras = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_cameras();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xviz.UIPanel.cameras"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<58>(ptr));
        } else goto handle_unusual;
        continue;
      // repeated string streams = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_streams();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xviz.UIPanel.streams"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<66>(ptr));
        } else goto handle_unusual;
        continue;
      // string independent_variable = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          auto str = _internal_mutable_independent_variable();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xviz.UIPanel.independent_variable"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string dependent_variables = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_dependent_variables();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xviz.UIPanel.dependent_variables"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<82>(ptr));
        } else goto handle_unusual;
        continue;
      // string stream = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 90)) {
          auto str = _internal_mutable_stream();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "xviz.UIPanel.stream"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool display_object_id = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 96)) {
          display_object_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* UIPanel::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:xviz.UIPanel)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xviz.UIPanel.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // .xviz.ComponentType type = 2;
  if (this->type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_type(), target);
  }

  // .xviz.LayoutType layout = 3;
  if (this->layout() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->_internal_layout(), target);
  }

  // string title = 4;
  if (this->title().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_title().data(), static_cast<int>(this->_internal_title().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xviz.UIPanel.title");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_title(), target);
  }

  // string description = 5;
  if (this->description().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_description().data(), static_cast<int>(this->_internal_description().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xviz.UIPanel.description");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_description(), target);
  }

  // repeated .xviz.UIPanel children = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_children_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(6, this->_internal_children(i), target, stream);
  }

  // repeated string cameras = 7;
  for (int i = 0, n = this->_internal_cameras_size(); i < n; i++) {
    const auto& s = this->_internal_cameras(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xviz.UIPanel.cameras");
    target = stream->WriteString(7, s, target);
  }

  // repeated string streams = 8;
  for (int i = 0, n = this->_internal_streams_size(); i < n; i++) {
    const auto& s = this->_internal_streams(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xviz.UIPanel.streams");
    target = stream->WriteString(8, s, target);
  }

  // string independent_variable = 9;
  if (this->independent_variable().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_independent_variable().data(), static_cast<int>(this->_internal_independent_variable().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xviz.UIPanel.independent_variable");
    target = stream->WriteStringMaybeAliased(
        9, this->_internal_independent_variable(), target);
  }

  // repeated string dependent_variables = 10;
  for (int i = 0, n = this->_internal_dependent_variables_size(); i < n; i++) {
    const auto& s = this->_internal_dependent_variables(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xviz.UIPanel.dependent_variables");
    target = stream->WriteString(10, s, target);
  }

  // string stream = 11;
  if (this->stream().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_stream().data(), static_cast<int>(this->_internal_stream().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "xviz.UIPanel.stream");
    target = stream->WriteStringMaybeAliased(
        11, this->_internal_stream(), target);
  }

  // bool display_object_id = 12;
  if (this->display_object_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(12, this->_internal_display_object_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:xviz.UIPanel)
  return target;
}

size_t UIPanel::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:xviz.UIPanel)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .xviz.UIPanel children = 6;
  total_size += 1UL * this->_internal_children_size();
  for (const auto& msg : this->children_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated string cameras = 7;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(cameras_.size());
  for (int i = 0, n = cameras_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      cameras_.Get(i));
  }

  // repeated string streams = 8;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(streams_.size());
  for (int i = 0, n = streams_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      streams_.Get(i));
  }

  // repeated string dependent_variables = 10;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(dependent_variables_.size());
  for (int i = 0, n = dependent_variables_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      dependent_variables_.Get(i));
  }

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string title = 4;
  if (this->title().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_title());
  }

  // string description = 5;
  if (this->description().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_description());
  }

  // string independent_variable = 9;
  if (this->independent_variable().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_independent_variable());
  }

  // string stream = 11;
  if (this->stream().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_stream());
  }

  // .xviz.ComponentType type = 2;
  if (this->type() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
  }

  // .xviz.LayoutType layout = 3;
  if (this->layout() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_layout());
  }

  // bool display_object_id = 12;
  if (this->display_object_id() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void UIPanel::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:xviz.UIPanel)
  GOOGLE_DCHECK_NE(&from, this);
  const UIPanel* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<UIPanel>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:xviz.UIPanel)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:xviz.UIPanel)
    MergeFrom(*source);
  }
}

void UIPanel::MergeFrom(const UIPanel& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:xviz.UIPanel)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  children_.MergeFrom(from.children_);
  cameras_.MergeFrom(from.cameras_);
  streams_.MergeFrom(from.streams_);
  dependent_variables_.MergeFrom(from.dependent_variables_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.title().size() > 0) {

    title_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.title_);
  }
  if (from.description().size() > 0) {

    description_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.description_);
  }
  if (from.independent_variable().size() > 0) {

    independent_variable_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.independent_variable_);
  }
  if (from.stream().size() > 0) {

    stream_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.stream_);
  }
  if (from.type() != 0) {
    _internal_set_type(from._internal_type());
  }
  if (from.layout() != 0) {
    _internal_set_layout(from._internal_layout());
  }
  if (from.display_object_id() != 0) {
    _internal_set_display_object_id(from._internal_display_object_id());
  }
}

void UIPanel::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:xviz.UIPanel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UIPanel::CopyFrom(const UIPanel& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:xviz.UIPanel)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UIPanel::IsInitialized() const {
  return true;
}

void UIPanel::InternalSwap(UIPanel* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  children_.InternalSwap(&other->children_);
  cameras_.InternalSwap(&other->cameras_);
  streams_.InternalSwap(&other->streams_);
  dependent_variables_.InternalSwap(&other->dependent_variables_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  title_.Swap(&other->title_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  description_.Swap(&other->description_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  independent_variable_.Swap(&other->independent_variable_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  stream_.Swap(&other->stream_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(type_, other->type_);
  swap(layout_, other->layout_);
  swap(display_object_id_, other->display_object_id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata UIPanel::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace xviz
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::xviz::UIPanel* Arena::CreateMaybeMessage< ::xviz::UIPanel >(Arena* arena) {
  return Arena::CreateInternal< ::xviz::UIPanel >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
