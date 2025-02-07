--- chrome/browser/ui/views/download/download_item_view.cc.orig	2022-10-05 07:34:01 UTC
+++ chrome/browser/ui/views/download/download_item_view.cc
@@ -188,7 +188,7 @@ bool UseNewWarnings() {
 }
 
 int GetFilenameStyle(const views::Label& label) {
-#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS)
+#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_BSD)
   if (UseNewWarnings())
     return views::style::STYLE_EMPHASIZED;
 #endif
@@ -196,7 +196,7 @@ int GetFilenameStyle(const views::Label& label) {
 }
 
 int GetFilenameStyle(const views::StyledLabel& label) {
-#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS)
+#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_BSD)
   if (UseNewWarnings())
     return views::style::STYLE_EMPHASIZED;
 #endif
