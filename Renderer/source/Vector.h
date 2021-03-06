#pragma once

#if defined(_REFCLASS_) || defined(_WRAPCLASS_) || defined(_WRAPTYPE_)
#error _REFCLASS_, _WRAPCLASS_ and _WRAPTYPE_ must be undefined for this file to process.
#endif

#include "stdafx.h"

using namespace irr;
using namespace System;

using core::ROUNDING_ERROR_f32;
using core::RADTODEG64;
using core::DEGTORAD64;

namespace IrrlichtLime {
namespace Core {

#define _REFCLASS_ Vector2Df
#define _WRAPCLASS_ core::vector2df
#define _WRAPTYPE_ float
#include "Vector2D.h"
#undef _WRAPTYPE_
#undef _WRAPCLASS_
#undef _REFCLASS_

#define _REFCLASS_ Vector2Dd
#define _WRAPCLASS_ core::vector2d<double>
#define _WRAPTYPE_ double
#include "Vector2D.h"
#undef _WRAPTYPE_
#undef _WRAPCLASS_
#undef _REFCLASS_

#define _REFCLASS_ Vector2Di
#define _WRAPCLASS_ core::vector2di
#define _WRAPTYPE_ int
#include "Vector2D.h"
#undef _WRAPTYPE_
#undef _WRAPCLASS_
#undef _REFCLASS_

#define _REFCLASS_ Vector3Df
#define _WRAPCLASS_ core::vector3df
#define _WRAPTYPE_ float
#include "Vector3D.h"
#undef _WRAPTYPE_
#undef _WRAPCLASS_
#undef _REFCLASS_

#define _REFCLASS_ Vector3Dd
#define _WRAPCLASS_ core::vector3d<double>
#define _WRAPTYPE_ double
#include "Vector3D.h"
#undef _WRAPTYPE_
#undef _WRAPCLASS_
#undef _REFCLASS_

#define _REFCLASS_ Vector3Di
#define _WRAPCLASS_ core::vector3di
#define _WRAPTYPE_ int
#define _WRAPTYPE_INT_	//we have a special implementation for vectors with integers
#include "Vector3D.h"
#undef _WRAPTYPE_INT_
#undef _WRAPTYPE_
#undef _WRAPCLASS_
#undef _REFCLASS_

} // end namespace Core
} // end namespace IrrlichtLime