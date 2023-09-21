/**
 * @file  SubChunk.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "SubChunkBrightnessStorage.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

class SubChunkBrightnessStorage {
public:
    struct LightPair {
        unsigned char blockLight : 4;
        unsigned char skyLight : 4;
    };
    std::array<unsigned char,2048> mLightValues;
};

#undef BEFORE_EXTRA

/**
 * @brief MC structure SubChunk.
 *
 */
struct SubChunk {

#define AFTER_EXTRA
// Add Member There
public:
    enum class SubChunkState : int {
        Invalid                    =-1,
        Normal                     = 0,
        IsLightingSystemSubChunk   = 1,
        NeedsRequest               = 2,
        ReceivedResponseFromServer = 3,
        ProcessingSubChunk         = 4,
        WaitingForCacheResponse    = 5,
        ProcessedSubChunk          = 6,
        RequestFinished            = 7,
    };
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNK
public:
    struct SubChunk& operator=(struct SubChunk const &) = delete;
    SubChunk(struct SubChunk const &) = delete;
#endif

public:
    /**
     * @symbol ??0SubChunk\@\@QEAA\@PEBVBlock\@\@_N1AEAVSpinLock\@\@C\@Z
     */
    MCAPI SubChunk(class Block const *, bool, bool, class SpinLock &, signed char);
    /**
     * @symbol ??0SubChunk\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI SubChunk(struct SubChunk &&);
    /**
     * @symbol ??0SubChunk\@\@QEAA\@XZ
     */
    MCAPI SubChunk();
    /**
     * @symbol ?deserialize\@SubChunk\@\@QEAAXAEAVIDataInput\@\@AEBVBlockPalette\@\@AEBVSubChunkPos\@\@V?$optional\@PEAUDeserializationChanges\@\@\@std\@\@\@Z
     */
    MCAPI void deserialize(class IDataInput &, class BlockPalette const &, class SubChunkPos const &, class std::optional<struct DeserializationChanges *>);
    /**
     * @symbol ?fetchBlocks\@SubChunk\@\@QEBAXAEBVBlockPos\@\@0FAEAVBlockVolume\@\@\@Z
     */
    MCAPI void fetchBlocks(class BlockPos const &, class BlockPos const &, short, class BlockVolume &) const;
    /**
     * @symbol ?fetchBlocksInBox\@SubChunk\@\@QEBAXAEBVBlockPos\@\@AEBVBoundingBox\@\@AEBV?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@AEAV?$vector\@V?$BlockDataFetchResult\@VBlock\@\@\@\@V?$allocator\@V?$BlockDataFetchResult\@VBlock\@\@\@\@\@std\@\@\@5\@\@Z
     */
    MCAPI void fetchBlocksInBox(class BlockPos const &, class BoundingBox const &, class std::function<bool (class Block const &)> const &, std::vector<class BlockDataFetchResult<class Block>> &) const;
    /**
     * @symbol ?fetchBlocksInCylinder\@SubChunk\@\@QEBAXAEBVBlockPos\@\@0IIAEBV?$function\@$$A6A_NAEBVBlock\@\@\@Z\@std\@\@AEAV?$vector\@V?$BlockDataFetchResult\@VBlock\@\@\@\@V?$allocator\@V?$BlockDataFetchResult\@VBlock\@\@\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI void fetchBlocksInCylinder(class BlockPos const &, class BlockPos const &, unsigned int, unsigned int, class std::function<bool (class Block const &)> const &, std::vector<class BlockDataFetchResult<class Block>> &) const;
    /**
     * @symbol ?getLight\@SubChunk\@\@QEBA?AULightPair\@SubChunkBrightnessStorage\@\@G\@Z
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair getLight(unsigned short) const;
    /**
     * @symbol ?getSubChunkState\@SubChunk\@\@QEBA?AW4SubChunkState\@1\@XZ
     */
    MCAPI enum class SubChunk::SubChunkState getSubChunkState() const;
    /**
     * @symbol ?initialize\@SubChunk\@\@QEAAXPEBVBlock\@\@_N1AEAVSpinLock\@\@C\@Z
     */
    MCAPI void initialize(class Block const *, bool, bool, class SpinLock &, signed char);
    /**
     * @symbol ?isPaletteUniform\@SubChunk\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool isPaletteUniform(class Block const &) const;
    /**
     * @symbol ?isUniform\@SubChunk\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool isUniform(class Block const &) const;
    /**
     * @symbol ?likelyHasNonUniformBlockLight\@SubChunk\@\@QEBA_NXZ
     */
    MCAPI bool likelyHasNonUniformBlockLight() const;
    /**
     * @symbol ?needsInitLighting\@SubChunk\@\@QEBA_NXZ
     */
    MCAPI bool needsInitLighting() const;
    /**
     * @symbol ??4SubChunk\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct SubChunk & operator=(struct SubChunk &&);
    /**
     * @symbol ?prune\@SubChunk\@\@QEAAXW4PruneType\@SubChunkStorageUnit\@\@\@Z
     */
    MCAPI void prune(enum class SubChunkStorageUnit::PruneType);
    /**
     * @symbol ?recalculateHash\@SubChunk\@\@QEAAX_N\@Z
     */
    MCAPI void recalculateHash(bool);
    /**
     * @symbol ?recalculateHashAndSerialize\@SubChunk\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCAPI std::string recalculateHashAndSerialize(bool);
    /**
     * @symbol ?reset\@SubChunk\@\@QEAAXPEBVBlock\@\@_N1\@Z
     */
    MCAPI void reset(class Block const *, bool, bool);
    /**
     * @symbol ?safeToModify\@SubChunk\@\@QEBA_NXZ
     */
    MCAPI bool safeToModify() const;
    /**
     * @symbol ?serialize\@SubChunk\@\@QEBAXAEAVIDataOutput\@\@_N\@Z
     */
    MCAPI void serialize(class IDataOutput &, bool) const;
    /**
     * @symbol ?setAllIsMaxSkyLight\@SubChunk\@\@QEAAXXZ
     */
    MCAPI void setAllIsMaxSkyLight();
    /**
     * @symbol ?setAllIsNoSkyLight\@SubChunk\@\@QEAAXXZ
     */
    MCAPI void setAllIsNoSkyLight();
    /**
     * @symbol ?setBlockLight\@SubChunk\@\@QEAAXGE\@Z
     */
    MCAPI void setBlockLight(unsigned short, unsigned char);
    /**
     * @symbol ?setFromBlockVolume\@SubChunk\@\@QEAAXAEBVBlockVolume\@\@F\@Z
     */
    MCAPI void setFromBlockVolume(class BlockVolume const &, short);
    /**
     * @symbol ?setNeedsClientLighting\@SubChunk\@\@QEAAX_N\@Z
     */
    MCAPI void setNeedsClientLighting(bool);
    /**
     * @symbol ?setNeedsInitLighting\@SubChunk\@\@QEAAX_N\@Z
     */
    MCAPI void setNeedsInitLighting(bool);
    /**
     * @symbol ?setSkyLight\@SubChunk\@\@QEAAXGE\@Z
     */
    MCAPI void setSkyLight(unsigned short, unsigned char);
    /**
     * @symbol ??1SubChunk\@\@QEAA\@XZ
     */
    MCAPI ~SubChunk();

//protected:
    /**
     * @symbol ?_createBlockLightStorage\@SubChunk\@\@IEAAXXZ
     */
    MCAPI void _createBlockLightStorage();
    /**
     * @symbol ?_replaceBlocks\@SubChunk\@\@IEAAXEV?$unique_ptr\@V?$SubChunkStorage\@VBlock\@\@\@\@U?$default_delete\@V?$SubChunkStorage\@VBlock\@\@\@\@\@std\@\@\@std\@\@AEAV?$LockGuard\@VSpinLock\@\@\@Threading\@Bedrock\@\@\@Z
     */
    MCAPI void _replaceBlocks(unsigned char, std::unique_ptr<class SubChunkStorage<class Block>>, class Bedrock::Threading::LockGuard<class SpinLock> &);
    /**
     * @symbol ?_resetLight\@SubChunk\@\@IEAAX_N0\@Z
     */
    MCAPI void _resetLight(bool, bool);
    /**
     * @symbol ?_setBlock\@SubChunk\@\@IEAAXEGAEBVBlock\@\@\@Z
     */
    MCAPI void _setBlock(unsigned char, unsigned short, class Block const &);

};