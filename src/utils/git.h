/*
 * Copyright (c) 2014-2022 Patrizio Bekerle -- <patrizio@bekerle.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 */

#pragma once

#include <QProcess>
#include <QString>
#include "mainwindow.h"

/*  Git functions that can be useful */

namespace Utils {
namespace Git {
void commitCurrentNoteFolder(MainWindow *mw = nullptr);
void pushCurrentNoteFolder(MainWindow *mw = nullptr);
bool executeCommand(const QString& command, const QStringList& arguments,
                    QProcess* process = nullptr, bool withErrorDialog = false, bool ignoreReturnValue = false);
bool executeGitCommand(const QString &gitExe, const QStringList& arguments, QProcess* process = nullptr,
                       bool withErrorDialog = true, bool ignoreReturnValue = false);
QString gitCommand();
void showLog(const QString& filePath);
bool hasLogCommand();
bool isCurrentNoteFolderUseGit();
bool isCurrentNoteFolderUseGitPush();
}    // namespace Git
}    // namespace Utils
