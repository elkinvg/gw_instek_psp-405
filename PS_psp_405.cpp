/*----- PROTECTED REGION ID(PS_psp_405.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        PS_psp_405.cpp
//
// description : C++ source for the PS_psp_405 class and its commands.
//               The class is derived from Device. It represents the
//               CORBA servant object which will be accessed from the
//               network. All commands which can be executed on the
//               PS_psp_405 are implemented in this file.
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


#include <PS_psp_405.h>
#include <PS_psp_405Class.h>

#include <iomanip>

/*----- PROTECTED REGION END -----*/	//	PS_psp_405.cpp

/**
 *  PS_psp_405 class description:
 *    Device Server for power supply ``GW_INSTEK PSP-405``
 */

//================================================================
//  The following table gives the correspondence
//  between command and method names.
//
//  Command name              |  Method name
//================================================================
//  State                     |  Inherited (no method)
//  Status                    |  Inherited (no method)
//  On                        |  on
//  Off                       |  off
//  UpdateAllTheStatusValues  |  update_all_the_status_values
//  SetVoltageLevel           |  set_voltage_level
//  SetCurrentLevel           |  set_current_level
//================================================================

//================================================================
//  Attributes managed are:
//================================================================
//  volt_meas   |  Tango::DevDouble	Scalar
//  curr_meas   |  Tango::DevDouble	Scalar
//  volt_level  |  Tango::DevDouble	Scalar
//  curr_level  |  Tango::DevDouble	Scalar
//================================================================

namespace PS_psp_405_ns
{
/*----- PROTECTED REGION ID(PS_psp_405::namespace_starting) ENABLED START -----*/

//	static initializations

/*----- PROTECTED REGION END -----*/	//	PS_psp_405::namespace_starting

//--------------------------------------------------------
/**
 *	Method      : PS_psp_405::PS_psp_405()
 *	Description : Constructors for a Tango device
 *                implementing the classPS_psp_405
 */
//--------------------------------------------------------
PS_psp_405::PS_psp_405(Tango::DeviceClass *cl, string &s)
 : PowerSuppliesAbst(cl, s.c_str())
{
	/*----- PROTECTED REGION ID(PS_psp_405::constructor_1) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::constructor_1
}
//--------------------------------------------------------
PS_psp_405::PS_psp_405(Tango::DeviceClass *cl, const char *s)
 : PowerSuppliesAbst(cl, s)
{
	/*----- PROTECTED REGION ID(PS_psp_405::constructor_2) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::constructor_2
}
//--------------------------------------------------------
PS_psp_405::PS_psp_405(Tango::DeviceClass *cl, const char *s, const char *d)
 : PowerSuppliesAbst(cl, s, d)
{
	/*----- PROTECTED REGION ID(PS_psp_405::constructor_3) ENABLED START -----*/
	init_device();
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::constructor_3
}

//--------------------------------------------------------
/**
 *	Method      : PS_psp_405::delete_device()
 *	Description : will be called at device destruction or at init command
 */
//--------------------------------------------------------
void PS_psp_405::delete_device()
{
	DEBUG_STREAM << "PS_psp_405::delete_device() " << device_name << endl;
	/*----- PROTECTED REGION ID(PS_psp_405::delete_device) ENABLED START -----*/
	
	//	Delete device allocated objects
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::delete_device
	delete[] attr_volt_meas_read;
	delete[] attr_curr_meas_read;
	delete[] attr_volt_level_read;
	delete[] attr_curr_level_read;

	if (Tango::Util::instance()->is_svr_shutting_down()==false  &&
		Tango::Util::instance()->is_device_restarting(device_name)==false &&
		Tango::Util::instance()->is_svr_starting()==false)
	{
		//	If not shutting down call delete device for inherited object
		PowerSuppliesAbst_ns::PowerSuppliesAbst::delete_device();
	}
}

//--------------------------------------------------------
/**
 *	Method      : PS_psp_405::init_device()
 *	Description : will be called at device initialization.
 */
//--------------------------------------------------------
void PS_psp_405::init_device()
{
	DEBUG_STREAM << "PS_psp_405::init_device() create device " << device_name << endl;
	/*----- PROTECTED REGION ID(PS_psp_405::init_device_before) ENABLED START -----*/
	
	//	Initialization before get_device_property() call
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::init_device_before
	
	if (Tango::Util::instance()->is_svr_starting() == false  &&
		Tango::Util::instance()->is_device_restarting(device_name)==false)
	{
		//	If not starting up call init device for inherited object
		PowerSuppliesAbst_ns::PowerSuppliesAbst::init_device();
	}

	//	Get the device properties from database
	get_device_property();
	
	attr_volt_meas_read = new Tango::DevDouble[1];
	attr_curr_meas_read = new Tango::DevDouble[1];
	attr_volt_level_read = new Tango::DevDouble[1];
	attr_curr_level_read = new Tango::DevDouble[1];
	/*----- PROTECTED REGION ID(PS_psp_405::init_device) ENABLED START -----*/
	
    initTangoSocket(socket);
    attr_curr_level_read[0] = -1;
    attr_volt_level_read[0] = -1;
    attr_curr_meas_read[0] = -1;
    attr_volt_meas_read[0] = -1;
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::init_device
}

//--------------------------------------------------------
/**
 *	Method      : PS_psp_405::get_device_property()
 *	Description : Read database to initialize property data members.
 */
//--------------------------------------------------------
void PS_psp_405::get_device_property()
{
	/*----- PROTECTED REGION ID(PS_psp_405::get_device_property_before) ENABLED START -----*/
	
	//	Initialize property data members
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::get_device_property_before


	//	Read device properties from database.
	Tango::DbData	dev_prop;
	dev_prop.push_back(Tango::DbDatum("Socket"));

	//	is there at least one property to be read ?
	if (dev_prop.size()>0)
	{
		//	Call database and extract values
		if (Tango::Util::instance()->_UseDb==true)
			get_db_device()->get_property(dev_prop);
	
		//	get instance on PS_psp_405Class to get class property
		Tango::DbDatum	def_prop, cl_prop;
		PS_psp_405Class	*ds_class =
			(static_cast<PS_psp_405Class *>(get_device_class()));
		int	i = -1;

		//	Try to initialize Socket from class property
		cl_prop = ds_class->get_class_property(dev_prop[++i].name);
		if (cl_prop.is_empty()==false)	cl_prop  >>  socket;
		else {
			//	Try to initialize Socket from default device value
			def_prop = ds_class->get_default_device_property(dev_prop[i].name);
			if (def_prop.is_empty()==false)	def_prop  >>  socket;
		}
		//	And try to extract Socket value from database
		if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  socket;

	}

	/*----- PROTECTED REGION ID(PS_psp_405::get_device_property_after) ENABLED START -----*/
	
	//	Check device property data members init
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::get_device_property_after
}

//--------------------------------------------------------
/**
 *	Method      : PS_psp_405::always_executed_hook()
 *	Description : method always executed before any command is executed
 */
//--------------------------------------------------------
void PS_psp_405::always_executed_hook()
{
	DEBUG_STREAM << "PS_psp_405::always_executed_hook()  " << device_name << endl;
	/*----- PROTECTED REGION ID(PS_psp_405::always_executed_hook) ENABLED START -----*/
	
    //	code always executed before all requests
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::always_executed_hook
}

//--------------------------------------------------------
/**
 *	Method      : PS_psp_405::read_attr_hardware()
 *	Description : Hardware acquisition for attributes
 */
//--------------------------------------------------------
void PS_psp_405::read_attr_hardware(TANGO_UNUSED(vector<long> &attr_list))
{
	DEBUG_STREAM << "PS_psp_405::read_attr_hardware(vector<long> &attr_list) entering... " << endl;
	/*----- PROTECTED REGION ID(PS_psp_405::read_attr_hardware) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::read_attr_hardware
}

//--------------------------------------------------------
/**
 *	Read attribute volt_meas related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PS_psp_405::read_volt_meas(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PS_psp_405::read_volt_meas(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PS_psp_405::read_volt_meas) ENABLED START -----*/
	//	Set the attribute value
	attr.set_value(attr_volt_meas_read);
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::read_volt_meas
}
//--------------------------------------------------------
/**
 *	Read attribute curr_meas related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PS_psp_405::read_curr_meas(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PS_psp_405::read_curr_meas(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PS_psp_405::read_curr_meas) ENABLED START -----*/
	//	Set the attribute value
	attr.set_value(attr_curr_meas_read);
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::read_curr_meas
}
//--------------------------------------------------------
/**
 *	Read attribute volt_level related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PS_psp_405::read_volt_level(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PS_psp_405::read_volt_level(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PS_psp_405::read_volt_level) ENABLED START -----*/
	//	Set the attribute value
	attr.set_value(attr_volt_level_read);
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::read_volt_level
}
//--------------------------------------------------------
/**
 *	Read attribute curr_level related method
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
//--------------------------------------------------------
void PS_psp_405::read_curr_level(Tango::Attribute &attr)
{
	DEBUG_STREAM << "PS_psp_405::read_curr_level(Tango::Attribute &attr) entering... " << endl;
	/*----- PROTECTED REGION ID(PS_psp_405::read_curr_level) ENABLED START -----*/
	//	Set the attribute value
	attr.set_value(attr_curr_level_read);
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::read_curr_level
}

//--------------------------------------------------------
/**
 *	Method      : PS_psp_405::add_dynamic_attributes()
 *	Description : Create the dynamic attributes if any
 *                for specified device.
 */
//--------------------------------------------------------
void PS_psp_405::add_dynamic_attributes()
{
	/*----- PROTECTED REGION ID(PS_psp_405::add_dynamic_attributes) ENABLED START -----*/
	
	//	Add your own code to create and add dynamic attributes if any
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::add_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Command On related method
 *	Description: 
 *
 */
//--------------------------------------------------------
void PS_psp_405::on()
{
	DEBUG_STREAM << "PS_psp_405::On()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(PS_psp_405::on) ENABLED START -----*/
	
    toSocketWrite(SETRELAYSTATUSTOON);
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::on
}
//--------------------------------------------------------
/**
 *	Command Off related method
 *	Description: 
 *
 */
//--------------------------------------------------------
void PS_psp_405::off()
{
	DEBUG_STREAM << "PS_psp_405::Off()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(PS_psp_405::off) ENABLED START -----*/
	
    toSocketWrite(SETRELAYSTATUSTOOFF);
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::off
}
//--------------------------------------------------------
/**
 *	Command UpdateAllTheStatusValues related method
 *	Description: 
 *
 */
//--------------------------------------------------------
void PS_psp_405::update_all_the_status_values()
{
	DEBUG_STREAM << "PS_psp_405::UpdateAllTheStatusValues()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(PS_psp_405::update_all_the_status_values) ENABLED START -----*/
	
    string reply = toSocketWriteAndRead(GETALLTHESTATUSVALUE,sleepTm);
    //string reply = toSocketWriteAndReadBinary(GETALLTHESTATUSVALUE,sleepTm);
    std::pair<std::array<double, 6>, std::bitset<7>> parsed = parsingOfAllStatusValues(reply);
    std::array<double, 6> outVals = parsed.first;
    std::bitset<7> gettedBits = parsed.second;

    attr_volt_meas_read[0] = outVals[0];
    attr_curr_meas_read[0] = outVals[1];
    attr_volt_level_read[0] = outVals[3];
    attr_curr_level_read[0] = outVals[4];


	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::update_all_the_status_values
}
//--------------------------------------------------------
/**
 *	Command SetVoltageLevel related method
 *	Description: Sets the voltage level
 *
 *	@param argin Voltage level
 */
//--------------------------------------------------------
void PS_psp_405::set_voltage_level(Tango::DevDouble argin)
{
	DEBUG_STREAM << "PS_psp_405::SetVoltageLevel()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(PS_psp_405::set_voltage_level) ENABLED START -----*/
	
    if (argin < 0 || argin > maxVolt) {
        ERROR_STREAM << "Setting voltage level " << argin << " more than minimum value  or less than maximum value" << endl;
    }
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::set_voltage_level
}
//--------------------------------------------------------
/**
 *	Command SetCurrentLevel related method
 *	Description: Sets or queries the current level
 *
 *	@param argin The current level
 */
//--------------------------------------------------------
void PS_psp_405::set_current_level(Tango::DevDouble argin)
{
	DEBUG_STREAM << "PS_psp_405::SetCurrentLevel()  - " << device_name << endl;
	/*----- PROTECTED REGION ID(PS_psp_405::set_current_level) ENABLED START -----*/
	
    if (argin < 0 || argin > maxCurr) {
        ERROR_STREAM << "Setting current level " << argin << " more than minimum value  or less than maximum value" << endl;
    }
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::set_current_level
}
//--------------------------------------------------------
/**
 *	Method      : PS_psp_405::add_dynamic_commands()
 *	Description : Create the dynamic commands if any
 *                for specified device.
 */
//--------------------------------------------------------
void PS_psp_405::add_dynamic_commands()
{
	/*----- PROTECTED REGION ID(PS_psp_405::add_dynamic_commands) ENABLED START -----*/
	
	//	Add your own code to create and add dynamic commands if any
	
	/*----- PROTECTED REGION END -----*/	//	PS_psp_405::add_dynamic_commands
}

/*----- PROTECTED REGION ID(PS_psp_405::namespace_ending) ENABLED START -----*/

std::pair<std::array<double, 6>, std::bitset<7> > PS_psp_405::parsingOfAllStatusValues(string statusValues)
{
    std::array<double, 6> out;
    std::bitset<7> outBitset;

    for (auto& i : out)
        i = errorOut; // if error in parsing

    // Formate of output: Vvv.vvAa.aaaWwww.wUuuIi.iiPpppFffffff


    // Searching of '\r'
    std::size_t pos;
    pos = statusValues.find('\r');
    if (pos!=std::string::npos)
        statusValues = statusValues.substr(0,pos);

    DEBUG_STREAM << " data from PS " << statusValues.size() <<" symbols : " << statusValues << endl;

    if (statusValues.size() != 37) {
        return make_pair(out, outBitset);
    }

    auto lambdaForParsing = [](string in, size_t pos, size_t len) {
        return in.substr(pos, len);
    };

    auto checkOut = [=](string in, char ch) {
        double outp;
        if (in[0] != ch)
            outp = errorOut;
        else {
            try {
                outp = stod(in.substr(1));
            }
            catch (const std::invalid_argument& ia) {
                outp = errorOut;
            }
        }
        return outp;
    };

    out[0] = checkOut(lambdaForParsing(statusValues, 0, 6), 'V');
    out[1] = checkOut(lambdaForParsing(statusValues, 6, 6), 'A');
    out[2] = checkOut(lambdaForParsing(statusValues, 12, 6), 'W');
    out[3] = checkOut(lambdaForParsing(statusValues, 18, 3), 'U');
    out[4] = checkOut(lambdaForParsing(statusValues, 21, 5), 'I');
    out[5] = checkOut(lambdaForParsing(statusValues, 26, 4), 'P');

    try {
        auto bits = lambdaForParsing(statusValues, 31, std::string::npos);
        bitset<7> tstBitset(bits);
        if (statusValues[30] == 'F')
            tstBitset.set(tstBitset.size() - 1, 1);
        outBitset = tstBitset;
    }
    catch (...) {}

    return make_pair(out,outBitset);
}

void PS_psp_405::checkStatusOutput(std::bitset<7> statusBits) {
    /**
    answ: F123456<cr>
    bit   answ 
    ind | ind
    6   |  .  =  0: no data form PS 1: data from PS
    5   | 1st = the relay status   0:OFF   1 : ON
    4   | 2nd = the temperature status   0 : Normal   1 : Overheat
    3   | 3rd = the wheel knob status   0 : Normal   1 : Fine
    2   | 4th = the wheel knob status   0 : Lock   1 : Unlock
    1   | 5th = the remote status   0 : Normal   1 : Remote(*)
    0   | 6th = the lock status   0 : Unlock   1 : Lock
    */
    if (!statusBits[6])
        return;

    if (statusBits[5]) {
        set_state(Tango::ON);
        set_status("PowerSupply is ON");
    }
    else {
        set_state(Tango::OFF);
        set_status("PowerSupply is OFF");
    }
}

string PS_psp_405::formatInput(string preposition, double dataIn, unsigned short forSetw, unsigned short forSetPrec) {
    stringstream ss;
    /**
    * For x.xxx forSetw = 5 forSetPrec = 3 Out: 0.100 1.230
    * For xx.xx forSetw = 5 forSetPrec = 2 Out: 00.10 12.30
    * For xx    forSetw = 2 forSetPrec = 0 Out: 01 10 25
    */
    ss << preposition;
    ss << setfill('0') << setw(forSetw) << fixed << setprecision(forSetPrec) << dataIn;
    ss << "\r\n";
    return ss.str();
}


/*----- PROTECTED REGION END -----*/	//	PS_psp_405::namespace_ending
} //	namespace
