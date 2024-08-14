// Copyright 2021 IOLACORP STUDIO. All Rights Reserved


#include "EditorViewportClient.h"
#include "CoreMinimal.h"
#include "Math/Vector.h"


class WORLDSCAPEEDITOR_API WorldScapeEditorUtils
{
public:
	static FVector GetViewPortCameraLookAt(float Distance);
	static FVector GetViewPortCameraPosition();
	static bool IsInViewPort();
};


