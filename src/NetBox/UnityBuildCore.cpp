#define PUTTY_DO_GLOBALS
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#define _CRT_NON_CONFORMING_SWPRINTFS

#include <disable_warnings_in_std_begin.hpp>

#include "../nbcore/nbcore_memory.cpp"
#include "../nbcore/nbcore_string.cpp"

#include "../base/GlobalUtils.cpp"
#include "../base/UnicodeString.cpp"
#include "../base/Classes.cpp"
#include "../base/Masks.cpp"
#include "../base/Sysutils.cpp"
#include "../base/StrUtils.cpp"
#include "../base/WideStrUtils.cpp"
#include "../base/LibraryLoader.cpp"
#include "../base/Common.cpp"
#include "../base/Exceptions.cpp"
#include "../base/FileBuffer.cpp"
#include "../base/Global.cpp"

#include "../core/RemoteFiles.cpp"
#include "../core/Terminal.cpp"
#include "../core/FileOperationProgress.cpp"
#include "../core/Queue.cpp"
#include "../core/SecureShell.cpp"
#include "../core/SessionInfo.cpp"
#include "../core/CoreMain.cpp"
#include "../core/FileMasks.cpp"
#include "../core/CopyParam.cpp"
#include "../core/SessionData.cpp"
#include "../core/Configuration.cpp"
#include "../core/ScpFileSystem.cpp"
#include "../core/FtpFileSystem.cpp"
#include "../core/SftpFileSystem.cpp"
#include "../core/WebDAVFileSystem.cpp"
#include "../core/PuttyIntf.cpp"
#include "../core/Cryptography.cpp"
#include "../core/NamedObjs.cpp"
#include "../core/HierarchicalStorage.cpp"
#include "../core/Option.cpp"
#include "../core/FileInfo.cpp"
#include "../core/FileSystems.cpp"
#include "../core/Bookmarks.cpp"
#include "../core/WinSCPSecurity.cpp"
#include "../core/Http.cpp"
#include "../core/NeonIntf.cpp"
#include "../windows/SynchronizeController.cpp"
#include "../windows/GUITools.cpp"
#include "../windows/GUIConfiguration.cpp"
#include "../windows/Tools.cpp"
#include "../windows/ProgParams.cpp"

#include <disable_warnings_in_std_end.hpp>
