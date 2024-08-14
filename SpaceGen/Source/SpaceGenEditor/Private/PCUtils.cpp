// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "PCUtils.h"


FVector WorldScapeEditorUtils::GetViewPortCameraLookAt(float Distance) {
	if (IsValid(GEditor)) {
		if (GEditor->GetActiveViewport()) {
			FEditorViewportClient* Client = static_cast<FEditorViewportClient*>(GEditor->GetActiveViewport()->GetClient());
			if (Client)
			{
				FVector Position = Client->GetViewLocation();
				FRotator Rotation = Client->GetViewRotation();
				FVector ViewVector = Rotation.Vector();
				ViewVector.Normalize();

				return Position + ViewVector * Distance;
			}
		}
	}
	return FVector(0, 0, 0);
}

FVector WorldScapeEditorUtils::GetViewPortCameraPosition() {
	if (IsValid(GEditor)) {
		if (GEditor->GetActiveViewport()) {
			FEditorViewportClient* Client = static_cast<FEditorViewportClient*>(GEditor->GetActiveViewport()->GetClient());
			if (Client)
			{
				return Client->GetViewLocation();
			}
		}
	}
	return FVector(0, 0, 0);
}

bool WorldScapeEditorUtils::IsInViewPort() {

	if (IsValid(GEditor)) {
		if (GEditor->GetActiveViewport()) {
			if (GEditor->PlayWorld == NULL) {
				return true;
			}
		}
	}
	return false;
}
