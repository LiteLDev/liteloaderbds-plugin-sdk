// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MovingBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVINGBLOCKACTOR
public:
    class MovingBlockActor& operator=(class MovingBlockActor const &) = delete;
    MovingBlockActor(class MovingBlockActor const &) = delete;
    MovingBlockActor() = delete;
#endif

public:
    /*0*/ virtual ~MovingBlockActor();
    /*1*/ virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /*2*/ virtual bool save(class CompoundTag &) const;
    /*4*/ virtual void saveBlockData(class CompoundTag &, class BlockSource &) const;
    /*5*/ virtual void loadBlockData(class CompoundTag const &, class BlockSource &, class DataLoadHelper &);
    /*6*/ virtual void onCustomTagLoadDone(class BlockSource &);
    /*7*/ virtual void tick(class BlockSource &);
    /*8*/ virtual void onChanged(class BlockSource &);
    /*11*/ virtual void onPlace(class BlockSource &);
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void onRemoved(class BlockSource &);
    /*14*/ virtual void triggerEvent(int, int);
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual float getShadowRadius(class BlockSource &) const;
    /*19*/ virtual class BlockActor * getCrackEntity(class BlockSource &, class BlockPos const &);
    /*27*/ virtual class PistonBlockActor * getOwningPiston(class BlockSource &);
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual float getDeletionDelayTimeSeconds() const;
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /*35*/ virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /*36*/ virtual bool _playerCanUpdate(class Player const &) const;
    MCAPI MovingBlockActor(class BlockPos const &);
    MCAPI class std::shared_ptr<class BlockActor> aquireBlockEntity();
    MCAPI class AABB const & getCollisionShape() const;
    MCAPI class Vec3 getDrawPos(class IConstBlockSource const &, float) const;
    MCAPI class Block const & getExtraBlock();
    MCAPI class Block const & getMovingBlock() const;
    MCAPI void moveCollidedEntities(class PistonBlockActor &, class BlockSource &);
    MCAPI void registerPiston(class BlockSource const &, class BlockPos const &);
    MCAPI void setBlock(class Block const &);
    MCAPI void setBlockEntity(class std::shared_ptr<class BlockActor>);
    MCAPI void setCollisionShape(class AABB const &);
    MCAPI void setExtraBlock(class Block const &);

protected:

private:

};