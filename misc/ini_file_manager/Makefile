PORTNAME=	ini_file_manager
PORTVERSION=	03
PORTREVISION=	3
CATEGORIES=	misc
MASTER_SITES=	http://sourceforge.net/projects/${SFPATH}/
DISTNAME=	ini-files-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Ini configuration file reader and manipulator package for Ada
WWW=		https://sourceforge.net/projects/ini-files/

LICENSE=	MIT

EXPIRATION_DATE=2022-12-31

USES=		ada zip dos2unix

NO_WRKSUBDIR=	yes

SFPATH=		ini-files/files/ini-files/ini-files-${PORTVERSION}
PORTDOCS=	ini_file_manager.txt
PORTEXAMPLES=	example.gpr test_config.adb runme.sh

OPTIONS_DEFINE=	DOCS EXAMPLES

post-extract:
	${CP} ${FILESDIR}/construct.gpr ${WRKSRC}
	${MKDIR} ${WRKSRC}/src
	${MV} ${WRKSRC}/config.ad[bs] ${WRKSRC}/src
	${SED} -e "s,@PREFIX@,${LOCALBASE},g" ${FILESDIR}/runme.sh.in \
		> ${WRKSRC}/runme.sh

do-build:
	(cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} gnatmake -p -Pconstruct)

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/gnat \
		${STAGEDIR}${PREFIX}/lib/ini_file_manager \
		${STAGEDIR}${PREFIX}/include/ini_file_manager
	${INSTALL_DATA} ${FILESDIR}/ini_file_manager.gpr \
		${STAGEDIR}${PREFIX}/lib/gnat
	${INSTALL_DATA} ${WRKSRC}/src/* \
		${STAGEDIR}${PREFIX}/include/ini_file_manager
	${INSTALL_DATA} ${WRKSRC}/lib/*  \
		${STAGEDIR}${PREFIX}/lib/ini_file_manager

do-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/ini_file_manager.txt ${STAGEDIR}${DOCSDIR}

do-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/runme.sh ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/test_config.adb \
		${FILESDIR}/example.gpr ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
