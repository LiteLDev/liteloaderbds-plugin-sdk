// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BushBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FlowerBlock : public BushBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOWERBLOCK
public:
    class FlowerBlock& operator=(class FlowerBlock const &) = delete;
    FlowerBlock(class FlowerBlock const &) = delete;
    FlowerBlock() = delete;
#endif


public:
    /*0*/ virtual ~FlowerBlock();
    /*8*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /*10*/ virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*18*/ virtual bool isSolid() const;
    /*19*/ virtual void __unk_vfn_19();
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual bool canContainLiquid() const;
    /*72*/ virtual void __unk_vfn_72();
    /*79*/ virtual void __unk_vfn_79();
    /*83*/ virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum FertilizerType) const;
    /*85*/ virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*89*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*90*/ virtual bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /*100*/ virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /*104*/ virtual void __unk_vfn_104();
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*134*/ virtual std::string buildDescriptionId(class Block const &) const;
    /*135*/ virtual bool isAuxValueRelevantForPicking() const;
    /*148*/ virtual void __unk_vfn_148();
    /*165*/ virtual void __unk_vfn_165();
    /*166*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /*173*/ virtual void _addHardCodedBlockComponents();
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*187*/ virtual void __unk_vfn_187();
    /*191*/ virtual enum BlockRenderLayer getRenderLayer() const;
    /*192*/ virtual enum BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /*198*/ virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /*199*/ virtual void __unk_vfn_199();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLOWERBLOCK
public:
#endif
    MCAPI FlowerBlock(std::string const &, int, enum FlowerBlock::Type, class Material const &);

//private:
    MCAPI bool _fertilizable(class BlockSource &, class BlockPos const &) const;

private:


};