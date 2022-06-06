// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "ConnectionRequest.hpp"
#undef BEFORE_EXTRA

class LoginPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
int32_t mClientNetworkVersion;
std::unique_ptr<ConnectionRequest> mConnectionRequest;
#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOGINPACKET
public:
    class LoginPacket& operator=(class LoginPacket const &) = delete;
    LoginPacket(class LoginPacket const &) = delete;
#endif


public:
    /*0*/ virtual ~LoginPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*5*/ virtual bool disallowBatching() const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOGINPACKET
public:
#endif
    MCAPI LoginPacket();


};