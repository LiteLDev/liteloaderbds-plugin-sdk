/**
 * @file  StructureTemplateDataRequestPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureTemplateDataRequestPacket.
 *
 */
class StructureTemplateDataRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATEDATAREQUESTPACKET
public:
    class StructureTemplateDataRequestPacket& operator=(class StructureTemplateDataRequestPacket const &) = delete;
    StructureTemplateDataRequestPacket(class StructureTemplateDataRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StructureTemplateDataRequestPacket();
    /**
     * @hash   -530104114
     * @vftbl  1
     * @symbol  ?getId\@StructureTemplateDataRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1792307333
     * @vftbl  2
     * @symbol  ?getName\@StructureTemplateDataRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1791938580
     * @vftbl  3
     * @symbol  ?write\@StructureTemplateDataRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -150689220
     * @vftbl  6
     * @symbol  ?_read\@StructureTemplateDataRequestPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1795304356
     * @symbol  ??0StructureTemplateDataRequestPacket\@\@QEAA\@XZ
     */
    MCAPI StructureTemplateDataRequestPacket();

};