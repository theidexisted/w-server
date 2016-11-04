/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>
#include <boost/operators.hpp>




namespace calculator {

class Work;
class InvalidOperation;

enum class Operation {
  ADD = 1,
  SUBTRACT = 2,
  MULTIPLY = 3,
  DIVIDE = 4
};

extern const std::map<Operation, const char*> _Operation_VALUES_TO_NAMES;
extern const std::map<const char*, Operation, apache::thrift::ltstr> _Operation_NAMES_TO_VALUES;

} // calculator
namespace apache { namespace thrift {

template <> const char* TEnumTraitsBase< ::calculator::Operation>::findName( ::calculator::Operation value);
template <> bool TEnumTraitsBase< ::calculator::Operation>::findValue(const char* name,  ::calculator::Operation* outValue);

template <> constexpr  ::calculator::Operation TEnumTraits< ::calculator::Operation>::min() {
  return  ::calculator::Operation::ADD;
}

template <> constexpr  ::calculator::Operation TEnumTraits< ::calculator::Operation>::max() {
  return  ::calculator::Operation::DIVIDE;
}

}} // apache::thrift
namespace calculator {

class Work : private boost::totally_ordered<Work> {
 public:

  Work() :
      num1(0),
      num2(0),
      op( ::calculator::Operation()) {}
  // FragileConstructor for use in initialization lists only

  Work(apache::thrift::FragileConstructor, int32_t num1__arg, int32_t num2__arg,  ::calculator::Operation op__arg, std::string comment__arg) :
      num1(std::move(num1__arg)),
      num2(std::move(num2__arg)),
      op(std::move(op__arg)),
      comment(std::move(comment__arg)) {}

  Work(Work&&) = default;

  Work(const Work&) = default;

  Work& operator=(Work&&) = default;

  Work& operator=(const Work&) = default;
  void __clear();

  virtual ~Work() throw() {}

  int32_t num1;
  int32_t num2;
   ::calculator::Operation op;
  std::string comment;

  struct __isset {
    __isset() {
      __clear();
    }

    void __clear() {
      num1 = false;
      num2 = false;
      op = false;
      comment = false;
    }

    bool num1;
    bool num2;
    bool op;
    bool comment;
  } __isset;
  bool operator==(const Work& rhs) const;
  bool operator < (const Work& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(Work& a, Work& b);

} // calculator
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::calculator::Work>::clear( ::calculator::Work* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::calculator::Work>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::calculator::Work>::write(Protocol* proto, const  ::calculator::Work* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::calculator::Work>::read(Protocol* proto,   ::calculator::Work* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::calculator::Work>::serializedSize(Protocol* proto, const  ::calculator::Work* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::calculator::Work>::serializedSizeZC(Protocol* proto, const  ::calculator::Work* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace calculator {

class InvalidOperation : private boost::totally_ordered<InvalidOperation>, public apache::thrift::TException {
 public:

  InvalidOperation() :
      op( ::calculator::Operation()) {}
  // FragileConstructor for use in initialization lists only

  InvalidOperation(apache::thrift::FragileConstructor,  ::calculator::Operation op__arg, std::string why__arg) :
      op(std::move(op__arg)),
      why(std::move(why__arg)) {}

  InvalidOperation(InvalidOperation&&) = default;

  InvalidOperation(const InvalidOperation&) = default;

  InvalidOperation& operator=(InvalidOperation&&) = default;

  InvalidOperation& operator=(const InvalidOperation&) = default;
  void __clear();

  virtual ~InvalidOperation() throw() {}

   ::calculator::Operation op;
  std::string why;

  struct __isset {
    __isset() {
      __clear();
    }

    void __clear() {
      op = false;
      why = false;
    }

    bool op;
    bool why;
  } __isset;
  bool operator==(const InvalidOperation& rhs) const;

  bool operator < (const InvalidOperation& rhs) const {
    if (!(op == rhs.op)) {
      return op < rhs.op;
    }
    if (!(why == rhs.why)) {
      return why < rhs.why;
    }
    return false;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  virtual const char* what() const throw() {
    return " ::calculator::InvalidOperation";
  }
};

void swap(InvalidOperation& a, InvalidOperation& b);

} // calculator
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::calculator::InvalidOperation>::clear( ::calculator::InvalidOperation* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::calculator::InvalidOperation>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::calculator::InvalidOperation>::write(Protocol* proto, const  ::calculator::InvalidOperation* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::calculator::InvalidOperation>::read(Protocol* proto,   ::calculator::InvalidOperation* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::calculator::InvalidOperation>::serializedSize(Protocol* proto, const  ::calculator::InvalidOperation* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::calculator::InvalidOperation>::serializedSizeZC(Protocol* proto, const  ::calculator::InvalidOperation* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace calculator {

} // calculator

#include "calculator_types.tcc"