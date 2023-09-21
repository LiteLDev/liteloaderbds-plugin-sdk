/**
 * @file  TerrainBurstReactionComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "LabTableReactionComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TerrainBurstReactionComponent.
 *
 */
class TerrainBurstReactionComponent : public LabTableReactionComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TERRAINBURSTREACTIONCOMPONENT
public:
    class TerrainBurstReactionComponent& operator=(class TerrainBurstReactionComponent const &) = delete;
    TerrainBurstReactionComponent(class TerrainBurstReactionComponent const &) = delete;
    TerrainBurstReactionComponent() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?_onEnd\@TerrainBurstReactionComponent\@\@UEAAXAEAVLabTableReaction\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onEnd(class LabTableReaction &, class BlockSource &);

};
