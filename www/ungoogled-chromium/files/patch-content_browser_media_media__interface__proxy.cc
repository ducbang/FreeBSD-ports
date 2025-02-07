--- content/browser/media/media_interface_proxy.cc.orig	2022-10-01 07:40:07 UTC
+++ content/browser/media/media_interface_proxy.cc
@@ -76,7 +76,7 @@
 #include "media/mojo/services/mojo_renderer_service.h"  // nogncheck
 #endif
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 #include "content/public/browser/stable_video_decoder_factory.h"
 #include "media/base/media_switches.h"
 #endif  // BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
@@ -327,7 +327,7 @@ void MediaInterfaceProxy::CreateVideoDecoder(
 
   mojo::PendingRemote<media::stable::mojom::StableVideoDecoder>
       oop_video_decoder;
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   if (base::FeatureList::IsEnabled(media::kUseOutOfProcessVideoDecoding)) {
     render_frame_host().GetProcess()->CreateStableVideoDecoder(
         oop_video_decoder.InitWithNewPipeAndPassReceiver());
