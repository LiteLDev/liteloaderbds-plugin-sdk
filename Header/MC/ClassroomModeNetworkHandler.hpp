// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ClassroomModeNetworkHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLASSROOMMODENETWORKHANDLER
public:
    class ClassroomModeNetworkHandler& operator=(class ClassroomModeNetworkHandler const &) = delete;
    ClassroomModeNetworkHandler(class ClassroomModeNetworkHandler const &) = delete;
    ClassroomModeNetworkHandler() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLASSROOMMODENETWORKHANDLER
public:
    MCVAPI bool allowIncomingPacketId(class NetworkIdentifier const &, enum MinecraftPacketIds);
    MCVAPI void onWebsocketRequest(std::string const &, std::string const &, class std::function<void (void)>);
#endif
    MCAPI ClassroomModeNetworkHandler(bool);

//private:
    MCAPI void _connect(std::string const &);

private:


};