// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `exceptions.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __jderobot__root_JdeRobot_build_src_interfaces_cpp_jderobot_exceptions_h__
#define __jderobot__root_JdeRobot_build_src_interfaces_cpp_jderobot_exceptions_h__

#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/FactoryTableInit.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/StreamF.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace jderobot
{

class JderobotException : public ::Ice::UserException
{
public:

    JderobotException() {}
    explicit JderobotException(const ::std::string&);
    virtual ~JderobotException() throw();

    virtual ::std::string ice_name() const;
    virtual JderobotException* ice_clone() const;
    virtual void ice_throw() const;

    ::std::string what;

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Ice::UserException::__writeImpl;
    using ::Ice::UserException::__readImpl;
    #endif
};

static JderobotException __JderobotException_init;

class ConfigurationNotExistException : public ::jderobot::JderobotException
{
public:

    ConfigurationNotExistException() {}
    explicit ConfigurationNotExistException(const ::std::string&);
    virtual ~ConfigurationNotExistException() throw();

    virtual ::std::string ice_name() const;
    virtual ConfigurationNotExistException* ice_clone() const;
    virtual void ice_throw() const;

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::jderobot::JderobotException::__writeImpl;
    using ::jderobot::JderobotException::__readImpl;
    #endif
};

class DataNotExistException : public ::jderobot::JderobotException
{
public:

    DataNotExistException() {}
    explicit DataNotExistException(const ::std::string&);
    virtual ~DataNotExistException() throw();

    virtual ::std::string ice_name() const;
    virtual DataNotExistException* ice_clone() const;
    virtual void ice_throw() const;

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::jderobot::JderobotException::__writeImpl;
    using ::jderobot::JderobotException::__readImpl;
    #endif
};

class HardwareFailedException : public ::jderobot::JderobotException
{
public:

    HardwareFailedException() {}
    explicit HardwareFailedException(const ::std::string&);
    virtual ~HardwareFailedException() throw();

    virtual ::std::string ice_name() const;
    virtual HardwareFailedException* ice_clone() const;
    virtual void ice_throw() const;

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::jderobot::JderobotException::__writeImpl;
    using ::jderobot::JderobotException::__readImpl;
    #endif
};

class NoTopicException : public ::jderobot::JderobotException
{
public:

    NoTopicException() {}
    explicit NoTopicException(const ::std::string&);
    virtual ~NoTopicException() throw();

    virtual ::std::string ice_name() const;
    virtual NoTopicException* ice_clone() const;
    virtual void ice_throw() const;

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::jderobot::JderobotException::__writeImpl;
    using ::jderobot::JderobotException::__readImpl;
    #endif
};

class SubscriptionFailedException : public ::jderobot::JderobotException
{
public:

    SubscriptionFailedException() {}
    explicit SubscriptionFailedException(const ::std::string&);
    virtual ~SubscriptionFailedException() throw();

    virtual ::std::string ice_name() const;
    virtual SubscriptionFailedException* ice_clone() const;
    virtual void ice_throw() const;

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::jderobot::JderobotException::__writeImpl;
    using ::jderobot::JderobotException::__readImpl;
    #endif
};

class SubscriptionPushFailedException : public ::jderobot::JderobotException
{
public:

    SubscriptionPushFailedException() {}
    explicit SubscriptionPushFailedException(const ::std::string&);
    virtual ~SubscriptionPushFailedException() throw();

    virtual ::std::string ice_name() const;
    virtual SubscriptionPushFailedException* ice_clone() const;
    virtual void ice_throw() const;

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::jderobot::JderobotException::__writeImpl;
    using ::jderobot::JderobotException::__readImpl;
    #endif
};

}

namespace Ice
{
template<>
struct StreamableTraits< ::jderobot::JderobotException>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

template<>
struct StreamableTraits< ::jderobot::ConfigurationNotExistException>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

template<>
struct StreamableTraits< ::jderobot::DataNotExistException>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

template<>
struct StreamableTraits< ::jderobot::HardwareFailedException>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

template<>
struct StreamableTraits< ::jderobot::NoTopicException>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

template<>
struct StreamableTraits< ::jderobot::SubscriptionFailedException>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

template<>
struct StreamableTraits< ::jderobot::SubscriptionPushFailedException>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

}

#endif