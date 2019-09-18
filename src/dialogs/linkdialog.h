#pragma once

#include <QDialog>
#include <entities/note.h>
#include "masterdialog.h"

namespace Ui {
class LinkDialog;
}

class LinkDialog : public MasterDialog
{
    Q_OBJECT

public:
    explicit LinkDialog(QString dialogTitle = "", QWidget *parent = nullptr);
    ~LinkDialog();

    QString getSelectedNoteName();
    Note getSelectedNote();
    QString getURL();
    QString getLinkName();
    QString getLinkDescription();
    QString getTitleForUrl(const QUrl& url);

private slots:
    void on_searchLineEdit_textChanged(const QString &arg1);
    void on_notesListWidget_doubleClicked(const QModelIndex &index);
    void on_fileUrlButton_clicked();
    void on_urlEdit_textChanged(const QString &arg1);

private:
    Ui::LinkDialog *ui;
    int firstVisibleNoteListRow;
    bool eventFilter(QObject *obj, QEvent *event);
    QString selectedNoteText;
};
