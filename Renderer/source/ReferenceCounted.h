#pragma once

#include "stdafx.h"

using namespace irr;
using namespace System;
using namespace IrrlichtLime::Core;

namespace IrrlichtLime {

public ref class ReferenceCounted : IEquatable<ReferenceCounted^>
{
public:

	static bool operator == (ReferenceCounted^ v1, ReferenceCounted^ v2);
	static bool operator != (ReferenceCounted^ v1, ReferenceCounted^ v2);

	virtual bool Equals(ReferenceCounted^ other);
	virtual bool Equals(Object^ other) override;

	virtual int GetHashCode() override;

	bool Drop();
	void Grab();

	property String^ DebugName { String^ get(); }
	property int ReferenceCount { int get(); }

internal:

	ReferenceCounted(irr::IReferenceCounted* referenceCounted_or_null);

	irr::IReferenceCounted* m_ReferenceCounted;
};

} // end namespace IrrlichtLime