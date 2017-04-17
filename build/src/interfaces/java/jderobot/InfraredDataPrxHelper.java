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
// Generated from file `wiimote.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

package jderobot;

public final class InfraredDataPrxHelper extends Ice.ObjectPrxHelperBase implements InfraredDataPrx
{
    public static InfraredDataPrx checkedCast(Ice.ObjectPrx __obj)
    {
        InfraredDataPrx __d = null;
        if(__obj != null)
        {
            if(__obj instanceof InfraredDataPrx)
            {
                __d = (InfraredDataPrx)__obj;
            }
            else
            {
                if(__obj.ice_isA(ice_staticId()))
                {
                    InfraredDataPrxHelper __h = new InfraredDataPrxHelper();
                    __h.__copyFrom(__obj);
                    __d = __h;
                }
            }
        }
        return __d;
    }

    public static InfraredDataPrx checkedCast(Ice.ObjectPrx __obj, java.util.Map<String, String> __ctx)
    {
        InfraredDataPrx __d = null;
        if(__obj != null)
        {
            if(__obj instanceof InfraredDataPrx)
            {
                __d = (InfraredDataPrx)__obj;
            }
            else
            {
                if(__obj.ice_isA(ice_staticId(), __ctx))
                {
                    InfraredDataPrxHelper __h = new InfraredDataPrxHelper();
                    __h.__copyFrom(__obj);
                    __d = __h;
                }
            }
        }
        return __d;
    }

    public static InfraredDataPrx checkedCast(Ice.ObjectPrx __obj, String __facet)
    {
        InfraredDataPrx __d = null;
        if(__obj != null)
        {
            Ice.ObjectPrx __bb = __obj.ice_facet(__facet);
            try
            {
                if(__bb.ice_isA(ice_staticId()))
                {
                    InfraredDataPrxHelper __h = new InfraredDataPrxHelper();
                    __h.__copyFrom(__bb);
                    __d = __h;
                }
            }
            catch(Ice.FacetNotExistException ex)
            {
            }
        }
        return __d;
    }

    public static InfraredDataPrx checkedCast(Ice.ObjectPrx __obj, String __facet, java.util.Map<String, String> __ctx)
    {
        InfraredDataPrx __d = null;
        if(__obj != null)
        {
            Ice.ObjectPrx __bb = __obj.ice_facet(__facet);
            try
            {
                if(__bb.ice_isA(ice_staticId(), __ctx))
                {
                    InfraredDataPrxHelper __h = new InfraredDataPrxHelper();
                    __h.__copyFrom(__bb);
                    __d = __h;
                }
            }
            catch(Ice.FacetNotExistException ex)
            {
            }
        }
        return __d;
    }

    public static InfraredDataPrx uncheckedCast(Ice.ObjectPrx __obj)
    {
        InfraredDataPrx __d = null;
        if(__obj != null)
        {
            if(__obj instanceof InfraredDataPrx)
            {
                __d = (InfraredDataPrx)__obj;
            }
            else
            {
                InfraredDataPrxHelper __h = new InfraredDataPrxHelper();
                __h.__copyFrom(__obj);
                __d = __h;
            }
        }
        return __d;
    }

    public static InfraredDataPrx uncheckedCast(Ice.ObjectPrx __obj, String __facet)
    {
        InfraredDataPrx __d = null;
        if(__obj != null)
        {
            Ice.ObjectPrx __bb = __obj.ice_facet(__facet);
            InfraredDataPrxHelper __h = new InfraredDataPrxHelper();
            __h.__copyFrom(__bb);
            __d = __h;
        }
        return __d;
    }

    public static final String[] __ids =
    {
        "::Ice::Object",
        "::jderobot::InfraredData"
    };

    public static String ice_staticId()
    {
        return __ids[1];
    }

    protected Ice._ObjectDelM __createDelegateM()
    {
        return new _InfraredDataDelM();
    }

    protected Ice._ObjectDelD __createDelegateD()
    {
        return new _InfraredDataDelD();
    }

    public static void __write(IceInternal.BasicStream __os, InfraredDataPrx v)
    {
        __os.writeProxy(v);
    }

    public static InfraredDataPrx __read(IceInternal.BasicStream __is)
    {
        Ice.ObjectPrx proxy = __is.readProxy();
        if(proxy != null)
        {
            InfraredDataPrxHelper result = new InfraredDataPrxHelper();
            result.__copyFrom(proxy);
            return result;
        }
        return null;
    }

    public static final long serialVersionUID = 0L;
}