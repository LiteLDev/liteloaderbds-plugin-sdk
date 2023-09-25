/**
 * @file  ActorIsRidingTest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorIsRidingTest.
 *
 */
class ActorIsRidingTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORISRIDINGTEST
public:
    class ActorIsRidingTest& operator=(class ActorIsRidingTest const &) = delete;
    ActorIsRidingTest(class ActorIsRidingTest const &) = delete;
    ActorIsRidingTest() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?setup\@ActorBoolPropertyTest\@\@UEAA_NAEBUDefinition\@FilterTest\@\@AEBUFilterInputs\@\@\@Z
     */
    virtual bool setup(struct FilterTest::Definition const &, struct FilterInputs const &);
    /**
     * @vftbl 2
     * @symbol ?evaluate\@ActorIsRidingTest\@\@UEBA_NAEBUFilterContext\@\@\@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl 3
     * @symbol ?finalizeParsedValue\@FilterTest\@\@UEAAXAEAVIWorldRegistriesProvider\@\@\@Z
     */
    virtual void finalizeParsedValue(class IWorldRegistriesProvider &);
    /**
     * @vftbl 4
     * @symbol ?getName\@ActorIsRidingTest\@\@UEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    virtual class std::basic_string_view<char, struct std::char_traits<char>> getName() const;
    /**
     * @vftbl 5
     * @symbol ?_serializeDomain\@ActorBoolPropertyTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeDomain() const;
    /**
     * @vftbl 6
     * @symbol ?_serializeValue\@ActorBoolPropertyTest\@\@MEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value _serializeValue() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORISRIDINGTEST
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorIsRidingTest();
#endif

};
