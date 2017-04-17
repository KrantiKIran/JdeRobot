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
// Generated from file `naofollowball.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <jderobot/naofollowball.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <Ice/Object.h>
#include <IceUtil/Iterator.h>

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

namespace
{

const ::std::string __jderobot__NaoFollowBall__setParams_name = "setParams";

const ::std::string __jderobot__NaoFollowBall__setMinParams_name = "setMinParams";

const ::std::string __jderobot__NaoFollowBall__setMaxParams_name = "setMaxParams";

const ::std::string __jderobot__NaoFollowBall__start_name = "start";

const ::std::string __jderobot__NaoFollowBall__stop_name = "stop";

}
::IceProxy::Ice::Object* ::IceProxy::jderobot::upCast(::IceProxy::jderobot::NaoFollowBall* p) { return p; }

void
::IceProxy::jderobot::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::jderobot::NaoFollowBall>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::jderobot::NaoFollowBall;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::jderobot::NaoFollowBall::setParams(::Ice::Int rMin, ::Ice::Int rMax, ::Ice::Int gMin, ::Ice::Int gMax, ::Ice::Int bMin, ::Ice::Int bMax, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __jderobot__NaoFollowBall__setParams_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::jderobot::NaoFollowBall* __del = dynamic_cast< ::IceDelegate::jderobot::NaoFollowBall*>(__delBase.get());
            __del->setParams(rMin, rMax, gMin, gMax, bMin, bMax, __ctx, __observer);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::jderobot::NaoFollowBall::begin_setParams(::Ice::Int rMin, ::Ice::Int rMax, ::Ice::Int gMin, ::Ice::Int gMax, ::Ice::Int bMin, ::Ice::Int bMax, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __jderobot__NaoFollowBall__setParams_name, __del, __cookie);
    try
    {
        __result->__prepare(__jderobot__NaoFollowBall__setParams_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(rMin);
        __os->write(rMax);
        __os->write(gMin);
        __os->write(gMax);
        __os->write(bMin);
        __os->write(bMax);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

void
IceProxy::jderobot::NaoFollowBall::end_setParams(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __jderobot__NaoFollowBall__setParams_name);
}

void
IceProxy::jderobot::NaoFollowBall::setMinParams(::Ice::Int rMin, ::Ice::Int gMin, ::Ice::Int bMin, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __jderobot__NaoFollowBall__setMinParams_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::jderobot::NaoFollowBall* __del = dynamic_cast< ::IceDelegate::jderobot::NaoFollowBall*>(__delBase.get());
            __del->setMinParams(rMin, gMin, bMin, __ctx, __observer);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::jderobot::NaoFollowBall::begin_setMinParams(::Ice::Int rMin, ::Ice::Int gMin, ::Ice::Int bMin, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __jderobot__NaoFollowBall__setMinParams_name, __del, __cookie);
    try
    {
        __result->__prepare(__jderobot__NaoFollowBall__setMinParams_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(rMin);
        __os->write(gMin);
        __os->write(bMin);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

void
IceProxy::jderobot::NaoFollowBall::end_setMinParams(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __jderobot__NaoFollowBall__setMinParams_name);
}

void
IceProxy::jderobot::NaoFollowBall::setMaxParams(::Ice::Int rMax, ::Ice::Int gMax, ::Ice::Int bMax, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __jderobot__NaoFollowBall__setMaxParams_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::jderobot::NaoFollowBall* __del = dynamic_cast< ::IceDelegate::jderobot::NaoFollowBall*>(__delBase.get());
            __del->setMaxParams(rMax, gMax, bMax, __ctx, __observer);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::jderobot::NaoFollowBall::begin_setMaxParams(::Ice::Int rMax, ::Ice::Int gMax, ::Ice::Int bMax, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __jderobot__NaoFollowBall__setMaxParams_name, __del, __cookie);
    try
    {
        __result->__prepare(__jderobot__NaoFollowBall__setMaxParams_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(rMax);
        __os->write(gMax);
        __os->write(bMax);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

void
IceProxy::jderobot::NaoFollowBall::end_setMaxParams(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __jderobot__NaoFollowBall__setMaxParams_name);
}

void
IceProxy::jderobot::NaoFollowBall::start(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __jderobot__NaoFollowBall__start_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::jderobot::NaoFollowBall* __del = dynamic_cast< ::IceDelegate::jderobot::NaoFollowBall*>(__delBase.get());
            __del->start(__ctx, __observer);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::jderobot::NaoFollowBall::begin_start(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __jderobot__NaoFollowBall__start_name, __del, __cookie);
    try
    {
        __result->__prepare(__jderobot__NaoFollowBall__start_name, ::Ice::Normal, __ctx);
        __result->__writeEmptyParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

void
IceProxy::jderobot::NaoFollowBall::end_start(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __jderobot__NaoFollowBall__start_name);
}

void
IceProxy::jderobot::NaoFollowBall::stop(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __jderobot__NaoFollowBall__stop_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::jderobot::NaoFollowBall* __del = dynamic_cast< ::IceDelegate::jderobot::NaoFollowBall*>(__delBase.get());
            __del->stop(__ctx, __observer);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::jderobot::NaoFollowBall::begin_stop(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __jderobot__NaoFollowBall__stop_name, __del, __cookie);
    try
    {
        __result->__prepare(__jderobot__NaoFollowBall__stop_name, ::Ice::Normal, __ctx);
        __result->__writeEmptyParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

void
IceProxy::jderobot::NaoFollowBall::end_stop(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __jderobot__NaoFollowBall__stop_name);
}

const ::std::string&
IceProxy::jderobot::NaoFollowBall::ice_staticId()
{
    return ::jderobot::NaoFollowBall::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::jderobot::NaoFollowBall::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::jderobot::NaoFollowBall);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::jderobot::NaoFollowBall::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::jderobot::NaoFollowBall);
}

::IceProxy::Ice::Object*
IceProxy::jderobot::NaoFollowBall::__newInstance() const
{
    return new NaoFollowBall;
}

void
IceDelegateM::jderobot::NaoFollowBall::setParams(::Ice::Int rMin, ::Ice::Int rMax, ::Ice::Int gMin, ::Ice::Int gMax, ::Ice::Int bMin, ::Ice::Int bMax, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __jderobot__NaoFollowBall__setParams_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(rMin);
        __os->write(rMax);
        __os->write(gMin);
        __os->write(gMax);
        __os->write(bMin);
        __os->write(bMax);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(__og.hasResponse())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.readEmptyParams();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::jderobot::NaoFollowBall::setMinParams(::Ice::Int rMin, ::Ice::Int gMin, ::Ice::Int bMin, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __jderobot__NaoFollowBall__setMinParams_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(rMin);
        __os->write(gMin);
        __os->write(bMin);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(__og.hasResponse())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.readEmptyParams();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::jderobot::NaoFollowBall::setMaxParams(::Ice::Int rMax, ::Ice::Int gMax, ::Ice::Int bMax, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __jderobot__NaoFollowBall__setMaxParams_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(rMax);
        __os->write(gMax);
        __os->write(bMax);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(__og.hasResponse())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.readEmptyParams();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::jderobot::NaoFollowBall::start(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __jderobot__NaoFollowBall__start_name, ::Ice::Normal, __context, __observer);
    __og.writeEmptyParams();
    bool __ok = __og.invoke();
    if(__og.hasResponse())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.readEmptyParams();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::jderobot::NaoFollowBall::stop(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __jderobot__NaoFollowBall__stop_name, ::Ice::Normal, __context, __observer);
    __og.writeEmptyParams();
    bool __ok = __og.invoke();
    if(__og.hasResponse())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.readEmptyParams();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateD::jderobot::NaoFollowBall::setParams(::Ice::Int rMin, ::Ice::Int rMax, ::Ice::Int gMin, ::Ice::Int gMax, ::Ice::Int bMin, ::Ice::Int bMax, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int __p_rMin, ::Ice::Int __p_rMax, ::Ice::Int __p_gMin, ::Ice::Int __p_gMax, ::Ice::Int __p_bMin, ::Ice::Int __p_bMax, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_rMin(__p_rMin),
            _m_rMax(__p_rMax),
            _m_gMin(__p_gMin),
            _m_gMax(__p_gMax),
            _m_bMin(__p_bMin),
            _m_bMax(__p_bMax)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::jderobot::NaoFollowBall* servant = dynamic_cast< ::jderobot::NaoFollowBall*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->setParams(_m_rMin, _m_rMax, _m_gMin, _m_gMax, _m_bMin, _m_bMax, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_rMin;
        ::Ice::Int _m_rMax;
        ::Ice::Int _m_gMin;
        ::Ice::Int _m_gMax;
        ::Ice::Int _m_bMin;
        ::Ice::Int _m_bMax;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __jderobot__NaoFollowBall__setParams_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(rMin, rMax, gMin, gMax, bMin, bMax, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::jderobot::NaoFollowBall::setMinParams(::Ice::Int rMin, ::Ice::Int gMin, ::Ice::Int bMin, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int __p_rMin, ::Ice::Int __p_gMin, ::Ice::Int __p_bMin, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_rMin(__p_rMin),
            _m_gMin(__p_gMin),
            _m_bMin(__p_bMin)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::jderobot::NaoFollowBall* servant = dynamic_cast< ::jderobot::NaoFollowBall*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->setMinParams(_m_rMin, _m_gMin, _m_bMin, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_rMin;
        ::Ice::Int _m_gMin;
        ::Ice::Int _m_bMin;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __jderobot__NaoFollowBall__setMinParams_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(rMin, gMin, bMin, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::jderobot::NaoFollowBall::setMaxParams(::Ice::Int rMax, ::Ice::Int gMax, ::Ice::Int bMax, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int __p_rMax, ::Ice::Int __p_gMax, ::Ice::Int __p_bMax, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_rMax(__p_rMax),
            _m_gMax(__p_gMax),
            _m_bMax(__p_bMax)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::jderobot::NaoFollowBall* servant = dynamic_cast< ::jderobot::NaoFollowBall*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->setMaxParams(_m_rMax, _m_gMax, _m_bMax, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_rMax;
        ::Ice::Int _m_gMax;
        ::Ice::Int _m_bMax;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __jderobot__NaoFollowBall__setMaxParams_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(rMax, gMax, bMax, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::jderobot::NaoFollowBall::start(const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::jderobot::NaoFollowBall* servant = dynamic_cast< ::jderobot::NaoFollowBall*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->start(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __jderobot__NaoFollowBall__start_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(__current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::jderobot::NaoFollowBall::stop(const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::jderobot::NaoFollowBall* servant = dynamic_cast< ::jderobot::NaoFollowBall*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->stop(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __jderobot__NaoFollowBall__stop_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(__current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::Ice::Object* jderobot::upCast(::jderobot::NaoFollowBall* p) { return p; }

namespace
{
const ::std::string __jderobot__NaoFollowBall_ids[2] =
{
    "::Ice::Object",
    "::jderobot::NaoFollowBall"
};

}

bool
jderobot::NaoFollowBall::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__jderobot__NaoFollowBall_ids, __jderobot__NaoFollowBall_ids + 2, _s);
}

::std::vector< ::std::string>
jderobot::NaoFollowBall::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__jderobot__NaoFollowBall_ids[0], &__jderobot__NaoFollowBall_ids[2]);
}

const ::std::string&
jderobot::NaoFollowBall::ice_id(const ::Ice::Current&) const
{
    return __jderobot__NaoFollowBall_ids[1];
}

const ::std::string&
jderobot::NaoFollowBall::ice_staticId()
{
    return __jderobot__NaoFollowBall_ids[1];
}

::Ice::DispatchStatus
jderobot::NaoFollowBall::___setParams(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Ice::Int rMin;
    ::Ice::Int rMax;
    ::Ice::Int gMin;
    ::Ice::Int gMax;
    ::Ice::Int bMin;
    ::Ice::Int bMax;
    __is->read(rMin);
    __is->read(rMax);
    __is->read(gMin);
    __is->read(gMax);
    __is->read(bMin);
    __is->read(bMax);
    __inS.endReadParams();
    setParams(rMin, rMax, gMin, gMax, bMin, bMax, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
jderobot::NaoFollowBall::___setMinParams(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Ice::Int rMin;
    ::Ice::Int gMin;
    ::Ice::Int bMin;
    __is->read(rMin);
    __is->read(gMin);
    __is->read(bMin);
    __inS.endReadParams();
    setMinParams(rMin, gMin, bMin, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
jderobot::NaoFollowBall::___setMaxParams(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Ice::Int rMax;
    ::Ice::Int gMax;
    ::Ice::Int bMax;
    __is->read(rMax);
    __is->read(gMax);
    __is->read(bMax);
    __inS.endReadParams();
    setMaxParams(rMax, gMax, bMax, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
jderobot::NaoFollowBall::___start(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.readEmptyParams();
    start(__current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
jderobot::NaoFollowBall::___stop(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.readEmptyParams();
    stop(__current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __jderobot__NaoFollowBall_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "setMaxParams",
    "setMinParams",
    "setParams",
    "start",
    "stop"
};

}

::Ice::DispatchStatus
jderobot::NaoFollowBall::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__jderobot__NaoFollowBall_all, __jderobot__NaoFollowBall_all + 9, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __jderobot__NaoFollowBall_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___setMaxParams(in, current);
        }
        case 5:
        {
            return ___setMinParams(in, current);
        }
        case 6:
        {
            return ___setParams(in, current);
        }
        case 7:
        {
            return ___start(in, current);
        }
        case 8:
        {
            return ___stop(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
jderobot::NaoFollowBall::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
jderobot::NaoFollowBall::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
jderobot::__patch(NaoFollowBallPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::jderobot::NaoFollowBallPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::jderobot::NaoFollowBall::ice_staticId(), v);
    }
}