PORTNAME=	pebble
PORTVERSION=	5.0.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Pebble-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Threading and multiprocessing eye-candy
WWW=		https://github.com/noxdafox/pebble

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		python:3.6+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|"{}".format(package_version())|"${PORTVERSION}"|' ${WRKSRC}/setup.py

.include <bsd.port.mk>
