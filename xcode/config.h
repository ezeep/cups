/* config.h.  Generated from config.h.in by configure.  */
/*
 * "$Id$"
 *
 *   Configuration file for CUPS.
 *
 *   Copyright 2007-2011 by Apple Inc.
 *   Copyright 1997-2007 by Easy Software Products.
 *
 *   These coded instructions, statements, and computer programs are the
 *   property of Apple Inc. and are protected by Federal copyright
 *   law.  Distribution and use rights are outlined in the file "LICENSE.txt"
 *   which should have been included with this file.  If this file is
 *   file is missing or damaged, see the license at "http://www.cups.org/".
 */

#ifndef _CUPS_CONFIG_H_
#define _CUPS_CONFIG_H_

/*
 * Version of software...
 */

#define CUPS_SVERSION "CUPS v1.5svn"
#define CUPS_MINIMAL "CUPS/1.5svn"


/*
 * Default user and groups...
 */

#define CUPS_DEFAULT_USER "_lp"
#define CUPS_DEFAULT_GROUP "_lp"
#define CUPS_DEFAULT_SYSTEM_GROUPS "admin"
#define CUPS_DEFAULT_PRINTOPERATOR_AUTH "@AUTHKEY(system.print.operator) @admin @lpadmin"


/*
 * Default file permissions...
 */

#define CUPS_DEFAULT_CONFIG_FILE_PERM 0644
#define CUPS_DEFAULT_LOG_FILE_PERM 0644


/*
 * Default logging settings...
 */

#define CUPS_DEFAULT_LOG_LEVEL "warn"
#define CUPS_DEFAULT_ACCESS_LOG_LEVEL "actions"


/*
 * Default fatal error settings...
 */

#define CUPS_DEFAULT_FATAL_ERRORS "config"


/*
 * Default browsing settings...
 */

#define CUPS_DEFAULT_BROWSING 1
#define CUPS_DEFAULT_BROWSE_LOCAL_PROTOCOLS "CUPS dnssd"
#define CUPS_DEFAULT_BROWSE_REMOTE_PROTOCOLS ""
#define CUPS_DEFAULT_BROWSE_SHORT_NAMES 1
#define CUPS_DEFAULT_DEFAULT_SHARED 1
#define CUPS_DEFAULT_IMPLICIT_CLASSES 1
#define CUPS_DEFAULT_USE_NETWORK_DEFAULT 0


/*
 * Default IPP port...
 */

#define CUPS_DEFAULT_IPP_PORT 631


/*
 * Default printcap file...
 */

#define CUPS_DEFAULT_PRINTCAP "/Library/Preferences/org.cups.printers.plist"


/*
 * Default Samba and LPD config files...
 */

#define CUPS_DEFAULT_SMB_CONFIG_FILE ""
#define CUPS_DEFAULT_LPD_CONFIG_FILE "launchd:///System/Library/LaunchDaemons/org.cups.cups-lpd.plist"


/*
 * Default MaxCopies value...
 */

#define CUPS_DEFAULT_MAX_COPIES 9999


/*
 * Do we have domain socket support, and if so what is the default one?
 */

#define CUPS_DEFAULT_DOMAINSOCKET "/private/var/run/cupsd"


/*
 * Default WebInterface value...
 */

#define CUPS_DEFAULT_WEBIF 0


/*
 * Where are files stored?
 *
 * Note: These are defaults, which can be overridden by environment
 *       variables at run-time...
 */

#define CUPS_BINDIR "/usr/bin"
#define CUPS_CACHEDIR "/private/var/spool/cups/cache"
#define CUPS_DATADIR "/usr/share/cups"
#define CUPS_DOCROOT "/usr/share/doc/cups"
#define CUPS_FONTPATH "/usr/share/cups/fonts"
#define CUPS_LOCALEDIR "/usr/share/locale"
#define CUPS_LOGDIR "/private/var/log/cups"
#define CUPS_REQUESTS "/private/var/spool/cups"
#define CUPS_SBINDIR "/usr/sbin"
#define CUPS_SERVERBIN "/usr/libexec/cups"
#define CUPS_SERVERROOT "/private/etc/cups"
#define CUPS_STATEDIR "/private/etc/cups"


/*
 * Do we have various image libraries?
 */

/* #undef HAVE_LIBPNG */
#define HAVE_LIBZ 1
/* #undef HAVE_LIBJPEG */
/* #undef HAVE_LIBTIFF */


/*
 * Do we have PAM stuff?
 */

#ifndef HAVE_LIBPAM
#define HAVE_LIBPAM 1
#endif /* !HAVE_LIBPAM */

/* #undef HAVE_PAM_PAM_APPL_H */
#define HAVE_PAM_SET_ITEM 1
#define HAVE_PAM_SETCRED 1


/*
 * Do we have <shadow.h>?
 */

/* #undef HAVE_SHADOW_H */


/*
 * Do we have <crypt.h>?
 */

/* #undef HAVE_CRYPT_H */


/*
 * Do we have <scsi/sg.h>?
 */

/* #undef HAVE_SCSI_SG_H */


/*
 * Use <string.h>, <strings.h>, and/or <bstring.h>?
 */

#define HAVE_STRING_H 1
#define HAVE_STRINGS_H 1
/* #undef HAVE_BSTRING_H */

/*
 * Do we have the long long type?
 */

#define HAVE_LONG_LONG 1

#ifdef HAVE_LONG_LONG
#  define CUPS_LLFMT	"%lld"
#  define CUPS_LLCAST	(long long)
#else
#  define CUPS_LLFMT	"%ld"
#  define CUPS_LLCAST	(long)
#endif /* HAVE_LONG_LONG */

/*
 * Do we have the strtoll() function?
 */

#define HAVE_STRTOLL 1

#ifndef HAVE_STRTOLL
#  define strtoll(nptr,endptr,base) strtol((nptr), (endptr), (base))
#endif /* !HAVE_STRTOLL */

/*
 * Do we have the strXXX() functions?
 */

#define HAVE_STRDUP 1
#define HAVE_STRCASECMP 1
#define HAVE_STRNCASECMP 1
#define HAVE_STRLCAT 1
#define HAVE_STRLCPY 1


/*
 * Do we have the geteuid() function?
 */

#define HAVE_GETEUID 1


/*
 * Do we have the vsyslog() function?
 */

#define HAVE_VSYSLOG 1


/*
 * Do we have the (v)snprintf() functions?
 */

#define HAVE_SNPRINTF 1
#define HAVE_VSNPRINTF 1


/*
 * What signal functions to use?
 */

#define HAVE_SIGSET 1
#define HAVE_SIGACTION 1


/*
 * What wait functions to use?
 */

#define HAVE_WAITPID 1
#define HAVE_WAIT3 1


/*
 * Do we have the mallinfo function and malloc.h?
 */

/* #undef HAVE_MALLINFO */
/* #undef HAVE_MALLOC_H */


/*
 * Do we have the POSIX ACL functions?
 */

#define HAVE_ACL_INIT 1


/*
 * Do we have the langinfo.h header file?
 */

#define HAVE_LANGINFO_H 1


/*
 * Which encryption libraries do we have?
 */

#define HAVE_CDSASSL 1
/* #undef HAVE_GNUTLS */
/* #undef HAVE_LIBSSL */
#define HAVE_SSL 1


/*
 * What Security framework headers do we have?
 */

#define HAVE_AUTHORIZATION_H 1
#define HAVE_SECCERTIFICATE_H 1
#define HAVE_SECITEM_H 1
/* #undef HAVE_SECITEMPRIV_H */
#define HAVE_SECPOLICY_H 1
/* #undef HAVE_SECPOLICYPRIV_H */
/* #undef HAVE_SECBASEPRIV_H */
/* #undef HAVE_SECIDENTITYSEARCHPRIV_H */


/*
 * Do we have the SecCertificateCopyData function?
 */

#define HAVE_SECCERTIFICATECOPYDATA 1


/*
 * Do we have the SecIdentitySearchCreateWithPolicy function?
 */

#define HAVE_SECIDENTITYSEARCHCREATEWITHPOLICY 1


/*
 * Do we have the SecPolicyCreateSSL function?
 */

#define HAVE_SECPOLICYCREATESSL 1


/*
 * Do we have the SecPolicyCreateSSL function?
 */

#define HAVE_SECPOLICYCREATESSL 1


/*
 * Do we have the cssmErrorString function?
 */

#define HAVE_CSSMERRORSTRING 1


/*
 * Do we have the SLP library?
 */

/* #undef HAVE_LIBSLP */


/*
 * Do we have an LDAP library?
 */

#define HAVE_LDAP 1
#define HAVE_OPENLDAP 1
/* #undef HAVE_MOZILLA_LDAP */
/* #undef HAVE_LDAP_SSL_H */
/* #undef HAVE_LDAP_SSL */
#define HAVE_LDAP_REBIND_PROC 1


/*
 * Do we have libpaper?
 */

/* #undef HAVE_LIBPAPER */


/*
 * Do we have DNS Service Discovery (aka Bonjour)?
 */

#define HAVE_DNSSD 1


/*
 * Do we have <sys/ioctl.h>?
 */

#define HAVE_SYS_IOCTL_H 1


/*
 * Does the "stat" structure contain the "st_gen" member?
 */

#define HAVE_ST_GEN 1


/*
 * Does the "tm" structure contain the "tm_gmtoff" member?
 */

#define HAVE_TM_GMTOFF 1


/*
 * Do we have rresvport_af()?
 */

#define HAVE_RRESVPORT_AF 1


/*
 * Do we have getaddrinfo()?
 */

#define HAVE_GETADDRINFO 1


/*
 * Do we have getnameinfo()?
 */

#define HAVE_GETNAMEINFO 1


/*
 * Do we have getifaddrs()?
 */

#define HAVE_GETIFADDRS 1


/*
 * Do we have hstrerror()?
 */

#define HAVE_HSTRERROR 1


/*
 * Do we have res_init()?
 */

#define HAVE_RES_INIT 1


/*
 * Do we have <resolv.h>
 */

#define HAVE_RESOLV_H 1


/*
 * Do we have the <sys/sockio.h> header file?
 */

#define HAVE_SYS_SOCKIO_H 1


/*
 * Does the sockaddr structure contain an sa_len parameter?
 */

/* #undef HAVE_STRUCT_SOCKADDR_SA_LEN */


/*
 * Do we have the AIX usersec.h header file?
 */

/* #undef HAVE_USERSEC_H */


/*
 * Do we have pthread support?
 */

#define HAVE_PTHREAD_H 1


/*
 * Do we have launchd support?
 */

#define HAVE_LAUNCH_H 1
#define HAVE_LAUNCHD 1


/*
 * Various scripting languages...
 */

#define HAVE_JAVA 1
#define CUPS_JAVA "/usr/bin/java"
#define HAVE_PERL 1
#define CUPS_PERL "/usr/bin/perl"
#define HAVE_PHP 1
#define CUPS_PHP "/usr/bin/php"
#define HAVE_PYTHON 1
#define CUPS_PYTHON "/usr/bin/python"


/*
 * Location of the poppler/Xpdf pdftops program...
 */

/* #undef HAVE_PDFTOPS */
#define CUPS_PDFTOPS ""


/*
 * Location of the Ghostscript gs program...
 */

/* #undef HAVE_GHOSTSCRIPT */
#define CUPS_GHOSTSCRIPT ""


/*
 * Do we have Darwin's CoreFoundation and SystemConfiguration frameworks?
 */

#define HAVE_COREFOUNDATION 1
#define HAVE_SYSTEMCONFIGURATION 1


/*
 * Do we have CoreFoundation public and private headers?
 */

#define HAVE_COREFOUNDATION_H 1
/* #undef HAVE_CFPRIV_H */
/* #undef HAVE_CFBUNDLEPRIV_H */


/*
 * Do we have ApplicationServices public headers?
 */

#define HAVE_APPLICATIONSERVICES_H 1


/*
 * Do we have the SCDynamicStoreCopyComputerName function?
 */

#define HAVE_SCDYNAMICSTORECOPYCOMPUTERNAME 1


/*
 * Do we have MacOSX 10.4's mbr_XXX functions?
 */

#define HAVE_MEMBERSHIP_H 1
/* #undef HAVE_MEMBERSHIPPRIV_H */
#define HAVE_MBR_UID_TO_UUID 1


/*
 * Do we have Darwin's notify_post header and function?
 */

#define HAVE_NOTIFY_H 1
#define HAVE_NOTIFY_POST 1


/*
 * Do we have DBUS?
 */

/* #undef HAVE_DBUS */
/* #undef HAVE_DBUS_MESSAGE_ITER_INIT_APPEND */


/*
 * Do we have the AppleTalk/at_proto.h header?
 */

/* #undef HAVE_APPLETALK_AT_PROTO_H */


/*
 * Do we have the GSSAPI support library (for Kerberos support)?
 */

#define HAVE_GSSAPI 1
#define HAVE_GSSAPI_H 1
#define HAVE_GSSAPI_GSSAPI_H 1
#define HAVE_GSSAPI_GSSAPI_GENERIC_H 1
#define HAVE_GSSAPI_GSSAPI_KRB5_H 1
/* #undef HAVE_GSSKRB5_REGISTER_ACCEPTOR_IDENTITY */
#define HAVE_GSS_C_NT_HOSTBASED_SERVICE 1
#define HAVE_KRB5_CC_NEW_UNIQUE 1
#define HAVE_KRB5_IPC_CLIENT_SET_TARGET_UID 1
#define HAVE_KRB5_H 1
/* #undef HAVE_HEIMDAL */


/*
 * Default GSS service name...
 */

#define CUPS_DEFAULT_GSSSERVICENAME "host"


/*
 * Select/poll interfaces...
 */

#define HAVE_POLL 1
/* #undef HAVE_EPOLL */
#define HAVE_KQUEUE 1


/*
 * Do we have the <dlfcn.h> header?
 */

#define HAVE_DLFCN_H 1


/*
 * Do we have <sys/param.h>?
 */

#define HAVE_SYS_PARAM_H 1


/*
 * Do we have <sys/ucred.h>?
 */

#define HAVE_SYS_UCRED_H 1


/*
 * Do we have removefile()?
 */

#define HAVE_REMOVEFILE 1


/*
 * Do we have <sandbox.h>?
 */

#define HAVE_SANDBOX_H 1


/*
 * Which random number generator function to use...
 */

#define HAVE_ARC4RANDOM 1
#define HAVE_RANDOM 1
#define HAVE_LRAND48 1

#ifdef HAVE_ARC4RANDOM
#  define CUPS_RAND() arc4random()
#  define CUPS_SRAND(v) arc4random_stir()
#elif defined(HAVE_RANDOM)
#  define CUPS_RAND() random()
#  define CUPS_SRAND(v) srandom(v)
#elif defined(HAVE_LRAND48)
#  define CUPS_RAND() lrand48()
#  define CUPS_SRAND(v) srand48(v)
#else
#  define CUPS_RAND() rand()
#  define CUPS_SRAND(v) srand(v)
#endif /* HAVE_ARC4RANDOM */


/*
 * Do we have vproc_transaction_begin/end?
 */

#define HAVE_VPROC_TRANSACTION_BEGIN 1


/*
 * Do we have libusb?
 */

/* #undef HAVE_USB_H */


/*
 * Do we have libwrap and tcpd.h?
 */

/* #undef HAVE_TCPD_H */


/*
 * Do we have <iconv.h>?
 */

#define HAVE_ICONV_H 1


/*
 * Do we have statfs or statvfs and one of the corresponding headers?
 */

#define HAVE_STATFS 1
#define HAVE_STATVFS 1
#define HAVE_SYS_MOUNT_H 1
/* #undef HAVE_SYS_STATFS_H */
#define HAVE_SYS_STATVFS_H 1
/* #undef HAVE_SYS_VFS_H */


/*
 * Location of Mac OS X localization bundle, if any.
 */

#define CUPS_BUNDLEDIR "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/PrintCore.framework/Versions/A"


/*
 * Do we have the ColorSyncRegisterDevice function?
 */

#define HAVE_COLORSYNCREGISTERDEVICE 1


#endif /* !_CUPS_CONFIG_H_ */

/*
 * End of "$Id$".
 */