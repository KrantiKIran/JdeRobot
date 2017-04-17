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
// Generated from file `jcm.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

package jderobot;

public class RequiredInterface implements java.lang.Cloneable, java.io.Serializable
{
    public FQInterfaceName name;

    public String id;

    public RequiredInterface()
    {
    }

    public RequiredInterface(FQInterfaceName name, String id)
    {
        this.name = name;
        this.id = id;
    }

    public boolean
    equals(java.lang.Object rhs)
    {
        if(this == rhs)
        {
            return true;
        }
        RequiredInterface _r = null;
        if(rhs instanceof RequiredInterface)
        {
            _r = (RequiredInterface)rhs;
        }

        if(_r != null)
        {
            if(name != _r.name)
            {
                if(name == null || _r.name == null || !name.equals(_r.name))
                {
                    return false;
                }
            }
            if(id != _r.id)
            {
                if(id == null || _r.id == null || !id.equals(_r.id))
                {
                    return false;
                }
            }

            return true;
        }

        return false;
    }

    public int
    hashCode()
    {
        int __h = 5381;
        __h = IceInternal.HashUtil.hashAdd(__h, "::jderobot::RequiredInterface");
        __h = IceInternal.HashUtil.hashAdd(__h, name);
        __h = IceInternal.HashUtil.hashAdd(__h, id);
        return __h;
    }

    public java.lang.Object
    clone()
    {
        java.lang.Object o = null;
        try
        {
            o = super.clone();
        }
        catch(CloneNotSupportedException ex)
        {
            assert false; // impossible
        }
        return o;
    }

    public void
    __write(IceInternal.BasicStream __os)
    {
        name.__write(__os);
        __os.writeString(id);
    }

    public void
    __read(IceInternal.BasicStream __is)
    {
        name = new FQInterfaceName();
        name.__read(__is);
        id = __is.readString();
    }

    public static final long serialVersionUID = -5657412267053841982L;
}