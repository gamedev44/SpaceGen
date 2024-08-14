// Copyright 2021 IOLACORP STUDIO. All Rights Reserved
#include "AssetTypeActions_Base.h"
#include <WorldScapeFoliagesAssetFactory.h>   

class FWorldScapeFoliagesAssetTypeAction : public FAssetTypeActions_Base
{
public:
    FWorldScapeFoliagesAssetTypeAction(EAssetTypeCategories::Type InAssetCategory);

    // IAssetTypeActions interface
    virtual FText GetName() const override;
    virtual FColor GetTypeColor() const override;
    virtual UClass* GetSupportedClass() const override;
    virtual uint32 GetCategories() override;
    // End of IAssetTypeActions interface

private:
    EAssetTypeCategories::Type WorldScapeAssetCategory;
};