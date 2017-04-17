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
// Generated from file `laser.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <jderobot/laser.h>
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

const ::std::string __jderobot__Laser__getLaserData_name = "getLaserData";

}
::IceProxy::Ice::Object* ::IceProxy::jderobot::upCast(::IceProxy::jderobot::LaserData* p) { return p; }

void
::IceProxy::jderobot::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::jderobot::LaserData>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::jderobot::LaserData;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::jderobot::LaserData::ice_staticId()
{
    return ::jderobot::LaserData::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::jderobot::LaserData::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::jderobot::LaserData);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::jderobot::LaserData::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::jderobot::LaserData);
}

::IceProxy::Ice::Object*
IceProxy::jderobot::LaserData::__newInstance() const
{
    return new LaserData;
}
::IceProxy::Ice::Object* ::IceProxy::jderobot::upCast(::IceProxy::jderobot::Laser* p) { return p; }

void
::IceProxy::jderobot::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::jderobot::Laser>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::jderobot::Laser;
        v->__copyFrom(proxy);
    }
}

::jderobot::LaserDataPtr
IceProxy::jderobot::Laser::getLaserData(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __jderobot__Laser__getLaserData_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__jderobot__Laser__getLaserData_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::jderobot::Laser* __del = dynamic_cast< ::IceDelegate::jderobot::Laser*>(__delBase.get());
            return __del->getLaserData(__ctx, __observer);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__delBase, __ex, true, __cnt, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::jderobot::Laser::begin_getLaserData(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__jderobot__Laser__getLaserData_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __jderobot__Laser__getLaserData_name, __del, __cookie);
    try
    {
        __result->__prepare(__jderobot__Laser__getLaserData_name, ::Ice::Idempotent, __ctx);
        __result->__writeEmptyParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::jderobot::LaserDataPtr
IceProxy::jderobot::Laser::end_getLaserData(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __jderobot__Laser__getLaserData_name);
    ::jderobot::LaserDataPtr __ret;
    bool __ok = __result->__wait();
    try
    {
        if(!__ok)
        {
            try
            {
                __result->__throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::IceInternal::BasicStream* __is = __result->__startReadParams();
        __is->read(__ret);
        __is->readPendingObjects();
        __result->__endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& ex)
    {
        __result->__getObserver().failed(ex.ice_name());
        throw;
    }
}

const ::std::string&
IceProxy::jderobot::Laser::ice_staticId()
{
    return ::jderobot::Laser::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::jderobot::Laser::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::jderobot::Laser);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::jderobot::Laser::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::jderobot::Laser);
}

::IceProxy::Ice::Object*
IceProxy::jderobot::Laser::__newInstance() const
{
    return new Laser;
}

::jderobot::LaserDataPtr
IceDelegateM::jderobot::Laser::getLaserData(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __jderobot__Laser__getLaserData_name, ::Ice::Idempotent, __context, __observer);
    __og.writeEmptyParams();
    bool __ok = __og.invoke();
    ::jderobot::LaserDataPtr __ret;
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
        ::IceInternal::BasicStream* __is = __og.startReadParams();
        __is->read(__ret);
        __is->readPendingObjects();
        __og.endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::jderobot::LaserDataPtr
IceDelegateD::jderobot::Laser::getLaserData(const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::jderobot::LaserDataPtr& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::jderobot::Laser* servant = dynamic_cast< ::jderobot::Laser*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getLaserData(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::jderobot::LaserDataPtr& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __jderobot__Laser__getLaserData_name, ::Ice::Idempotent, __context);
    ::jderobot::LaserDataPtr __result;
    try
    {
        _DirectI __direct(__result, __current);
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
    return __result;
}

::Ice::Object* jderobot::upCast(::jderobot::LaserData* p) { return p; }
::Ice::ObjectPtr
jderobot::LaserData::ice_clone() const
{
    ::Ice::Object* __p = new LaserData(*this);
    return __p;
}

namespace
{
const ::std::string __jderobot__LaserData_ids[2] =
{
    "::Ice::Object",
    "::jderobot::LaserData"
};

}

bool
jderobot::LaserData::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__jderobot__LaserData_ids, __jderobot__LaserData_ids + 2, _s);
}

::std::vector< ::std::string>
jderobot::LaserData::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__jderobot__LaserData_ids[0], &__jderobot__LaserData_ids[2]);
}

const ::std::string&
jderobot::LaserData::ice_id(const ::Ice::Current&) const
{
    return __jderobot__LaserData_ids[1];
}

const ::std::string&
jderobot::LaserData::ice_staticId()
{
    return __jderobot__LaserData_ids[1];
}

void
jderobot::LaserData::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->write(distanceData);
    __os->write(numLaser);
    __os->write(minAngle);
    __os->write(maxAngle);
    __os->write(minRange);
    __os->write(maxRange);
    __os->write(timeStamp);
    __os->endWriteSlice();
}

void
jderobot::LaserData::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(distanceData);
    __is->read(numLaser);
    __is->read(minAngle);
    __is->read(maxAngle);
    __is->read(minRange);
    __is->read(maxRange);
    __is->read(timeStamp);
    __is->endReadSlice();
}

namespace
{

class __F__jderobot__LaserData : public ::Ice::ObjectFactory
{
public:
#ifndef NDEBUG
virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
#else
virtual ::Ice::ObjectPtr
    create(const ::std::string&)
#endif
    {
        assert(type == ::jderobot::LaserData::ice_staticId());
        return new ::jderobot::LaserData;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__jderobot__LaserData_Ptr = new __F__jderobot__LaserData;

class __F__jderobot__LaserData__Init
{
public:

    __F__jderobot__LaserData__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::jderobot::LaserData::ice_staticId(), __F__jderobot__LaserData_Ptr);
    }

    ~__F__jderobot__LaserData__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::jderobot::LaserData::ice_staticId());
    }
};

const __F__jderobot__LaserData__Init __F__jderobot__LaserData__i;

}

const ::Ice::ObjectFactoryPtr&
jderobot::LaserData::ice_factory()
{
    return __F__jderobot__LaserData_Ptr;
}

void 
jderobot::__patch(LaserDataPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::jderobot::LaserDataPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::jderobot::LaserData::ice_staticId(), v);
    }
}

::Ice::Object* jderobot::upCast(::jderobot::Laser* p) { return p; }

namespace
{
const ::std::string __jderobot__Laser_ids[2] =
{
    "::Ice::Object",
    "::jderobot::Laser"
};

}

bool
jderobot::Laser::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__jderobot__Laser_ids, __jderobot__Laser_ids + 2, _s);
}

::std::vector< ::std::string>
jderobot::Laser::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__jderobot__Laser_ids[0], &__jderobot__Laser_ids[2]);
}

const ::std::string&
jderobot::Laser::ice_id(const ::Ice::Current&) const
{
    return __jderobot__Laser_ids[1];
}

const ::std::string&
jderobot::Laser::ice_staticId()
{
    return __jderobot__Laser_ids[1];
}

::Ice::DispatchStatus
jderobot::Laser::___getLaserData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    __inS.readEmptyParams();
    ::jderobot::LaserDataPtr __ret = getLaserData(__current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(__ret);
    __os->writePendingObjects();
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __jderobot__Laser_all[] =
{
    "getLaserData",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

}

::Ice::DispatchStatus
jderobot::Laser::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__jderobot__Laser_all, __jderobot__Laser_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __jderobot__Laser_all)
    {
        case 0:
        {
            return ___getLaserData(in, current);
        }
        case 1:
        {
            return ___ice_id(in, current);
        }
        case 2:
        {
            return ___ice_ids(in, current);
        }
        case 3:
        {
            return ___ice_isA(in, current);
        }
        case 4:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
jderobot::Laser::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
jderobot::Laser::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
jderobot::__patch(LaserPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::jderobot::LaserPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::jderobot::Laser::ice_staticId(), v);
    }
}