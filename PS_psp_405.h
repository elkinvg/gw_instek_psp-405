/*----- PROTECTED REGION ID(PS_psp_405.h) ENABLED START -----*/
//=============================================================================
//
// file :        PS_psp_405.h
//
// description : Include file for the PS_psp_405 class
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


#ifndef PS_psp_405_H
#define PS_psp_405_H

#include <tango.h>
#include <PowerSuppliesAbst.h>

#include <array>


/*----- PROTECTED REGION END -----*/	//	PS_psp_405.h

/**
 *  PS_psp_405 class description:
 *    Device Server for power supply ``GW_INSTEK PSP-405``
 */

namespace PS_psp_405_ns
{
/*----- PROTECTED REGION ID(PS_psp_405::Additional Class Declarations) ENABLED START -----*/

//	Additional Class Declarations

/*----- PROTECTED REGION END -----*/	//	PS_psp_405::Additional Class Declarations

class PS_psp_405 : public PowerSuppliesAbst_ns::PowerSuppliesAbst
{

/*----- PROTECTED REGION ID(PS_psp_405::Data Members) ENABLED START -----*/

//	Add your own data members
private:
    //const string GETALLTHESTATUSVALUE = {'L', 13};
    //const string GETPRESENTOUTVOLT = {'V', 13};
    //const string GETPRESENTOUTCURR = {'A', 13};

    //const string GETMAXVOLTLIMIT = { 'U', 13 };
    //const string GETMAXCURRLIMIT = { 'I', 13 };
    //const string GETPRESENTSTATUS = { 'F', 13 };

    //const string SETMAXCURRLIMIT = { 'S', 'I', 'M', 13 };
    //const string SETMAXVOLTLIMIT = { 'S', 'U', 'M', 13 };

    //const string SETRELAYSTATUSTOON = { 'K', 'O', 'E', 13 };
    //const string SETRELAYSTATUSTOOFF = { 'K', 'O', 'D', 13 };

    //const string SETOUTVOLTVALUE = { 'S', 'V', ' ' };
    //const string SETVOLTLIMIT = { 'S', 'U', ' ' };
    //const string SETCURRLIMIT = { 'S', 'I', ' ' };

    //----------------------------------------------//

    /**
    * To obtain all the status values of the power supply
    */    
    string GETALLTHESTATUSVALUE = "L";

    //----------------------------------------------//
    /**
    * The present output voltage, the unit is V.
    */
    string GETPRESENTOUTVOLT = "V";

    /**
    * The present output current, the unit is A.
    */
    string GETPRESENTOUTCURR = "A";

    //----------------------------------------------//

    /**
    * The maximum voltage limit at present, the unit is V.
    */
    string GETMAXVOLTLIMIT = "U";

    /**
    * The maximum current limit at present, the unit is A
    */
    string GETMAXCURRLIMIT = "I";

    /**
    * The present status of the power supply
    */
    string GETPRESENTSTATUS = "F";

    //----------------------------------------------//

    /**
    * When the message of SIM<cr> (SUM<cr>) is sent to the power supply from
    * computer, the power supply will set the (current) voltage limit to the maximum
    * immediately
    */

    string SETMAXCURRLIMIT = "SIM";
    string SETMAXVOLTLIMIT = "SUM";

    //----------------------------------------------//

    /**
    * Set the Relay status to ON.
    */
    string SETRELAYSTATUSTOON = "KOE";
    
    /**
    * Set the Relay status to OFF.
    */
    string SETRELAYSTATUSTOOFF = "KOD";

    //----------------------------------------------//


    /**
    * Set the output voltage value.
    */
    string SETOUTVOLTVALUE = "SV ";

    /**
    * Set voltage limit.
    */
    string SETVOLTLIMIT = "SU ";

    /**
    * Set current limit.
    */
    string SETCURRLIMIT = "SI ";


    const double errorOut = -1.0;
    const unsigned int sleepTm = 300;

/*----- PROTECTED REGION END -----*/	//	PS_psp_405::Data Members

//	Device property data members
public:
	//	Socket:	Socket Tango device name in format ``domain/family/member``
	string	socket;

//	Attribute data members
public:
	Tango::DevDouble	*attr_volt_meas_read;
	Tango::DevDouble	*attr_curr_meas_read;
	Tango::DevDouble	*attr_volt_level_read;
	Tango::DevDouble	*attr_curr_level_read;

//	Constructors and destructors
public:
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	PS_psp_405(Tango::DeviceClass *cl,string &s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	PS_psp_405(Tango::DeviceClass *cl,const char *s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device name
	 *	@param d	Device description.
	 */
	PS_psp_405(Tango::DeviceClass *cl,const char *s,const char *d);
	/**
	 * The device object destructor.
	 */
	~PS_psp_405() {delete_device();};


//	Miscellaneous methods
public:
	/*
	 *	will be called at device destruction or at init command.
	 */
	void delete_device();
	/*
	 *	Initialize the device
	 */
	virtual void init_device();
	/*
	 *	Read the device properties from database
	 */
	void get_device_property();
	/*
	 *	Always executed method before execution command method.
	 */
	virtual void always_executed_hook();


//	Attribute methods
public:
	//--------------------------------------------------------
	/*
	 *	Method      : PS_psp_405::read_attr_hardware()
	 *	Description : Hardware acquisition for attributes.
	 */
	//--------------------------------------------------------
	virtual void read_attr_hardware(vector<long> &attr_list);

/**
 *	Attribute volt_meas related methods
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_volt_meas(Tango::Attribute &attr);
	virtual bool is_volt_meas_allowed(Tango::AttReqType type);
/**
 *	Attribute curr_meas related methods
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_curr_meas(Tango::Attribute &attr);
	virtual bool is_curr_meas_allowed(Tango::AttReqType type);
/**
 *	Attribute volt_level related methods
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_volt_level(Tango::Attribute &attr);
	virtual bool is_volt_level_allowed(Tango::AttReqType type);
/**
 *	Attribute curr_level related methods
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_curr_level(Tango::Attribute &attr);
	virtual bool is_curr_level_allowed(Tango::AttReqType type);


	//--------------------------------------------------------
	/**
	 *	Method      : PS_psp_405::add_dynamic_attributes()
	 *	Description : Add dynamic attributes if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_attributes();




//	Command related methods
public:
	/**
	 *	Command On related method
	 *	Description: 
	 *
	 */
	virtual void on();
	virtual bool is_On_allowed(const CORBA::Any &any);
	/**
	 *	Command Off related method
	 *	Description: 
	 *
	 */
	virtual void off();
	virtual bool is_Off_allowed(const CORBA::Any &any);
	/**
	 *	Command UdpateAllTheStatusValues related method
	 *	Description: 
	 *
	 */
	virtual void udpate_all_the_status_values();
	virtual bool is_UdpateAllTheStatusValues_allowed(const CORBA::Any &any);


	//--------------------------------------------------------
	/**
	 *	Method      : PS_psp_405::add_dynamic_commands()
	 *	Description : Add dynamic commands if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_commands();

/*----- PROTECTED REGION ID(PS_psp_405::Additional Method prototypes) ENABLED START -----*/

//	Additional Method prototypes
private:
    std::array<double, 7> parsingOfAllStatusValues(string statusValues);


/*----- PROTECTED REGION END -----*/	//	PS_psp_405::Additional Method prototypes
};

/*----- PROTECTED REGION ID(PS_psp_405::Additional Classes Definitions) ENABLED START -----*/

//	Additional Classes Definitions

/*----- PROTECTED REGION END -----*/	//	PS_psp_405::Additional Classes Definitions

}	//	End of namespace

#endif   //	PS_psp_405_H
