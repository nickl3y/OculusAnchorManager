// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "CoreMinimal.h"
#include "IOculusXREditorModule.h"
#include "Modules/ModuleInterface.h"
#include "IDetailCustomization.h"
#include "Input/Reply.h"
#include "Layout/Visibility.h"

class FToolBarBuilder;
class FMenuBuilder;

#define OCULUS_EDITOR_MODULE_NAME "OculusXREditor"

enum class ECheckBoxState : uint8;

class FOculusXREditorModule : public IOculusXREditorModule
{
public:
	FOculusXREditorModule()
		: bModuleValid(false){};

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	virtual void PostLoadCallback() override;

	void RegisterSettings();
	void UnregisterSettings();

	void PluginOpenSetupToolWindow();
	FReply PluginClickFn(bool text);

	void PluginOpenPlatWindow();

	void ToggleOpenXRRuntime();

	void CreateSESSubMenus(FMenuBuilder& MenuBuilder);
	void LaunchSESGameRoom();
	void LaunchSESLivingRoom();
	void LaunchSESBedroom();
	void StopSESServer();

public:
	static const FName OculusPlatToolTabName;

private:
	void AddToolbarExtension(FToolBarBuilder& Builder);
	TSharedRef<SWidget> CreateToolbarEntryMenu(TSharedPtr<class FUICommandList> Commands);
	TSharedRef<SWidget> CreateXrSimToolbarEntryMenu(TSharedPtr<class FUICommandList> Commands);
	void AddMenuExtension(FMenuBuilder& Builder);

	TSharedRef<class SDockTab> OnSpawnPlatToolTab(const class FSpawnTabArgs& SpawnTabArgs);

private:
	TSharedPtr<class FUICommandList> PluginCommands;
	bool bModuleValid;
};

class IDetailLayoutBuilder;

class FOculusXRHMDSettingsDetailsCustomization : public IDetailCustomization
{
public:
	/** Makes a new instance of this detail layout class for a specific detail view requesting it */
	static TSharedRef<IDetailCustomization> MakeInstance();

	// IDetailCustomization interface
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailLayout) override;
	// End of IDetailCustomization interface

	EVisibility GetContextualPassthroughWarningVisibility() const;

	FReply PluginClickPerfFn(bool text);
	FReply PluginClickPlatFn(bool text);
	FReply DisableEngineSplash(bool text);
};
