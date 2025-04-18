// SPDX-FileCopyrightText: 2002-2025 PCSX2 Dev Team
// SPDX-License-Identifier: GPL-3.0+

#pragma once

#include <QtWidgets/QWidget>

#include "ui_EmulationSettingsWidget.h"

class SettingsWindow;

class EmulationSettingsWidget : public QWidget
{
	Q_OBJECT

public:
	EmulationSettingsWidget(SettingsWindow* dialog, QWidget* parent);
	~EmulationSettingsWidget();

private Q_SLOTS:
	void onOptimalFramePacingChanged();

private:
	void initializeSpeedCombo(QComboBox* cb, const char* section, const char* key, float default_value);
	void handleSpeedComboChange(QComboBox* cb, const char* section, const char* key);
	void updateOptimalFramePacing();
	void updateUseVSyncForTimingEnabled();
	void onManuallySetRealTimeClockChanged();

	SettingsWindow* m_dialog;

	Ui::EmulationSettingsWidget m_ui;
};
