/*				File:		BigEasyTextish.h							Copyright:	� 1990-1992, 1994 by Apple Computer, Inc., all rights reserved.			    This file is used in these builds: Warhol				Change History (most recent first):					 <8>	  9-8-94	dvb				<5+>	  5/6/93	dvb		String->Number		 <5>	  1/7/93	dvb		New functions (TruncateString).		 <4>	 1/20/92	dvb		Add more routines.		 <3>	  6/3/91	dvb		Just Hackin'.		 <2>	11/16/90	dvb		Remove drawcstring		 <1>	11/16/90	dvb		Brand New again!							To Do:*//* file: BigEasyTextish.h * * Started 13 July 1989, more or less. * * Headers for routines for converting and * displaying textish things on the Mac. * *//************************************* BigEasyTextish Global Variables************************************/#ifndef BigEasyTextishIncludes#define BigEasyTextishIncludes#ifdef BigEasyTextish	#define VAR#else	#define VAR extern#endifVAR short gLeftMargin;VAR short gLineHeight;#undef VAR/************************************* Prototypes************************************/#ifdef __cplusplusextern "C" {#endifvoid AnyBaseToPString(long n,short format,short width,StringPtr c);void CToPString(char *src,StringPtr dst);void FixedPointToPString(long n,short g,short p,StringPtr s);void PStringToFixedPoint(StringPtr s,short g,short p,long *n);void PStringToFixedPoint(StringPtr s,short g,short p,long *n);void DrawNum(long n);void DrawFixedPoint(long n,short g,short p);void DrawFixed(long n,short g);void DrawFixedPointJustified(long n,short g,short p,short h);void DrawFixedJustified(long n,short g,short h);void DrawFrac(long n,short g);void DrawHexByte(unsigned char n);void DrawHexShort(unsigned short n);void DrawHexLong(unsigned long n);void DrawCR(void);short CStringWidth(char *);void CopyPString(StringPtr dest,StringPtr src);void ConcatenatePStrings(StringPtr dest,StringPtr src);void DrawStringRight(StringPtr s);void DrawStringCenter(StringPtr s);void DrawStringLeft(StringPtr s);void TruncateString(StringPtr s, short width);void DrawStringTruncated(StringPtr s, short width);#ifdef __cplusplus}#endif#endif  //BigEasyTextishIncludes