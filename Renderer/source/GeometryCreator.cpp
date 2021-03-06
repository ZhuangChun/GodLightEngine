#include "stdafx.h"
#include "GeometryCreator.h"
#include "Image.h"
#include "Mesh.h"
#include "ReferenceCounted.h"
#include "VideoDriver.h"

using namespace irr;
using namespace System;

namespace IrrlichtLime {
namespace Scene {

GeometryCreator^ GeometryCreator::Wrap(scene::IGeometryCreator* ref)
{
	if (ref == nullptr)
		return nullptr;

	return gcnew GeometryCreator(ref);
}

GeometryCreator::GeometryCreator(scene::IGeometryCreator* ref)
	: ReferenceCounted(ref)
{
	LIME_ASSERT(ref != nullptr);
	m_GeometryCreator = ref;
}

Mesh^ GeometryCreator::CreateArrowMesh(int cylinderTesselation, int coneTesselation, float arrowHeight, float cylinderHeight, float cylinderWidth,
	float coneWidth, Video::Color cylinderColor, Video::Color coneColor)
{
	LIME_ASSERT(cylinderTesselation > 0);
	LIME_ASSERT(coneTesselation > 0);
	LIME_ASSERT(arrowHeight > 0.0f);
	LIME_ASSERT(arrowHeight > cylinderHeight);
	LIME_ASSERT(cylinderHeight > 0.0f);
	LIME_ASSERT(cylinderWidth > 0.0f);
	LIME_ASSERT(coneWidth > 0.0f);

	scene::IMesh* m = m_GeometryCreator->createArrowMesh(
		cylinderTesselation,
		coneTesselation,
		arrowHeight,
		cylinderHeight,
		cylinderWidth,
		coneWidth,
		cylinderColor,
		coneColor);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateArrowMesh(int cylinderTesselation, int coneTesselation, float arrowHeight, float cylinderHeight, float cylinderWidth,
	float coneWidth, Video::Color arrowColor)
{
	LIME_ASSERT(cylinderTesselation > 0);
	LIME_ASSERT(coneTesselation > 0);
	LIME_ASSERT(arrowHeight > 0.0f);
	LIME_ASSERT(arrowHeight > cylinderHeight);
	LIME_ASSERT(cylinderHeight > 0.0f);
	LIME_ASSERT(cylinderWidth > 0.0f);
	LIME_ASSERT(coneWidth > 0.0f);

	scene::IMesh* m = m_GeometryCreator->createArrowMesh(
		cylinderTesselation,
		coneTesselation,
		arrowHeight,
		cylinderHeight,
		cylinderWidth,
		coneWidth,
		arrowColor,
		arrowColor);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateArrowMesh(int cylinderTesselation, int coneTesselation, float arrowHeight, float cylinderHeight, float cylinderWidth,
	float coneWidth)
{
	LIME_ASSERT(cylinderTesselation > 0);
	LIME_ASSERT(coneTesselation > 0);
	LIME_ASSERT(arrowHeight > 0.0f);
	LIME_ASSERT(arrowHeight > cylinderHeight);
	LIME_ASSERT(cylinderHeight > 0.0f);
	LIME_ASSERT(cylinderWidth > 0.0f);
	LIME_ASSERT(coneWidth > 0.0f);

	scene::IMesh* m = m_GeometryCreator->createArrowMesh(
		cylinderTesselation,
		coneTesselation,
		arrowHeight,
		cylinderHeight,
		cylinderWidth,
		coneWidth);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateArrowMesh(int cylinderTesselation, int coneTesselation, float arrowHeight, float cylinderHeight)
{
	LIME_ASSERT(cylinderTesselation > 0);
	LIME_ASSERT(coneTesselation > 0);
	LIME_ASSERT(arrowHeight > 0.0f);
	LIME_ASSERT(arrowHeight > cylinderHeight);
	LIME_ASSERT(cylinderHeight > 0.0f);

	scene::IMesh* m = m_GeometryCreator->createArrowMesh(
		cylinderTesselation,
		coneTesselation,
		arrowHeight,
		cylinderHeight);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateArrowMesh(int cylinderTesselation, int coneTesselation)
{
	LIME_ASSERT(cylinderTesselation > 0);
	LIME_ASSERT(coneTesselation > 0);

	scene::IMesh* m = m_GeometryCreator->createArrowMesh(
		cylinderTesselation,
		coneTesselation);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateArrowMesh()
{
	scene::IMesh* m = m_GeometryCreator->createArrowMesh();
	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateConeMesh(float radius, float length, int tesselation, Video::Color topColor, Video::Color bottomColor, float oblique)
{
	LIME_ASSERT(radius > 0.0f);
	LIME_ASSERT(length > 0.0f);
	LIME_ASSERT(tesselation > 0);

	scene::IMesh* m = m_GeometryCreator->createConeMesh(
		radius,
		length,
		tesselation,
		topColor,
		bottomColor,
		oblique);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateConeMesh(float radius, float length, int tesselation, Video::Color topColor, Video::Color bottomColor)
{
	LIME_ASSERT(radius > 0.0f);
	LIME_ASSERT(length > 0.0f);
	LIME_ASSERT(tesselation > 0);

	scene::IMesh* m = m_GeometryCreator->createConeMesh(
		radius,
		length,
		tesselation,
		topColor,
		bottomColor);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateConeMesh(float radius, float length, int tesselation, Video::Color coneColor)
{
	LIME_ASSERT(radius > 0.0f);
	LIME_ASSERT(length > 0.0f);
	LIME_ASSERT(tesselation > 0);

	scene::IMesh* m = m_GeometryCreator->createConeMesh(
		radius,
		length,
		tesselation,
		coneColor,
		coneColor);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateConeMesh(float radius, float length, int tesselation)
{
	LIME_ASSERT(radius > 0.0f);
	LIME_ASSERT(length > 0.0f);
	LIME_ASSERT(tesselation > 0);

	scene::IMesh* m = m_GeometryCreator->createConeMesh(
		radius,
		length,
		tesselation);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateCubeMesh(Vector3Df size)
{
	scene::IMesh* m = m_GeometryCreator->createCubeMesh(
		size);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateCubeMesh()
{
	scene::IMesh* m = m_GeometryCreator->createCubeMesh();
	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateCylinderMesh(float radius, float length, int tesselation, Video::Color color, bool closeTop, float oblique)
{
	LIME_ASSERT(radius > 0.0f);
	LIME_ASSERT(length > 0.0f);
	LIME_ASSERT(tesselation > 0);

	scene::IMesh* m = m_GeometryCreator->createCylinderMesh(
		radius,
		length,
		tesselation,
		color,
		closeTop,
		oblique);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateCylinderMesh(float radius, float length, int tesselation, Video::Color color, bool closeTop)
{
	LIME_ASSERT(radius > 0.0f);
	LIME_ASSERT(length > 0.0f);
	LIME_ASSERT(tesselation > 0);

	scene::IMesh* m = m_GeometryCreator->createCylinderMesh(
		radius,
		length,
		tesselation,
		color,
		closeTop);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateCylinderMesh(float radius, float length, int tesselation, Video::Color color)
{
	LIME_ASSERT(radius > 0.0f);
	LIME_ASSERT(length > 0.0f);
	LIME_ASSERT(tesselation > 0);

	scene::IMesh* m = m_GeometryCreator->createCylinderMesh(
		radius,
		length,
		tesselation,
		color);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateCylinderMesh(float radius, float length, int tesselation)
{
	LIME_ASSERT(radius > 0.0f);
	LIME_ASSERT(length > 0.0f);
	LIME_ASSERT(tesselation > 0);

	scene::IMesh* m = m_GeometryCreator->createCylinderMesh(
		radius,
		length,
		tesselation);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateGeoplaneMesh(float radius, unsigned __int32 rows, unsigned __int32 columns)
{
	LIME_ASSERT(radius > 0.0f);
	LIME_ASSERT(rows > 0);
	LIME_ASSERT(columns > 0);

	scene::IMesh* m = m_GeometryCreator->createGeoplaneMesh(
		radius,
		rows,
		columns);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateHillPlaneMesh(Dimension2Df^ tileSize, Dimension2Di^ tileCount, Video::Material^ material, float hillHeight,
	Dimension2Df^ countHills, Dimension2Df^ textureRepeatCount)
{
	LIME_ASSERT(tileSize != nullptr);
	LIME_ASSERT(tileSize->Width > 0.0f);
	LIME_ASSERT(tileSize->Height > 0.0f);
	LIME_ASSERT(tileCount != nullptr);
	LIME_ASSERT(tileCount->Width > 0);
	LIME_ASSERT(tileCount->Height > 0);
	LIME_ASSERT(countHills != nullptr);
	LIME_ASSERT(countHills->Width >= 0.0f);
	LIME_ASSERT(countHills->Height >= 0.0f);
	LIME_ASSERT(textureRepeatCount != nullptr);
	LIME_ASSERT(textureRepeatCount->Width >= 0.0f);
	LIME_ASSERT(textureRepeatCount->Height >= 0.0f);

	scene::IMesh* m = m_GeometryCreator->createHillPlaneMesh(
		*tileSize->m_NativeValue,
		(core::dimension2du&)*tileCount->m_NativeValue,
		LIME_SAFEREF(material, m_NativeValue),
		hillHeight,
		*countHills->m_NativeValue,
		*textureRepeatCount->m_NativeValue);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreatePlaneMesh(Dimension2Df^ tileSize, Dimension2Di^ tileCount, Video::Material^ material, Dimension2Df^ textureRepeatCount)
{
	LIME_ASSERT(tileSize != nullptr);
	LIME_ASSERT(tileSize->Width > 0.0f);
	LIME_ASSERT(tileSize->Height > 0.0f);
	LIME_ASSERT(tileCount != nullptr);
	LIME_ASSERT(tileCount->Width > 0);
	LIME_ASSERT(tileCount->Height > 0);
	LIME_ASSERT(textureRepeatCount != nullptr);
	LIME_ASSERT(textureRepeatCount->Width >= 0.0f);
	LIME_ASSERT(textureRepeatCount->Height >= 0.0f);

	scene::IMesh* m = m_GeometryCreator->createPlaneMesh(
		*tileSize->m_NativeValue,
		(core::dimension2du&)*tileCount->m_NativeValue,
		LIME_SAFEREF(material, m_NativeValue),
		*textureRepeatCount->m_NativeValue);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreatePlaneMesh(Dimension2Df^ tileSize, Dimension2Di^ tileCount, Video::Material^ material)
{
	LIME_ASSERT(tileSize != nullptr);
	LIME_ASSERT(tileSize->Width > 0.0f);
	LIME_ASSERT(tileSize->Height > 0.0f);
	LIME_ASSERT(tileCount != nullptr);
	LIME_ASSERT(tileCount->Width > 0);
	LIME_ASSERT(tileCount->Height > 0);

	scene::IMesh* m = m_GeometryCreator->createPlaneMesh(
		*tileSize->m_NativeValue,
		(core::dimension2du&)*tileCount->m_NativeValue,
		LIME_SAFEREF(material, m_NativeValue));

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreatePlaneMesh(Dimension2Df^ tileSize, Dimension2Di^ tileCount)
{
	LIME_ASSERT(tileSize != nullptr);
	LIME_ASSERT(tileSize->Width > 0.0f);
	LIME_ASSERT(tileSize->Height > 0.0f);
	LIME_ASSERT(tileCount != nullptr);
	LIME_ASSERT(tileCount->Width > 0);
	LIME_ASSERT(tileCount->Height > 0);

	scene::IMesh* m = m_GeometryCreator->createPlaneMesh(
		*tileSize->m_NativeValue,
		(core::dimension2du&)*tileCount->m_NativeValue);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreatePlaneMesh(Dimension2Df^ tileSize)
{
	LIME_ASSERT(tileSize != nullptr);
	LIME_ASSERT(tileSize->Width > 0.0f);
	LIME_ASSERT(tileSize->Height > 0.0f);

	scene::IMesh* m = m_GeometryCreator->createPlaneMesh(
		*tileSize->m_NativeValue);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateSphereMesh(float radius, int polyCountX, int polyCountY)
{
	LIME_ASSERT(radius > 0.0f);
	LIME_ASSERT(polyCountX > 0);
	LIME_ASSERT(polyCountY > 0);

	scene::IMesh* m = m_GeometryCreator->createSphereMesh(
		radius,
		polyCountX,
		polyCountY);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateSphereMesh(float radius)
{
	LIME_ASSERT(radius > 0.0f);

	scene::IMesh* m = m_GeometryCreator->createSphereMesh(radius);
	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateSphereMesh()
{
	scene::IMesh* m = m_GeometryCreator->createSphereMesh();
	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateTerrainMesh(Video::Image^ texture, Video::Image^ heightmap, Dimension2Df^ stretchSize, float maxHeight,
	Video::VideoDriver^ driver, Dimension2Di^ defaultVertexBlockSize, bool debugBorders)
{
	LIME_ASSERT(texture != nullptr);
	LIME_ASSERT(heightmap != nullptr);
	LIME_ASSERT(stretchSize != nullptr);
	LIME_ASSERT(stretchSize->Width > 0.0f);
	LIME_ASSERT(stretchSize->Height > 0.0f);
	LIME_ASSERT(maxHeight >= 0.0f);
	LIME_ASSERT(driver != nullptr);
	LIME_ASSERT(defaultVertexBlockSize != nullptr);
	LIME_ASSERT(defaultVertexBlockSize->Width > 0);
	LIME_ASSERT(defaultVertexBlockSize->Height > 0);

	scene::IMesh* m = m_GeometryCreator->createTerrainMesh(
		LIME_SAFEREF(texture, m_Image),
		LIME_SAFEREF(heightmap, m_Image),
		*stretchSize->m_NativeValue,
		maxHeight,
		LIME_SAFEREF(driver, m_VideoDriver),
		(core::dimension2du&)*defaultVertexBlockSize->m_NativeValue,
		debugBorders);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateTerrainMesh(Video::Image^ texture, Video::Image^ heightmap, Dimension2Df^ stretchSize, float maxHeight,
	Video::VideoDriver^ driver, Dimension2Di^ defaultVertexBlockSize)
{
	LIME_ASSERT(texture != nullptr);
	LIME_ASSERT(heightmap != nullptr);
	LIME_ASSERT(stretchSize != nullptr);
	LIME_ASSERT(stretchSize->Width > 0.0f);
	LIME_ASSERT(stretchSize->Height > 0.0f);
	LIME_ASSERT(maxHeight >= 0.0f);
	LIME_ASSERT(driver != nullptr);
	LIME_ASSERT(defaultVertexBlockSize != nullptr);
	LIME_ASSERT(defaultVertexBlockSize->Width > 0);
	LIME_ASSERT(defaultVertexBlockSize->Height > 0);

	scene::IMesh* m = m_GeometryCreator->createTerrainMesh(
		LIME_SAFEREF(texture, m_Image),
		LIME_SAFEREF(heightmap, m_Image),
		*stretchSize->m_NativeValue,
		maxHeight,
		LIME_SAFEREF(driver, m_VideoDriver),
		(core::dimension2du&)*defaultVertexBlockSize->m_NativeValue);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateVolumeLightMesh(int subdivideU, int subdivideV, Video::Color footColor, Video::Color tailColor,
	float lightPointDistance, Vector3Df lightDimensions)
{
	LIME_ASSERT(subdivideU > 0);
	LIME_ASSERT(subdivideV > 0);
	LIME_ASSERT(lightPointDistance > 0.0f);
	LIME_ASSERT(lightDimensions.X > 0.0f);
	LIME_ASSERT(lightDimensions.Y > 0.0f);
	LIME_ASSERT(lightDimensions.Z > 0.0f);

	scene::IMesh* m = m_GeometryCreator->createVolumeLightMesh(
		subdivideU,
		subdivideV,
		footColor,
		tailColor,
		lightPointDistance,
		lightDimensions);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateVolumeLightMesh(int subdivideU, int subdivideV, Video::Color footColor, Video::Color tailColor,
	float lightPointDistance)
{
	LIME_ASSERT(subdivideU > 0);
	LIME_ASSERT(subdivideV > 0);
	LIME_ASSERT(lightPointDistance > 0.0f);

	scene::IMesh* m = m_GeometryCreator->createVolumeLightMesh(
		subdivideU,
		subdivideV,
		footColor,
		tailColor,
		lightPointDistance);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateVolumeLightMesh(int subdivideU, int subdivideV, Video::Color footColor, Video::Color tailColor)
{
	LIME_ASSERT(subdivideU > 0);
	LIME_ASSERT(subdivideV > 0);

	scene::IMesh* m = m_GeometryCreator->createVolumeLightMesh(
		subdivideU,
		subdivideV,
		footColor,
		tailColor);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateVolumeLightMesh(int subdivideU, int subdivideV)
{
	LIME_ASSERT(subdivideU > 0);
	LIME_ASSERT(subdivideV > 0);

	scene::IMesh* m = m_GeometryCreator->createVolumeLightMesh(
		subdivideU,
		subdivideV);

	return Mesh::Wrap(m);
}

Mesh^ GeometryCreator::CreateVolumeLightMesh()
{
	scene::IMesh* m = m_GeometryCreator->createVolumeLightMesh();
	return Mesh::Wrap(m);
}

} // end namespace Scene
} // end namespace IrrlichtLime