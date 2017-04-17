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

public class ComponentData implements java.lang.Cloneable, java.io.Serializable
{
    public FQComponentName name;

    public ProvidedInterface[] provides;

    public RequiredInterface[] requires;

    public ComponentData()
    {
    }

    public ComponentData(FQComponentName name, ProvidedInterface[] provides, RequiredInterface[] requires)
    {
        this.name = name;
        this.provides = provides;
        this.requires = requires;
    }

    public boolean
    equals(java.lang.Object rhs)
    {
        if(this == rhs)
        {
            return true;
        }
        ComponentData _r = null;
        if(rhs instanceof ComponentData)
        {
            _r = (ComponentData)rhs;
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
            if(!java.util.Arrays.equals(provides, _r.provides))
            {
                return false;
            }
            if(!java.util.Arrays.equals(requires, _r.requires))
            {
                return false;
            }

            return true;
        }

        return false;
    }

    public int
    hashCode()
    {
        int __h = 5381;
        __h = IceInternal.HashUtil.hashAdd(__h, "::jderobot::ComponentData");
        __h = IceInternal.HashUtil.hashAdd(__h, name);
        __h = IceInternal.HashUtil.hashAdd(__h, provides);
        __h = IceInternal.HashUtil.hashAdd(__h, requires);
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
        ProvidesInterfacesHelper.write(__os, provides);
        RequiresInterfacesHelper.write(__os, requires);
    }

    public void
    __read(IceInternal.BasicStream __is)
    {
        name = new FQComponentName();
        name.__read(__is);
        provides = ProvidesInterfacesHelper.read(__is);
        requires = RequiresInterfacesHelper.read(__is);
    }

    public static final long serialVersionUID = -2352713769982282683L;
}