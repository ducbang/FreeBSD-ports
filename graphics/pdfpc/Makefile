PORTNAME=	pdfpc
DISTVERSION=	4.5.0
CATEGORIES=	graphics
DISTVERSIONPREFIX=	v
PORTREVISION=	20

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Keynote-like multi-monitor presentation viewer
WWW=		https://pdfpc.github.io/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${LOCALBASE}/lib/libmarkdown.a:textproc/discount
LIB_DEPENDS=	libgee-0.8.so:devel/libgee \
		libpoppler-glib.so:graphics/poppler-glib \
		libwebkit2gtk-4.0.so:www/webkit2-gtk3

USE_GITHUB=	yes

USES=		cmake compiler:c11 gnome gstreamer pkgconfig vala:build
USE_GNOME=	gtk30

CMAKE_ARGS=	-DMANDIR:STRING="man/"

post-install:
	@${MV} ${STAGEDIR}${PREFIX}/etc/pdfpcrc \
		${STAGEDIR}${PREFIX}/etc/pdfpcrc.sample

.include <bsd.port.mk>
