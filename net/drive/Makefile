PORTNAME=	drive
PORTVERSION=	0.4.0
DISTVERSIONPREFIX=	v
PORTREVISION=	14
CATEGORIES=	net

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Tiny program to pull or push Google Drive files
WWW=		https://github.com/odeke-em/drive

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${GH_PROJECT}
GO_TARGET=	${GO_PKGNAME}/cmd/${GH_PROJECT}

PLIST_FILES=	bin/drive

GH_ACCOUNT=	odeke-em
GH_TUPLE=	boltdb:bolt:v1.3.1:boltdb_bolt/vendor/github.com/boltdb/bolt \
		census-instrumentation:opencensus-go:v0.23.0:census_instrumentation_opencensus/vendor/go.opencensus.io \
		cheggaaa:pb:v3.0.8:cheggaaa_pb/vendor/github.com/cheggaaa/pb \
		golang:crypto:0559593:golang_crypto/vendor/golang.org/x/crypto \
		golang:groupcache:41bb18b:golang_groupcache/vendor/github.com/golang/groupcache \
		golang:net:c90051b:golang_net/vendor/golang.org/x/net \
		golang:oauth2:2104d58:golang_oauth2/vendor/golang.org/x/oauth2 \
		golang:protobuf:v1.5.2:golang_protobuf/vendor/github.com/golang/protobuf \
		golang:sys:05e143d:golang_sys/vendor/golang.org/x/sys \
		golang:text:b4bca84:golang_text/vendor/golang.org/x/text \
		google:go-genproto:590a5ac:google_go_genproto/vendor/google.golang.org/genproto \
		google:uuid:v1.3.0:google_uuid/vendor/github.com/google/uuid \
		googleapis:enterprise-certificate-proxy:v0.1.0:googleapis_enterprise_certificate_proxy/vendor/github.com/googleapis/enterprise-certificate-proxy \
		googleapis:google-api-go-client:v0.86.0:google_googleapigoclient/vendor/google.golang.org/api \
		googleapis:google-cloud-go:v0.103.0:googleapis_googlecloudgo/vendor/cloud.google.com/go \
		googleapis:gax-go:v2.4.0:googleapis_gaxgo/vendor/github.com/googleapis/gax-go \
		grpc:grpc-go:v1.47.0:grpc_grpc_go/vendor/google.golang.org/grpc \
		mattn:go-isatty:v0.0.14:mattn_goisatty/vendor/github.com/mattn/go-isatty \
		mattn:go-runewidth:v0.0.13:mattn_gorunewidth/vendor/github.com/mattn/go-runewidth \
		mxk:go-flowrate:cca7078:mxk_goflowrate/vendor/github.com/mxk/go-flowrate \
		odeke-em:cache:baf8e43:odekeem_cache/vendor/github.com/odeke-em/cache \
		odeke-em:cli-spinner:610063b:odekeem_clispinner/vendor/github.com/odeke-em/cli-spinner \
		odeke-em:command:91ca5ec:odekeem_command/vendor/github.com/odeke-em/command \
		odeke-em:exponential-backoff:96e25d3:odekeem_exponential_backoff/vendor/github.com/odeke-em/exponential-backoff \
		odeke-em:extractor:801861a:odekeem_extractor/vendor/github.com/odeke-em/extractor \
		odeke-em:go-utils:e8ebaed:odekeem_go_utils/vendor/github.com/odeke-em/go-utils \
		odeke-em:go-uuid:b211d76:odekeem_gouuid/vendor/github.com/odeke-em/go-uuid \
		odeke-em:log:8d60a69:odekeem_log/vendor/github.com/odeke-em/log \
		odeke-em:meddler:d2b51d2:odekeem_meddler/vendor/github.com/odeke-em/meddler \
		odeke-em:namespace:0ab79ba:odekeem_namespace/vendor/github.com/odeke-em/namespace \
		odeke-em:pretty-words:9d37a7f:odekeem_prettywords/vendor/github.com/odeke-em/pretty-words \
		odeke-em:semalim:9c88bf5:odekeem_semalim/vendor/github.com/odeke-em/semalim \
		odeke-em:statos:292960a:odekeem_statos/vendor/github.com/odeke-em/statos \
		protocolbuffers:protobuf-go:v1.28.0:protocolbuffers_protobuf_go/vendor/google.golang.org/protobuf \
		rivo:uniseg:v0.2.0:rivo_uniseg/vendor/github.com/rivo/uniseg \
		skratchdot:open-golang:eef8423:skratchdot_opengolang/vendor/github.com/skratchdot/open-golang
USE_GITHUB=	yes

.include <bsd.port.mk>
