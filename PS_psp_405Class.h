/*----- PROTECTED REGION ID(PS_psp_405Class.h) ENABLED START -----*/
//=============================================================================
//
// file :        PS_psp_405Class.h
//
// description : Include for the PS_psp_405 root class.
//               This class is the singleton class for
//                the PS_psp_405 device class.
//               It contains all properties and methods which the 
//               PS_psp_405 requires only once e.g. the commands.
//
// project :     GW_INSTEK PSP-405
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// $HeadURL:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef PS_psp_405Class_H
#define PS_psp_405Class_H

#include <tango.h>
#include <PowerSuppliesAbstClass.h>
#include <PS_psp_405.h>


/*----- PROTECTED REGION END -----*/	//	PS_psp_405Class.h


namespace PS_psp_405_ns
{
/*----- PROTECTED REGION ID(PS_psp_405Class::classes for dynamic creation) ENABLED START -----*/


/*----- PROTECTED REGION END -----*/	//	PS_psp_405Class::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute volt_meas class definition
class volt_measAttrib: public Tango::Attr
{
public:
	volt_measAttrib():Attr("volt_meas",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~volt_measAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PS_psp_405 *>(dev))->read_volt_meas(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PS_psp_405 *>(dev))->is_volt_meas_allowed(ty);}
};

//	Attribute curr_meas class definition
class curr_measAttrib: public Tango::Attr
{
public:
	curr_measAttrib():Attr("curr_meas",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~curr_measAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PS_psp_405 *>(dev))->read_curr_meas(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PS_psp_405 *>(dev))->is_curr_meas_allowed(ty);}
};

//	Attribute volt_level class definition
class volt_levelAttrib: public Tango::Attr
{
public:
	volt_levelAttrib():Attr("volt_level",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~volt_levelAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PS_psp_405 *>(dev))->read_volt_level(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PS_psp_405 *>(dev))->is_volt_level_allowed(ty);}
};

//	Attribute curr_level class definition
class curr_levelAttrib: public Tango::Attr
{
public:
	curr_levelAttrib():Attr("curr_level",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~curr_levelAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PS_psp_405 *>(dev))->read_curr_level(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PS_psp_405 *>(dev))->is_curr_level_allowed(ty);}
};

//	Attribute maximum_volt_limit class definition
class maximum_volt_limitAttrib: public Tango::Attr
{
public:
	maximum_volt_limitAttrib():Attr("maximum_volt_limit",
			Tango::DEV_DOUBLE, Tango::READ) {};
	~maximum_volt_limitAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<PS_psp_405 *>(dev))->read_maximum_volt_limit(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<PS_psp_405 *>(dev))->is_maximum_volt_limit_allowed(ty);}
};


//=========================================
//	Define classes for commands
//=========================================
//	Command On class definition
class OnClass : public Tango::Command
{
public:
	OnClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	OnClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~OnClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PS_psp_405 *>(dev))->is_On_allowed(any);}
};

//	Command Off class definition
class OffClass : public Tango::Command
{
public:
	OffClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	OffClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~OffClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PS_psp_405 *>(dev))->is_Off_allowed(any);}
};

//	Command UpdateAllTheStatusValues class definition
class UpdateAllTheStatusValuesClass : public Tango::Command
{
public:
	UpdateAllTheStatusValuesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	UpdateAllTheStatusValuesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~UpdateAllTheStatusValuesClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PS_psp_405 *>(dev))->is_UpdateAllTheStatusValues_allowed(any);}
};

//	Command SetVoltageLevel class definition
class SetVoltageLevelClass : public Tango::Command
{
public:
	SetVoltageLevelClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SetVoltageLevelClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SetVoltageLevelClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PS_psp_405 *>(dev))->is_SetVoltageLevel_allowed(any);}
};

//	Command SetCurrentLevel class definition
class SetCurrentLevelClass : public Tango::Command
{
public:
	SetCurrentLevelClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SetCurrentLevelClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SetCurrentLevelClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PS_psp_405 *>(dev))->is_SetCurrentLevel_allowed(any);}
};

//	Command SetMaximumVoltageLimit class definition
class SetMaximumVoltageLimitClass : public Tango::Command
{
public:
	SetMaximumVoltageLimitClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SetMaximumVoltageLimitClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SetMaximumVoltageLimitClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<PS_psp_405 *>(dev))->is_SetMaximumVoltageLimit_allowed(any);}
};


/**
 *	The PS_psp_405Class singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  PS_psp_405Class : public PowerSuppliesAbst_ns::PowerSuppliesAbstClass
#else
class PS_psp_405Class : public PowerSuppliesAbst_ns::PowerSuppliesAbstClass
#endif
{
	/*----- PROTECTED REGION ID(PS_psp_405Class::Additionnal DServer data members) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405Class::Additionnal DServer data members

	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static PS_psp_405Class *init(const char *);
		static PS_psp_405Class *instance();
		~PS_psp_405Class();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		PS_psp_405Class(string &);
		static PS_psp_405Class *_instance;
		void command_factory();
		void attribute_factory(vector<Tango::Attr *> &);
		void pipe_factory();
		void write_class_property();
		void set_default_property();
		void get_class_property();
		string get_cvstag();
		string get_cvsroot();
	
	private:
		void device_factory(const Tango::DevVarStringArray *);
		void create_static_attribute_list(vector<Tango::Attr *> &);
		void erase_dynamic_attributes(const Tango::DevVarStringArray *,vector<Tango::Attr *> &);
		vector<string>	defaultAttList;
		Tango::Attr *get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname);
};

}	//	End of namespace

#endif   //	PS_psp_405_H
