// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "LodData.h"



LodData::LodData(TArray<FVector> pVertices, TArray<FLinearColor> pVertexColors, TArray<FVector> pNormals,TArray<FWorldScapeMeshTangent> pTangents, TArray<FVector2D> pUV)
{
	Normals.Append(pNormals);
	VertexColors.Append(pVertexColors);
	Vertices.Append(pVertices);
	Tangents.Append(pTangents);
	UV.Append(pUV);
}


LodData::LodData()
{
	Normals.Empty();
	VertexColors.Empty();
	Vertices.Empty();
	Tangents.Empty();
	UV.Empty();
}

void LodData::CleanData()
{
	Normals.Empty();
	VertexColors.Empty();
	Vertices.Empty();
	Tangents.Empty();
	UV.Empty();
}

FQueueVegetation::FQueueVegetation()
{
	
}
