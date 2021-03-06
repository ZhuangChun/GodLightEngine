#pragma once

#include "stdafx.h"

using namespace irr;
using namespace System;

namespace IrrlichtLime {
namespace Video {

ref class MaterialLayer;
ref class Texture;

public ref class Material : Lime::NativeValue<video::SMaterial>, public IEquatable<Material^>
{
public:

	static bool operator == (Material^ v1, Material^ v2)
	{
		bool v1n = Object::ReferenceEquals(v1, nullptr);
		bool v2n = Object::ReferenceEquals(v2, nullptr);

		if (v1n && v2n)
			return true;

		if (v1n || v2n)
			return false;

		return (*v1->m_NativeValue) == (*v2->m_NativeValue);
	}

	static bool operator != (Material^ v1, Material^ v2)
	{
		return !(v1 == v2);
	}

	static property Material^ Identity { Material^ get() { return gcnew Material(); } }
	static property Material^ IdentityNoLighting { Material^ get() { Material^ m = gcnew Material(); m->Lighting = false; return m; } }
	static property Material^ IdentityRedWireframe { Material^ get() { Material^ m = gcnew Material(); m->EmissiveColor = Color(255, 0, 0); m->ZBuffer = ComparisonFunc::Always; m->Wireframe = true; return m; } }

	static property int MaxTextures { int get() { return video::MATERIAL_MAX_TEXTURES; } }

	static float PackTextureBlendFunc(BlendFactor srcFact, BlendFactor dstFact, ModulateFunc modulate, AlphaSource alphaSource);
	static float PackTextureBlendFuncSeparate(BlendFactor srcRGBFact, BlendFactor dstRGBFact, BlendFactor srcAlphaFact, BlendFactor dstAlphaFact, ModulateFunc modulate, AlphaSource alphaSource);
	static void UnpackTextureBlendFunc([Out]BlendFactor% srcFact, [Out]BlendFactor% dstFact, [Out]ModulateFunc% modulate, [Out]AlphaSource% alphaSource, float param);
	static void UnpackTextureBlendFuncSeparate([Out]BlendFactor% srcRGBFact, [Out]BlendFactor% dstRGBFact, [Out]BlendFactor% srcAlphaFact, [Out]BlendFactor% dstAlphaFact, [Out]ModulateFunc% modulate, [Out]AlphaSource% alphaSource, float param);

	Material();
	Material(Material^ other);

	bool GetFlag(MaterialFlag flag);
	Texture^ GetTexture(int index);
	Matrix^ GetTextureMatrix(int index);
	void SetFlag(MaterialFlag flag, bool value);
	void SetTexture(int index, Texture^ tex);
	void SetTextureMatrix(int index, Matrix^ mat);

	property Video::MaterialType Type { Video::MaterialType get(); void set(Video::MaterialType value); }
	property Color AmbientColor { Color get(); void set(Color value); }
	property Video::BlendOperation BlendOperation { Video::BlendOperation get(); void set(Video::BlendOperation value); }
	property Video::PolygonOffset PolygonOffsetDirection { Video::PolygonOffset get(); void set(Video::PolygonOffset value); }
	property unsigned char PolygonOffsetFactor { unsigned char get(); void set(unsigned char value); }
	property Color DiffuseColor { Color get(); void set(Color value); }
	property Color EmissiveColor { Color get(); void set(Color value); }
	property Color SpecularColor { Color get(); void set(Color value); }
	property float Shininess { float get(); void set(float value); }
	property float MaterialTypeParam { float get(); void set(float value); }
	property float MaterialTypeParam2 { float get(); void set(float value); }
	property float Thickness { float get(); void set(float value); }
	property ComparisonFunc ZBuffer { ComparisonFunc get(); void set(ComparisonFunc value); }
	property AntiAliasingMode AntiAliasing { AntiAliasingMode get(); void set(AntiAliasingMode value); }
	property ColorPlane ColorMask { ColorPlane get(); void set(ColorPlane value); }
	property Video::ColorMaterial ColorMaterial { Video::ColorMaterial get(); void set(Video::ColorMaterial value); }
	property bool Wireframe { bool get(); void set(bool value); }
	property bool PointCloud { bool get(); void set(bool value); }
	property bool GouraudShading { bool get(); void set(bool value); }
	property bool Lighting { bool get(); void set(bool value); }
	property bool ZWrite { bool get(); void set(bool value); }
	property bool BackfaceCulling { bool get(); void set(bool value); }
	property bool FrontfaceCulling { bool get(); void set(bool value); }
	property bool Fog { bool get(); void set(bool value); }
	property bool NormalizeNormals { bool get(); void set(bool value); }
	property bool Mipmaps { bool get(); void set(bool value); }
	property bool Transparent { bool get(); }
	property Video::ZWriteFineControl ZWriteFineControl { Video::ZWriteFineControl get(); void set(Video::ZWriteFineControl value); }

	property List<MaterialLayer^>^ Layer { List<MaterialLayer^>^ get(); }

	virtual bool Equals(Object^ other) override;
	virtual bool Equals(Material^ other);
	virtual String^ ToString() override;

internal:

	static Material^ Wrap(video::SMaterial* ref);
	Material(video::SMaterial* ref);
	Material(const video::SMaterial& copy);
};

} // end namespace Video
} // end namespace IrrlichtLime