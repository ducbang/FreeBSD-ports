--- chrome/updater/app/app_uninstall.cc.orig	2022-10-01 07:40:07 UTC
+++ chrome/updater/app/app_uninstall.cc
@@ -32,7 +32,7 @@
 #include "chrome/updater/win/setup/uninstall.h"
 #elif BUILDFLAG(IS_MAC)
 #include "chrome/updater/mac/setup/setup.h"
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "chrome/updater/linux/setup/setup.h"
 #endif
 
