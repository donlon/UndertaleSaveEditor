#ifndef DIALOGS_H
#define DIALOGS_H

#include <QCloseEvent>
#include <QDialog>
#include <QHash>

class AboutDialog : public QDialog
{
	Q_OBJECT // NOLINT

public:
	explicit AboutDialog(QWidget *parent = nullptr, Qt::WindowFlags flags = Qt::WindowFlags());

private:
	auto GetCredits() -> QString;
};

class YellowNamesDialog : public QDialog
{
	Q_OBJECT // NOLINT

public:
	explicit YellowNamesDialog(QWidget *parent = nullptr, Qt::WindowFlags flags = Qt::WindowFlags());

private:
	bool isQuit = true;
};

#endif // DIALOGS_H