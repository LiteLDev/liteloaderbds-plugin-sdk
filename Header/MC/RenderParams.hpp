// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RenderParams {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RENDERPARAMS
public:
    class RenderParams& operator=(class RenderParams const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RENDERPARAMS
#endif
    MCAPI RenderParams(class RenderParams const &);
    MCAPI RenderParams(class RenderParams &&);
    MCAPI RenderParams();
    MCAPI class Actor * getActorTarget(enum FilterSubject) const;
    MCAPI class RenderParams & init(class BaseActorRenderContext *, class Actor *, class AnimationComponent *, class MolangVariableMap *, class std::shared_ptr<class DataDrivenModel>, float, float);
    MCAPI class RenderParams & operator=(class RenderParams &&);
    MCAPI float & operator[](unsigned __int64);
    MCAPI ~RenderParams();
    MCAPI static class RenderParams & getRenderParams(class Actor &);



};