// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Phone.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Phone_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Phone_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Phone_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Phone_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Phone_2eproto;
namespace tutorial {
class Notes;
struct NotesDefaultTypeInternal;
extern NotesDefaultTypeInternal _Notes_default_instance_;
class PhoneNumber;
struct PhoneNumberDefaultTypeInternal;
extern PhoneNumberDefaultTypeInternal _PhoneNumber_default_instance_;
class User;
struct UserDefaultTypeInternal;
extern UserDefaultTypeInternal _User_default_instance_;
class UserTextList;
struct UserTextListDefaultTypeInternal;
extern UserTextListDefaultTypeInternal _UserTextList_default_instance_;
}  // namespace tutorial
PROTOBUF_NAMESPACE_OPEN
template<> ::tutorial::Notes* Arena::CreateMaybeMessage<::tutorial::Notes>(Arena*);
template<> ::tutorial::PhoneNumber* Arena::CreateMaybeMessage<::tutorial::PhoneNumber>(Arena*);
template<> ::tutorial::User* Arena::CreateMaybeMessage<::tutorial::User>(Arena*);
template<> ::tutorial::UserTextList* Arena::CreateMaybeMessage<::tutorial::UserTextList>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tutorial {

// ===================================================================

class User final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tutorial.User) */ {
 public:
  inline User() : User(nullptr) {}
  ~User() override;
  explicit constexpr User(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  User(const User& from);
  User(User&& from) noexcept
    : User() {
    *this = ::std::move(from);
  }

  inline User& operator=(const User& from) {
    CopyFrom(from);
    return *this;
  }
  inline User& operator=(User&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const User& default_instance() {
    return *internal_default_instance();
  }
  static inline const User* internal_default_instance() {
    return reinterpret_cast<const User*>(
               &_User_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(User& a, User& b) {
    a.Swap(&b);
  }
  inline void Swap(User* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(User* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline User* New() const final {
    return new User();
  }

  User* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<User>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const User& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const User& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(User* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tutorial.User";
  }
  protected:
  explicit User(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUsernotesFieldNumber = 3,
    kNameFieldNumber = 1,
    kPhoneFieldNumber = 2,
  };
  // repeated .tutorial.Notes usernotes = 3;
  int usernotes_size() const;
  private:
  int _internal_usernotes_size() const;
  public:
  void clear_usernotes();
  ::tutorial::Notes* mutable_usernotes(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tutorial::Notes >*
      mutable_usernotes();
  private:
  const ::tutorial::Notes& _internal_usernotes(int index) const;
  ::tutorial::Notes* _internal_add_usernotes();
  public:
  const ::tutorial::Notes& usernotes(int index) const;
  ::tutorial::Notes* add_usernotes();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tutorial::Notes >&
      usernotes() const;

  // optional string name = 1;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_MUST_USE_RESULT std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // optional .tutorial.PhoneNumber phone = 2;
  bool has_phone() const;
  private:
  bool _internal_has_phone() const;
  public:
  void clear_phone();
  const ::tutorial::PhoneNumber& phone() const;
  PROTOBUF_MUST_USE_RESULT ::tutorial::PhoneNumber* release_phone();
  ::tutorial::PhoneNumber* mutable_phone();
  void set_allocated_phone(::tutorial::PhoneNumber* phone);
  private:
  const ::tutorial::PhoneNumber& _internal_phone() const;
  ::tutorial::PhoneNumber* _internal_mutable_phone();
  public:
  void unsafe_arena_set_allocated_phone(
      ::tutorial::PhoneNumber* phone);
  ::tutorial::PhoneNumber* unsafe_arena_release_phone();

  // @@protoc_insertion_point(class_scope:tutorial.User)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tutorial::Notes > usernotes_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::tutorial::PhoneNumber* phone_;
  friend struct ::TableStruct_Phone_2eproto;
};
// -------------------------------------------------------------------

class Notes final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tutorial.Notes) */ {
 public:
  inline Notes() : Notes(nullptr) {}
  ~Notes() override;
  explicit constexpr Notes(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Notes(const Notes& from);
  Notes(Notes&& from) noexcept
    : Notes() {
    *this = ::std::move(from);
  }

  inline Notes& operator=(const Notes& from) {
    CopyFrom(from);
    return *this;
  }
  inline Notes& operator=(Notes&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Notes& default_instance() {
    return *internal_default_instance();
  }
  static inline const Notes* internal_default_instance() {
    return reinterpret_cast<const Notes*>(
               &_Notes_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Notes& a, Notes& b) {
    a.Swap(&b);
  }
  inline void Swap(Notes* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Notes* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Notes* New() const final {
    return new Notes();
  }

  Notes* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Notes>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Notes& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Notes& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Notes* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tutorial.Notes";
  }
  protected:
  explicit Notes(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTextFieldNumber = 1,
  };
  // optional string text = 1;
  bool has_text() const;
  private:
  bool _internal_has_text() const;
  public:
  void clear_text();
  const std::string& text() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_text(ArgT0&& arg0, ArgT... args);
  std::string* mutable_text();
  PROTOBUF_MUST_USE_RESULT std::string* release_text();
  void set_allocated_text(std::string* text);
  private:
  const std::string& _internal_text() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_text(const std::string& value);
  std::string* _internal_mutable_text();
  public:

  // @@protoc_insertion_point(class_scope:tutorial.Notes)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr text_;
  friend struct ::TableStruct_Phone_2eproto;
};
// -------------------------------------------------------------------

class PhoneNumber final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tutorial.PhoneNumber) */ {
 public:
  inline PhoneNumber() : PhoneNumber(nullptr) {}
  ~PhoneNumber() override;
  explicit constexpr PhoneNumber(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PhoneNumber(const PhoneNumber& from);
  PhoneNumber(PhoneNumber&& from) noexcept
    : PhoneNumber() {
    *this = ::std::move(from);
  }

  inline PhoneNumber& operator=(const PhoneNumber& from) {
    CopyFrom(from);
    return *this;
  }
  inline PhoneNumber& operator=(PhoneNumber&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const PhoneNumber& default_instance() {
    return *internal_default_instance();
  }
  static inline const PhoneNumber* internal_default_instance() {
    return reinterpret_cast<const PhoneNumber*>(
               &_PhoneNumber_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(PhoneNumber& a, PhoneNumber& b) {
    a.Swap(&b);
  }
  inline void Swap(PhoneNumber* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PhoneNumber* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PhoneNumber* New() const final {
    return new PhoneNumber();
  }

  PhoneNumber* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PhoneNumber>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PhoneNumber& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const PhoneNumber& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PhoneNumber* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tutorial.PhoneNumber";
  }
  protected:
  explicit PhoneNumber(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNumberFieldNumber = 1,
    kTypeFieldNumber = 2,
  };
  // optional string number = 1;
  bool has_number() const;
  private:
  bool _internal_has_number() const;
  public:
  void clear_number();
  const std::string& number() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_number(ArgT0&& arg0, ArgT... args);
  std::string* mutable_number();
  PROTOBUF_MUST_USE_RESULT std::string* release_number();
  void set_allocated_number(std::string* number);
  private:
  const std::string& _internal_number() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_number(const std::string& value);
  std::string* _internal_mutable_number();
  public:

  // optional int32 type = 2;
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::PROTOBUF_NAMESPACE_ID::int32 type() const;
  void set_type(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_type() const;
  void _internal_set_type(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:tutorial.PhoneNumber)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr number_;
  ::PROTOBUF_NAMESPACE_ID::int32 type_;
  friend struct ::TableStruct_Phone_2eproto;
};
// -------------------------------------------------------------------

class UserTextList final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tutorial.UserTextList) */ {
 public:
  inline UserTextList() : UserTextList(nullptr) {}
  ~UserTextList() override;
  explicit constexpr UserTextList(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  UserTextList(const UserTextList& from);
  UserTextList(UserTextList&& from) noexcept
    : UserTextList() {
    *this = ::std::move(from);
  }

  inline UserTextList& operator=(const UserTextList& from) {
    CopyFrom(from);
    return *this;
  }
  inline UserTextList& operator=(UserTextList&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const UserTextList& default_instance() {
    return *internal_default_instance();
  }
  static inline const UserTextList* internal_default_instance() {
    return reinterpret_cast<const UserTextList*>(
               &_UserTextList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(UserTextList& a, UserTextList& b) {
    a.Swap(&b);
  }
  inline void Swap(UserTextList* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(UserTextList* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline UserTextList* New() const final {
    return new UserTextList();
  }

  UserTextList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<UserTextList>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const UserTextList& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const UserTextList& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(UserTextList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tutorial.UserTextList";
  }
  protected:
  explicit UserTextList(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUsersFieldNumber = 1,
  };
  // repeated .tutorial.User users = 1;
  int users_size() const;
  private:
  int _internal_users_size() const;
  public:
  void clear_users();
  ::tutorial::User* mutable_users(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tutorial::User >*
      mutable_users();
  private:
  const ::tutorial::User& _internal_users(int index) const;
  ::tutorial::User* _internal_add_users();
  public:
  const ::tutorial::User& users(int index) const;
  ::tutorial::User* add_users();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tutorial::User >&
      users() const;

  // @@protoc_insertion_point(class_scope:tutorial.UserTextList)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tutorial::User > users_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Phone_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// User

// optional string name = 1;
inline bool User::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool User::has_name() const {
  return _internal_has_name();
}
inline void User::clear_name() {
  name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& User::name() const {
  // @@protoc_insertion_point(field_get:tutorial.User.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void User::set_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:tutorial.User.name)
}
inline std::string* User::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:tutorial.User.name)
  return _s;
}
inline const std::string& User::_internal_name() const {
  return name_.Get();
}
inline void User::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* User::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* User::release_name() {
  // @@protoc_insertion_point(field_release:tutorial.User.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void User::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:tutorial.User.name)
}

// optional .tutorial.PhoneNumber phone = 2;
inline bool User::_internal_has_phone() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || phone_ != nullptr);
  return value;
}
inline bool User::has_phone() const {
  return _internal_has_phone();
}
inline void User::clear_phone() {
  if (phone_ != nullptr) phone_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::tutorial::PhoneNumber& User::_internal_phone() const {
  const ::tutorial::PhoneNumber* p = phone_;
  return p != nullptr ? *p : reinterpret_cast<const ::tutorial::PhoneNumber&>(
      ::tutorial::_PhoneNumber_default_instance_);
}
inline const ::tutorial::PhoneNumber& User::phone() const {
  // @@protoc_insertion_point(field_get:tutorial.User.phone)
  return _internal_phone();
}
inline void User::unsafe_arena_set_allocated_phone(
    ::tutorial::PhoneNumber* phone) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(phone_);
  }
  phone_ = phone;
  if (phone) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tutorial.User.phone)
}
inline ::tutorial::PhoneNumber* User::release_phone() {
  _has_bits_[0] &= ~0x00000002u;
  ::tutorial::PhoneNumber* temp = phone_;
  phone_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::tutorial::PhoneNumber* User::unsafe_arena_release_phone() {
  // @@protoc_insertion_point(field_release:tutorial.User.phone)
  _has_bits_[0] &= ~0x00000002u;
  ::tutorial::PhoneNumber* temp = phone_;
  phone_ = nullptr;
  return temp;
}
inline ::tutorial::PhoneNumber* User::_internal_mutable_phone() {
  _has_bits_[0] |= 0x00000002u;
  if (phone_ == nullptr) {
    auto* p = CreateMaybeMessage<::tutorial::PhoneNumber>(GetArenaForAllocation());
    phone_ = p;
  }
  return phone_;
}
inline ::tutorial::PhoneNumber* User::mutable_phone() {
  ::tutorial::PhoneNumber* _msg = _internal_mutable_phone();
  // @@protoc_insertion_point(field_mutable:tutorial.User.phone)
  return _msg;
}
inline void User::set_allocated_phone(::tutorial::PhoneNumber* phone) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete phone_;
  }
  if (phone) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<::tutorial::PhoneNumber>::GetOwningArena(phone);
    if (message_arena != submessage_arena) {
      phone = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, phone, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  phone_ = phone;
  // @@protoc_insertion_point(field_set_allocated:tutorial.User.phone)
}

// repeated .tutorial.Notes usernotes = 3;
inline int User::_internal_usernotes_size() const {
  return usernotes_.size();
}
inline int User::usernotes_size() const {
  return _internal_usernotes_size();
}
inline void User::clear_usernotes() {
  usernotes_.Clear();
}
inline ::tutorial::Notes* User::mutable_usernotes(int index) {
  // @@protoc_insertion_point(field_mutable:tutorial.User.usernotes)
  return usernotes_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tutorial::Notes >*
User::mutable_usernotes() {
  // @@protoc_insertion_point(field_mutable_list:tutorial.User.usernotes)
  return &usernotes_;
}
inline const ::tutorial::Notes& User::_internal_usernotes(int index) const {
  return usernotes_.Get(index);
}
inline const ::tutorial::Notes& User::usernotes(int index) const {
  // @@protoc_insertion_point(field_get:tutorial.User.usernotes)
  return _internal_usernotes(index);
}
inline ::tutorial::Notes* User::_internal_add_usernotes() {
  return usernotes_.Add();
}
inline ::tutorial::Notes* User::add_usernotes() {
  ::tutorial::Notes* _add = _internal_add_usernotes();
  // @@protoc_insertion_point(field_add:tutorial.User.usernotes)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tutorial::Notes >&
User::usernotes() const {
  // @@protoc_insertion_point(field_list:tutorial.User.usernotes)
  return usernotes_;
}

// -------------------------------------------------------------------

// Notes

// optional string text = 1;
inline bool Notes::_internal_has_text() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Notes::has_text() const {
  return _internal_has_text();
}
inline void Notes::clear_text() {
  text_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Notes::text() const {
  // @@protoc_insertion_point(field_get:tutorial.Notes.text)
  return _internal_text();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Notes::set_text(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 text_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:tutorial.Notes.text)
}
inline std::string* Notes::mutable_text() {
  std::string* _s = _internal_mutable_text();
  // @@protoc_insertion_point(field_mutable:tutorial.Notes.text)
  return _s;
}
inline const std::string& Notes::_internal_text() const {
  return text_.Get();
}
inline void Notes::_internal_set_text(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  text_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Notes::_internal_mutable_text() {
  _has_bits_[0] |= 0x00000001u;
  return text_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Notes::release_text() {
  // @@protoc_insertion_point(field_release:tutorial.Notes.text)
  if (!_internal_has_text()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return text_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Notes::set_allocated_text(std::string* text) {
  if (text != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  text_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), text,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:tutorial.Notes.text)
}

// -------------------------------------------------------------------

// PhoneNumber

// optional string number = 1;
inline bool PhoneNumber::_internal_has_number() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool PhoneNumber::has_number() const {
  return _internal_has_number();
}
inline void PhoneNumber::clear_number() {
  number_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& PhoneNumber::number() const {
  // @@protoc_insertion_point(field_get:tutorial.PhoneNumber.number)
  return _internal_number();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PhoneNumber::set_number(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 number_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:tutorial.PhoneNumber.number)
}
inline std::string* PhoneNumber::mutable_number() {
  std::string* _s = _internal_mutable_number();
  // @@protoc_insertion_point(field_mutable:tutorial.PhoneNumber.number)
  return _s;
}
inline const std::string& PhoneNumber::_internal_number() const {
  return number_.Get();
}
inline void PhoneNumber::_internal_set_number(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  number_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PhoneNumber::_internal_mutable_number() {
  _has_bits_[0] |= 0x00000001u;
  return number_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PhoneNumber::release_number() {
  // @@protoc_insertion_point(field_release:tutorial.PhoneNumber.number)
  if (!_internal_has_number()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return number_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void PhoneNumber::set_allocated_number(std::string* number) {
  if (number != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  number_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), number,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:tutorial.PhoneNumber.number)
}

// optional int32 type = 2;
inline bool PhoneNumber::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool PhoneNumber::has_type() const {
  return _internal_has_type();
}
inline void PhoneNumber::clear_type() {
  type_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PhoneNumber::_internal_type() const {
  return type_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PhoneNumber::type() const {
  // @@protoc_insertion_point(field_get:tutorial.PhoneNumber.type)
  return _internal_type();
}
inline void PhoneNumber::_internal_set_type(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  type_ = value;
}
inline void PhoneNumber::set_type(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:tutorial.PhoneNumber.type)
}

// -------------------------------------------------------------------

// UserTextList

// repeated .tutorial.User users = 1;
inline int UserTextList::_internal_users_size() const {
  return users_.size();
}
inline int UserTextList::users_size() const {
  return _internal_users_size();
}
inline void UserTextList::clear_users() {
  users_.Clear();
}
inline ::tutorial::User* UserTextList::mutable_users(int index) {
  // @@protoc_insertion_point(field_mutable:tutorial.UserTextList.users)
  return users_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tutorial::User >*
UserTextList::mutable_users() {
  // @@protoc_insertion_point(field_mutable_list:tutorial.UserTextList.users)
  return &users_;
}
inline const ::tutorial::User& UserTextList::_internal_users(int index) const {
  return users_.Get(index);
}
inline const ::tutorial::User& UserTextList::users(int index) const {
  // @@protoc_insertion_point(field_get:tutorial.UserTextList.users)
  return _internal_users(index);
}
inline ::tutorial::User* UserTextList::_internal_add_users() {
  return users_.Add();
}
inline ::tutorial::User* UserTextList::add_users() {
  ::tutorial::User* _add = _internal_add_users();
  // @@protoc_insertion_point(field_add:tutorial.UserTextList.users)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::tutorial::User >&
UserTextList::users() const {
  // @@protoc_insertion_point(field_list:tutorial.UserTextList.users)
  return users_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tutorial

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Phone_2eproto
