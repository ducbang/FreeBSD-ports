PORTNAME=	mkdocs
DISTVERSION=	1.4.0
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kai@FreeBSD.org
COMMENT=	Project documentation with Markdown
WWW=		https://www.mkdocs.org

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}click>=7.0:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ghp-import>=1.0:www/py-ghp-import@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}Jinja2>=2.11.1:devel/py-Jinja2@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}markdown>=3.2.1<3.4:textproc/py-markdown@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mergedeep>=1.3.4:devel/py-mergedeep@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}packaging>=20.5:devel/py-packaging@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyyaml_env_tag>=0.1:devel/py-pyyaml_env_tag@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}watchdog>=2.0:devel/py-watchdog@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}yaml>=5.1:devel/py-yaml@${PY_FLAVOR}

USES=		cpe python:3.7+
USE_PYTHON=	distutils concurrent autoplist

NO_ARCH=	yes

OPTIONS_DEFINE=		I18N
OPTIONS_DEFAULT=	I18N

I18N_DESC=	Support for theme localization
I18N_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Babel>=2.9.0:devel/py-babel@${PY_FLAVOR}

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 30800
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}typing-extensions>=3.10:devel/py-typing-extensions@${PY_FLAVOR}
.endif

.if ${PYTHON_REL} < 31000
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}importlib-metadata>=4.3:devel/py-importlib-metadata@${PY_FLAVOR}
.endif

.include <bsd.port.post.mk>
