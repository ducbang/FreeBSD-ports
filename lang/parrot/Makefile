PORTNAME=	parrot
PORTVERSION=	8.1.0
PORTREVISION=	18
CATEGORIES=	lang
MASTER_SITES=	ftp://ftp.parrot.org/pub/parrot/releases/supported/${PORTVERSION}/ \
		LOCAL/sunpoet

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Virtual machine for dynamic languages
WWW=		https://www.parrotcode.org/

LICENSE=	ART20

BUILD_DEPENDS=	${LOCALBASE}/bin/flex:textproc/flex \
		p5-Pod-Parser>=0:textproc/p5-Pod-Parser \
		pcre-config:devel/pcre
LIB_DEPENDS=	libgmp.so:math/gmp \
		libicudata.so:devel/icu

OPTIONS_DEFINE=	DOCS

ALL_TARGET=	installable
CONFIGURE_ARGS=	--cc=${CC} --cxx=${CXX} --link=${CXX} \
		--ccflags="${CFLAGS}" \
		--ld=${CC} --ldflags="${LDFLAGS}" \
		--gc=gms --inline --optimize --parrot_is_shared --verbose \
		--prefix=${PREFIX} \
		--icu-config=${LOCALBASE}/bin/icu-config \
		--lex=${LOCALBASE}/bin/flex \
		--yacc=${LOCALBASE}/bin/bison
CONFIGURE_SCRIPT=	Configure.pl
INSTALL_TARGET=	install-dev
TEST_TARGET=	test
MAKE_JOBS_UNSAFE=	yes
USE_LDCONFIG=	yes
USES=		bison gmake localbase:ldflags perl5 shebangfix tar:bzip2
SHEBANG_FILES=	tools/dev/create_language.pl \
		tools/dev/gen_makefile.pl \
		tools/dev/pprof2cg.pl \
		tools/dev/reconfigure.pl
perl_OLD_CMD=	perl
BINARY_WRAPPERS=	gm4

DOCSDIR=	share/doc/${PORTNAME}/${PORTVERSION}
PLIST_SUB=	PARROT_VER="${PORTVERSION}"

do-configure:
	(cd ${WRKSRC} && ${PERL} ${CONFIGURE_SCRIPT} ${CONFIGURE_ARGS})

post-install:
	${RM} ${STAGEDIR}${PREFIX}/lib/inst_libparrot.so.${PORTVERSION}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/* \
		${STAGEDIR}${PREFIX}/lib/libparrot.so.${PORTVERSION} \
		${STAGEDIR}${PREFIX}/lib/parrot/${PORTVERSION}/dynext/*.so

.include <bsd.port.mk>
