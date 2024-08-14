// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "AssetTypeActions_Base.h"
#include <HeightMapVolumeDataFactory.h>   

class FHeightMapVolumeDataTypeAction : public FAssetTypeActions_Base
{
public:
    FHeightMapVolumeDataTypeAction(EAssetTypeCategories::Type InAssetCategory);

    // IAssetTypeActions interface
    virtual FText GetName() const override;
    virtual FColor GetTypeColor() const override;
    virtual UClass* GetSupportedClass() const override;
    virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;
    virtual uint32 GetCategories() override;
    // End of IAssetTypeActions interface

private:
    EAssetTypeCategories::Type WorldScapeAssetCategory;
};
