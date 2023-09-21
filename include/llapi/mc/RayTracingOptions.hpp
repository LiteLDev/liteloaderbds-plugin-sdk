/**
 * @file  RayTracingOptions.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RayTracingOptions.
 *
 */
class RayTracingOptions {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAYTRACINGOPTIONS
public:
    class RayTracingOptions& operator=(class RayTracingOptions const &) = delete;
    RayTracingOptions(class RayTracingOptions const &) = delete;
    RayTracingOptions() = delete;
#endif

public:
    /**
     * @symbol ?PBR_TAG\@RayTracingOptions\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const PBR_TAG;
    /**
     * @symbol ?RAY_TRACING_TAG\@RayTracingOptions\@\@2V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@B
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>> const RAY_TRACING_TAG;

};
