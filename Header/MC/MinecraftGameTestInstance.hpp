// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MinecraftGameTestInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTGAMETESTINSTANCE
public:
    class MinecraftGameTestInstance& operator=(class MinecraftGameTestInstance const &) = delete;
    MinecraftGameTestInstance(class MinecraftGameTestInstance const &) = delete;
    MinecraftGameTestInstance() = delete;
#endif


public:
    /*0*/ virtual ~MinecraftGameTestInstance();
    /*1*/ virtual void initialize();
    /*2*/ virtual bool hasStructureBlock() const;
    /*3*/ virtual void clearStructure();
    /*4*/ virtual void spawnStructure();
    /*5*/ virtual class std::optional<class AABB> getStructureBounds() const;
    /*6*/ virtual class std::optional<class Vec3> getStructureBlockPivot() const;
    /*7*/ virtual class std::optional<class Vec3> getStructureBlockPosPivot() const;
    /*8*/ virtual class BoundingBox getStructureBoundingBox() const;
    /*9*/ virtual class AutomaticID<class Dimension, int> getStructureDimension() const;
    /*10*/ virtual int _getLevelTick() const;
    /*11*/ virtual bool _isTestReady();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual class BlockSource & getBlockSource() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECRAFTGAMETESTINSTANCE
public:
#endif
    MCAPI MinecraftGameTestInstance(class gametest::BaseGameTestFunction const &, std::unique_ptr<class gametest::IGameTestHelperProvider>, class Dimension &);


};