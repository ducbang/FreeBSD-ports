PORTNAME=	email-validator
DISTVERSION=	1.3.0
CATEGORIES=	mail python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	email_validator-${PORTVERSION}

MAINTAINER=	meka@tilda.center
COMMENT=	Robust email address syntax and deliverability validation library
WWW=		https://github.com/JoshData/python-email-validator

LICENSE=	CC0-1.0
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dnspython>=1.15.0:dns/py-dnspython@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}idna>=2.0.0:dns/py-idna@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
