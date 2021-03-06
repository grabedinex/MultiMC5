#pragma once

#include "ITheme.h"

class DarkTheme: public ITheme
{
public:
	virtual ~DarkTheme() {}

	QString qtTheme() override;
	QString id() override;
	QString name() override;
	QString appStyleSheet() override;
	QPalette colorScheme() override;
};
