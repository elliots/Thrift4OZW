// Automatically generated OpenZWave::Manager_server wrapper
// (c) 2011 Elias Karakoulakis <elias.karakoulakis@gmail.com>

#include "RemoteManager.h"
#include <protocol/TBinaryProtocol.h>
#include <server/TSimpleServer.h>
#include <transport/TServerSocket.h>
#include <transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

using namespace OpenZWave;

class RemoteManagerHandler : virtual public RemoteManagerIf {
 public:
  RemoteManagerHandler() {
    // Your initialization goes here
  }

  void WriteConfig(const int32_t _homeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->WriteConfig((::uint32 const) _homeId);
	g_criticalSection.unlock();
  }

  int8_t GetControllerNodeId(const int32_t _homeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	::int8_t function_result =  mgr->GetControllerNodeId((::uint32 const) _homeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool IsPrimaryController(const int32_t _homeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->IsPrimaryController((::uint32 const) _homeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool IsStaticUpdateController(const int32_t _homeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->IsStaticUpdateController((::uint32 const) _homeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool IsBridgeController(const int32_t _homeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->IsBridgeController((::uint32 const) _homeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  void GetLibraryVersion(std::string& _return, const int32_t _homeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->GetLibraryVersion((::uint32 const) _homeId);
	g_criticalSection.unlock();
  }

  void GetLibraryTypeName(std::string& _return, const int32_t _homeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->GetLibraryTypeName((::uint32 const) _homeId);
	g_criticalSection.unlock();
  }

  int32_t GetSendQueueCount(const int32_t _homeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	::int32_t function_result =  mgr->GetSendQueueCount((::uint32 const) _homeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  int32_t GetPollInterval() {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	::int32_t function_result =  mgr->GetPollInterval();
	g_criticalSection.unlock();
	return(function_result);
  }

  void SetPollInterval(const int32_t _seconds) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->SetPollInterval((::int32) _seconds);
	g_criticalSection.unlock();
  }

  bool EnablePoll(const RemoteValueID _valueId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->EnablePoll(*g_values[_valueId]);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool DisablePoll(const RemoteValueID _valueId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->DisablePoll(*g_values[_valueId]);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool isPolled(const RemoteValueID _valueId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->isPolled(*g_values[_valueId]);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool RefreshNodeInfo(const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->RefreshNodeInfo((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool RequestNodeState(const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->RequestNodeState((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool RequestNodeDynamic(const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->RequestNodeDynamic((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool IsNodeListeningDevice(const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->IsNodeListeningDevice((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool IsNodeRoutingDevice(const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->IsNodeRoutingDevice((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  int32_t GetNodeMaxBaudRate(const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	::int32_t function_result =  mgr->GetNodeMaxBaudRate((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  int8_t GetNodeVersion(const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	::int8_t function_result =  mgr->GetNodeVersion((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  int8_t GetNodeSecurity(const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	::int8_t function_result =  mgr->GetNodeSecurity((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  int8_t GetNodeBasic(const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	::int8_t function_result =  mgr->GetNodeBasic((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  int8_t GetNodeGeneric(const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	::int8_t function_result =  mgr->GetNodeGeneric((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  int8_t GetNodeSpecific(const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	::int8_t function_result =  mgr->GetNodeSpecific((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  void GetNodeType(std::string& _return, const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->GetNodeType((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
  }

  void GetNodeNeighbors(UInt32_ListByte& _return, const int32_t _homeId, const int8_t _nodeId) {
      uint8* arr;
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->GetNodeNeighbors((::uint32 const) _homeId, (::uint8 const) _nodeId, (::uint8**) &arr);
	g_criticalSection.unlock();
    if (_return.retval > 0) {
        for (int i=0; i<_return.retval; i++) _return._nodeNeighbors.push_back(arr[i]);
        delete arr;
    }
  }

  void GetNodeManufacturerName(std::string& _return, const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->GetNodeManufacturerName((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
  }

  void GetNodeProductName(std::string& _return, const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->GetNodeProductName((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
  }

  void GetNodeName(std::string& _return, const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->GetNodeName((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
  }

  void GetNodeLocation(std::string& _return, const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->GetNodeLocation((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
  }

  void GetNodeManufacturerId(std::string& _return, const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->GetNodeManufacturerId((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
  }

  void GetNodeProductType(std::string& _return, const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->GetNodeProductType((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
  }

  void GetNodeProductId(std::string& _return, const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->GetNodeProductId((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
  }

  void SetNodeManufacturerName(const int32_t _homeId, const int8_t _nodeId, const std::string& _manufacturerName) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->SetNodeManufacturerName((::uint32 const) _homeId, (::uint8 const) _nodeId, (const std::string&) _manufacturerName);
	g_criticalSection.unlock();
  }

  void SetNodeProductName(const int32_t _homeId, const int8_t _nodeId, const std::string& _productName) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->SetNodeProductName((::uint32 const) _homeId, (::uint8 const) _nodeId, (const std::string&) _productName);
	g_criticalSection.unlock();
  }

  void SetNodeName(const int32_t _homeId, const int8_t _nodeId, const std::string& _nodeName) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->SetNodeName((::uint32 const) _homeId, (::uint8 const) _nodeId, (const std::string&) _nodeName);
	g_criticalSection.unlock();
  }

  void SetNodeLocation(const int32_t _homeId, const int8_t _nodeId, const std::string& _location) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->SetNodeLocation((::uint32 const) _homeId, (::uint8 const) _nodeId, (const std::string&) _location);
	g_criticalSection.unlock();
  }

  void SetNodeOn(const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->SetNodeOn((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
  }

  void SetNodeOff(const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->SetNodeOff((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
  }

  void SetNodeLevel(const int32_t _homeId, const int8_t _nodeId, const int8_t _level) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->SetNodeLevel((::uint32 const) _homeId, (::uint8 const) _nodeId, (::uint8 const) _level);
	g_criticalSection.unlock();
  }

  bool IsNodeInfoReceived(const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->IsNodeInfoReceived((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  void GetNodeClassInformation(Bool_GetNodeClassInformation& _return, const int32_t _homeId, const int8_t _nodeId, const int8_t _commandClassId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->GetNodeClassInformation((::uint32 const) _homeId, (::uint8 const) _nodeId, (::uint8 const) _commandClassId, (std::string*) &_return._className, (::uint8*) &_return._classVersion);
	g_criticalSection.unlock();
  }

  void GetValueLabel(std::string& _return, const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->GetValueLabel(*g_values[_id]);
	g_criticalSection.unlock();
  }

  void SetValueLabel(const RemoteValueID _id, const std::string& _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->SetValueLabel(*g_values[_id], (const std::string&) _value);
	g_criticalSection.unlock();
  }

  void GetValueUnits(std::string& _return, const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->GetValueUnits(*g_values[_id]);
	g_criticalSection.unlock();
  }

  void SetValueUnits(const RemoteValueID _id, const std::string& _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->SetValueUnits(*g_values[_id], (const std::string&) _value);
	g_criticalSection.unlock();
  }

  void GetValueHelp(std::string& _return, const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->GetValueHelp(*g_values[_id]);
	g_criticalSection.unlock();
  }

  void SetValueHelp(const RemoteValueID _id, const std::string& _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->SetValueHelp(*g_values[_id], (const std::string&) _value);
	g_criticalSection.unlock();
  }

  int32_t GetValueMin(const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	::int32_t function_result =  mgr->GetValueMin(*g_values[_id]);
	g_criticalSection.unlock();
	return(function_result);
  }

  int32_t GetValueMax(const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	::int32_t function_result =  mgr->GetValueMax(*g_values[_id]);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool IsValueReadOnly(const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->IsValueReadOnly(*g_values[_id]);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool IsValueWriteOnly(const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->IsValueWriteOnly(*g_values[_id]);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool IsValueSet(const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->IsValueSet(*g_values[_id]);
	g_criticalSection.unlock();
	return(function_result);
  }

  void GetValueAsBool(Bool_Bool& _return, const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->GetValueAsBool(*g_values[_id], (bool*) &_return.o_value);
	g_criticalSection.unlock();
  }

  void GetValueAsByte(Bool_UInt8& _return, const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->GetValueAsByte(*g_values[_id], (::uint8*) &_return.o_value);
	g_criticalSection.unlock();
  }

  void GetValueAsFloat(Bool_Float& _return, const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->GetValueAsFloat(*g_values[_id], (float*) &_return.o_value);
	g_criticalSection.unlock();
  }

  void GetValueAsInt(Bool_Int& _return, const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->GetValueAsInt(*g_values[_id], (::int32*) &_return.o_value);
	g_criticalSection.unlock();
  }

  void GetValueAsShort(Bool_Int16& _return, const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->GetValueAsShort(*g_values[_id], (::int16*) &_return.o_value);
	g_criticalSection.unlock();
  }

  void GetValueAsString(Bool_String& _return, const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->GetValueAsString(*g_values[_id], (std::string*) &_return.o_value);
	g_criticalSection.unlock();
  }

  void GetValueListSelection_String(Bool_String& _return, const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->GetValueListSelection(*g_values[_id], (std::string*) &_return.o_value);
	g_criticalSection.unlock();
  }

  void GetValueListSelection_Int32(Bool_Int& _return, const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->GetValueListSelection(*g_values[_id], (::int32*) &_return.o_value);
	g_criticalSection.unlock();
  }

  void GetValueListItems(Bool_ListString& _return, const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->GetValueListItems(*g_values[_id], (std::vector<std::string, std::allocator<std::string> >*) &_return.o_value);
	g_criticalSection.unlock();
  }

  void GetValueFloatPrecision(Bool_UInt8& _return, const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->GetValueFloatPrecision(*g_values[_id], (::uint8*) &_return.o_value);
	g_criticalSection.unlock();
  }

  bool SetValue_Bool(const RemoteValueID _id, const bool _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SetValue(*g_values[_id], (bool const) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool SetValue_UInt8(const RemoteValueID _id, const int8_t _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SetValue(*g_values[_id], (::uint8 const) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool SetValue_Float(const RemoteValueID _id, const double _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SetValue(*g_values[_id], (float const) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool SetValue_Int32(const RemoteValueID _id, const int32_t _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SetValue(*g_values[_id], (::int32 const) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool SetValue_Int16(const RemoteValueID _id, const int16_t _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SetValue(*g_values[_id], (::int16 const) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool SetValue_String(const RemoteValueID _id, const std::string& _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SetValue(*g_values[_id], (const std::string&) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool SetValueListSelection(const RemoteValueID _id, const std::string& _selectedItem) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SetValueListSelection(*g_values[_id], (const std::string&) _selectedItem);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool PressButton(const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->PressButton(*g_values[_id]);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool ReleaseButton(const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->ReleaseButton(*g_values[_id]);
	g_criticalSection.unlock();
	return(function_result);
  }

  int8_t GetNumSwitchPoints(const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	::int8_t function_result =  mgr->GetNumSwitchPoints(*g_values[_id]);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool SetSwitchPoint(const RemoteValueID _id, const int8_t _hours, const int8_t _minutes, const int8_t _setback) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SetSwitchPoint(*g_values[_id], (::uint8 const) _hours, (::uint8 const) _minutes, (::int8 const) _setback);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool RemoveSwitchPoint(const RemoteValueID _id, const int8_t _hours, const int8_t _minutes) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->RemoveSwitchPoint(*g_values[_id], (::uint8 const) _hours, (::uint8 const) _minutes);
	g_criticalSection.unlock();
	return(function_result);
  }

  void ClearSwitchPoints(const RemoteValueID _id) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->ClearSwitchPoints(*g_values[_id]);
	g_criticalSection.unlock();
  }

  void GetSwitchPoint(GetSwitchPointReturnStruct& _return, const RemoteValueID _id, const int8_t _idx) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->GetSwitchPoint(*g_values[_id], (::uint8 const) _idx, (::uint8*) &_return.o_hours, (::uint8*) &_return.o_minutes, (::int8*) &_return.o_setback);
	g_criticalSection.unlock();
  }

  void SwitchAllOn(const int32_t _homeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->SwitchAllOn((::uint32 const) _homeId);
	g_criticalSection.unlock();
  }

  void SwitchAllOff(const int32_t _homeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->SwitchAllOff((::uint32 const) _homeId);
	g_criticalSection.unlock();
  }

  bool SetConfigParam(const int32_t _homeId, const int8_t _nodeId, const int8_t _param, const int32_t _value, const int8_t _size) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SetConfigParam((::uint32 const) _homeId, (::uint8 const) _nodeId, (::uint8 const) _param, (::int32) _value, (::uint8 const) _size);
	g_criticalSection.unlock();
	return(function_result);
  }

  void RequestConfigParam(const int32_t _homeId, const int8_t _nodeId, const int8_t _param) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->RequestConfigParam((::uint32 const) _homeId, (::uint8 const) _nodeId, (::uint8 const) _param);
	g_criticalSection.unlock();
  }

  void RequestAllConfigParams(const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->RequestAllConfigParams((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
  }

  int8_t GetNumGroups(const int32_t _homeId, const int8_t _nodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	::int8_t function_result =  mgr->GetNumGroups((::uint32 const) _homeId, (::uint8 const) _nodeId);
	g_criticalSection.unlock();
	return(function_result);
  }

  void GetAssociations(GetAssociationsReturnStruct& _return, const int32_t _homeId, const int8_t _nodeId, const int8_t _groupIdx) {
    uint8* o_associations; 
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->GetAssociations((::uint32 const) _homeId, (::uint8 const) _nodeId, (::uint8 const) _groupIdx, (::uint8**) &o_associations);
	g_criticalSection.unlock();
    if (_return.retval > 0) {
        for (int i=0; i<_return.retval; i++) _return.o_associations.push_back(o_associations[i]);
        delete o_associations;
    }
  }

  int8_t GetMaxAssociations(const int32_t _homeId, const int8_t _nodeId, const int8_t _groupIdx) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	::int8_t function_result =  mgr->GetMaxAssociations((::uint32 const) _homeId, (::uint8 const) _nodeId, (::uint8 const) _groupIdx);
	g_criticalSection.unlock();
	return(function_result);
  }

  void GetGroupLabel(std::string& _return, const int32_t _homeId, const int8_t _nodeId, const int8_t _groupIdx) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->GetGroupLabel((::uint32 const) _homeId, (::uint8 const) _nodeId, (::uint8 const) _groupIdx);
	g_criticalSection.unlock();
  }

  void AddAssociation(const int32_t _homeId, const int8_t _nodeId, const int8_t _groupIdx, const int8_t _targetNodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->AddAssociation((::uint32 const) _homeId, (::uint8 const) _nodeId, (::uint8 const) _groupIdx, (::uint8 const) _targetNodeId);
	g_criticalSection.unlock();
  }

  void RemoveAssociation(const int32_t _homeId, const int8_t _nodeId, const int8_t _groupIdx, const int8_t _targetNodeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->RemoveAssociation((::uint32 const) _homeId, (::uint8 const) _nodeId, (::uint8 const) _groupIdx, (::uint8 const) _targetNodeId);
	g_criticalSection.unlock();
  }

  void ResetController(const int32_t _homeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->ResetController((::uint32 const) _homeId);
	g_criticalSection.unlock();
  }

  void SoftReset(const int32_t _homeId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->SoftReset((::uint32 const) _homeId);
	g_criticalSection.unlock();
  }

  int8_t GetNumScenes() {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	::int8_t function_result =  mgr->GetNumScenes();
	g_criticalSection.unlock();
	return(function_result);
  }

  void GetAllScenes(GetAllScenesReturnStruct& _return) {
      uint8* _sceneIds;
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->GetAllScenes((::uint8**) &_sceneIds);
	g_criticalSection.unlock();
    if (_return.retval>0) {
        for (int i=0; i<_return.retval; i++) _return._sceneIds.push_back(_sceneIds[i]);
        delete(_sceneIds);
    }
  }
    
  int8_t CreateScene() {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	::int8_t function_result =  mgr->CreateScene();
	g_criticalSection.unlock();
	return(function_result);
  }

  bool RemoveScene(const int8_t _sceneId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->RemoveScene((::uint8 const) _sceneId);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool AddSceneValue_Bool(const int8_t _sceneId, const RemoteValueID _valueId, const bool _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->AddSceneValue((::uint8 const) _sceneId, *g_values[_valueId], (bool const) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool AddSceneValue_Uint8(const int8_t _sceneId, const RemoteValueID _valueId, const int8_t _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->AddSceneValue((::uint8 const) _sceneId, *g_values[_valueId], (::uint8 const) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool AddSceneValue_Float(const int8_t _sceneId, const RemoteValueID _valueId, const double _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->AddSceneValue((::uint8 const) _sceneId, *g_values[_valueId], (float const) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool AddSceneValue_Int32(const int8_t _sceneId, const RemoteValueID _valueId, const int32_t _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->AddSceneValue((::uint8 const) _sceneId, *g_values[_valueId], (::int32 const) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool AddSceneValue_Int16(const int8_t _sceneId, const RemoteValueID _valueId, const int16_t _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->AddSceneValue((::uint8 const) _sceneId, *g_values[_valueId], (::int16 const) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool AddSceneValue_String(const int8_t _sceneId, const RemoteValueID _valueId, const std::string& _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->AddSceneValue((::uint8 const) _sceneId, *g_values[_valueId], (const std::string&) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool AddSceneValueListSelection_String(const int8_t _sceneId, const RemoteValueID _valueId, const std::string& _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->AddSceneValueListSelection((::uint8 const) _sceneId, *g_values[_valueId], (const std::string&) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool AddSceneValueListSelection_Int32(const int8_t _sceneId, const RemoteValueID _valueId, const int32_t _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->AddSceneValueListSelection((::uint8 const) _sceneId, *g_values[_valueId], (::int32 const) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool RemoveSceneValue(const int8_t _sceneId, const RemoteValueID _valueId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->RemoveSceneValue((::uint8 const) _sceneId, *g_values[_valueId]);
	g_criticalSection.unlock();
	return(function_result);
  }

  void SceneGetValues(SceneGetValuesReturnStruct& _return, const int8_t _sceneId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->SceneGetValues((::uint8 const) _sceneId, (std::vector<OpenZWave::ValueID, std::allocator<OpenZWave::ValueID> >*) &_return.o_value);
	g_criticalSection.unlock();
  }

  void SceneGetValueAsBool(Bool_Bool& _return, const int8_t _sceneId, const RemoteValueID _valueId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->SceneGetValueAsBool((::uint8 const) _sceneId, *g_values[_valueId], (bool*) &_return.o_value);
	g_criticalSection.unlock();
  }

  void SceneGetValueAsByte(Bool_UInt8& _return, const int8_t _sceneId, const RemoteValueID _valueId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->SceneGetValueAsByte((::uint8 const) _sceneId, *g_values[_valueId], (::uint8*) &_return.o_value);
	g_criticalSection.unlock();
  }

  void SceneGetValueAsFloat(Bool_Float& _return, const int8_t _sceneId, const RemoteValueID _valueId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->SceneGetValueAsFloat((::uint8 const) _sceneId, *g_values[_valueId], (float*) &_return.o_value);
	g_criticalSection.unlock();
  }

  void SceneGetValueAsInt(Bool_Int& _return, const int8_t _sceneId, const RemoteValueID _valueId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->SceneGetValueAsInt((::uint8 const) _sceneId, *g_values[_valueId], (::int32*) &_return.o_value);
	g_criticalSection.unlock();
  }

  void SceneGetValueAsShort(Bool_Int16& _return, const int8_t _sceneId, const RemoteValueID _valueId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->SceneGetValueAsShort((::uint8 const) _sceneId, *g_values[_valueId], (::int16*) &_return.o_value);
	g_criticalSection.unlock();
  }

  void SceneGetValueAsString(Bool_String& _return, const int8_t _sceneId, const RemoteValueID _valueId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->SceneGetValueAsString((::uint8 const) _sceneId, *g_values[_valueId], (std::string*) &_return.o_value);
	g_criticalSection.unlock();
  }

  void SceneGetValueListSelection_String(Bool_String& _return, const int8_t _sceneId, const RemoteValueID _valueId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->SceneGetValueListSelection((::uint8 const) _sceneId, *g_values[_valueId], (std::string*) &_return.o_value);
	g_criticalSection.unlock();
  }

  void SceneGetValueListSelection_Int32(Bool_Int& _return, const int8_t _sceneId, const RemoteValueID _valueId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	_return.retval =  mgr->SceneGetValueListSelection((::uint8 const) _sceneId, *g_values[_valueId], (::int32*) &_return.o_value);
	g_criticalSection.unlock();
  }

  bool SetSceneValue_Bool(const int8_t _sceneId, const RemoteValueID _valueId, const bool _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SetSceneValue((::uint8 const) _sceneId, *g_values[_valueId], (bool const) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool SetSceneValue_Uint8(const int8_t _sceneId, const RemoteValueID _valueId, const int8_t _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SetSceneValue((::uint8 const) _sceneId, *g_values[_valueId], (::uint8 const) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool SetSceneValue_Float(const int8_t _sceneId, const RemoteValueID _valueId, const double _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SetSceneValue((::uint8 const) _sceneId, *g_values[_valueId], (float const) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool SetSceneValue_Int32(const int8_t _sceneId, const RemoteValueID _valueId, const int32_t _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SetSceneValue((::uint8 const) _sceneId, *g_values[_valueId], (::int32 const) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool SetSceneValue_Int16(const int8_t _sceneId, const RemoteValueID _valueId, const int16_t _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SetSceneValue((::uint8 const) _sceneId, *g_values[_valueId], (::int16 const) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool SetSceneValue_String(const int8_t _sceneId, const RemoteValueID _valueId, const std::string& _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SetSceneValue((::uint8 const) _sceneId, *g_values[_valueId], (const std::string&) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool SetSceneValueListSelection_String(const int8_t _sceneId, const RemoteValueID _valueId, const std::string& _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SetSceneValueListSelection((::uint8 const) _sceneId, *g_values[_valueId], (const std::string&) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool SetSceneValueListSelection_Int32(const int8_t _sceneId, const RemoteValueID _valueId, const int32_t _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SetSceneValueListSelection((::uint8 const) _sceneId, *g_values[_valueId], (::int32 const) _value);
	g_criticalSection.unlock();
	return(function_result);
  }

  void GetSceneLabel(std::string& _return, const int8_t _sceneId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->GetSceneLabel((::uint8 const) _sceneId);
	g_criticalSection.unlock();
  }

  void SetSceneLabel(const int8_t _sceneId, const std::string& _value) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	 mgr->SetSceneLabel((::uint8 const) _sceneId, (const std::string&) _value);
	g_criticalSection.unlock();
  }

  bool SceneExists(const int8_t _sceneId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->SceneExists((::uint8 const) _sceneId);
	g_criticalSection.unlock();
	return(function_result);
  }

  bool ActivateScene(const int8_t _sceneId) {
	Manager* mgr = Manager::Get();
	g_criticalSection.lock();
	bool function_result =  mgr->ActivateScene((::uint8 const) _sceneId);
	g_criticalSection.unlock();
	return(function_result);
  }

};
