PORTNAME=	novelwriter
DISTVERSIONPREFIX=	v
DISTVERSION=	1.6.5
CATEGORIES=	editors python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Text editor designed for writing novels
WWW=		https://novelwriter.io/

LICENSE=	GPLv3

PY_DEPENDS=	${PYTHON_PKGNAMEPREFIX}lxml>0:devel/py-lxml@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}enchant>=3.0.0:textproc/py-enchant@${PY_FLAVOR}
BUILD_DEPENDS=	${PY_DEPENDS}
RUN_DEPENDS=	${PY_DEPENDS}

USES=		python:3.7+ pyqt:5
USE_PYQT=	pyqt5
USE_PYTHON=	distutils concurrent autoplist

USE_GITHUB=	yes
GH_ACCOUNT=	vkbo
GH_PROJECT=	novelWriter

NO_ARCH=	yes

.include <bsd.port.mk>
