#pragma once

#include "stdafx.h"

using namespace irr;
using namespace scene;
using namespace System;

namespace IrrlichtLime {
namespace Scene {

public enum class AnimatedMeshType
{
	Unknown = EAMT_UNKNOWN,
	MD2 = EAMT_MD2,
	MD3 = EAMT_MD3,
	OBJ = EAMT_OBJ,
	BSP = EAMT_BSP,
	_3DS = EAMT_3DS,
	MY3D = EAMT_MY3D,
	LMTS = EAMT_LMTS,
	CSM = EAMT_CSM,
	OCT = EAMT_OCT,
	MDL_HalfLife = EAMT_MDL_HALFLIFE,
	Skinned = EAMT_SKINNED,
	Static = EAMT_STATIC
};

} // end namespace Scene
} // end namespace IrrlichtLime