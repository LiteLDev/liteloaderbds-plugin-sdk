/**
 * @file  Painting.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "HangingActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Painting.
 *
 */
class Painting : public HangingActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PAINTING
public:
    class Painting& operator=(class Painting const &) = delete;
    Painting(class Painting const &) = delete;
    Painting() = delete;
#endif

public:
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 19
     * @symbol ?remove\@Painting\@\@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 42
     * @symbol ?tryCreateAddActorPacket\@Painting\@\@UEAA?AV?$unique_ptr\@VAddActorBasePacket\@\@U?$default_delete\@VAddActorBasePacket\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /**
     * @vftbl 54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 68
     * @symbol ?getShadowRadius\@Painting\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl 81
     * @symbol ?isPickable\@Painting\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl 85
     * @symbol __unk_vfn_85
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl 92
     * @symbol __unk_vfn_92
     */
    virtual void __unk_vfn_92();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 198
     * @symbol __unk_vfn_198
     */
    virtual void __unk_vfn_198();
    /**
     * @vftbl 199
     * @symbol __unk_vfn_199
     */
    virtual void __unk_vfn_199();
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 239
     * @symbol ?readAdditionalSaveData\@Painting\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 240
     * @symbol ?addAdditionalSaveData\@Painting\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl 250
     * @symbol ?getWidth\@Painting\@\@UEBAHXZ
     */
    virtual int getWidth() const;
    /**
     * @vftbl 251
     * @symbol ?getHeight\@Painting\@\@UEBAHXZ
     */
    virtual int getHeight() const;
    /**
     * @vftbl 252
     * @symbol ?dropItem\@Painting\@\@UEAAXXZ
     */
    virtual void dropItem();
    /**
     * @vftbl 253
     * @symbol ?placeHangingEntity\@Painting\@\@UEAA_NAEAVBlockSource\@\@H\@Z
     */
    virtual bool placeHangingEntity(class BlockSource &, int);
    /**
     * @symbol ??0Painting\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Painting(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getCurrentMotive\@Painting\@\@QEBAAEBVMotive\@\@XZ
     */
    MCAPI class Motive const & getCurrentMotive() const;

};
