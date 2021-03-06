/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2017 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/gmsof.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_SOF,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_SOF,0,reason)

static ERR_STRING_DATA SOF_str_functs[] = {
    {ERR_FUNC(SOF_F_SOF_CHANGEPASSWD), "SOF_ChangePassWd"},
    {ERR_FUNC(SOF_F_SOF_CREATETIMESTAMPREQUEST),
     "SOF_CreateTimeStampRequest"},
    {ERR_FUNC(SOF_F_SOF_CREATETIMESTAMPRESPONSE),
     "SOF_CreateTimeStampResponse"},
    {ERR_FUNC(SOF_F_SOF_DECRYPTDATA), "SOF_DecryptData"},
    {ERR_FUNC(SOF_F_SOF_DECRYPTFILE), "SOF_DecryptFile"},
    {ERR_FUNC(SOF_F_SOF_DELCERTTRUSTLIST), "SOF_DelCertTrustList"},
    {ERR_FUNC(SOF_F_SOF_ENCRYPTDATA), "SOF_EncryptData"},
    {ERR_FUNC(SOF_F_SOF_ENCRYPTFILE), "SOF_EncryptFile"},
    {ERR_FUNC(SOF_F_SOF_EXPORTEXCHANGEUSERCERT),
     "SOF_ExportExchangeUserCert"},
    {ERR_FUNC(SOF_F_SOF_EXPORTUSERCERT), "SOF_ExportUserCert"},
    {ERR_FUNC(SOF_F_SOF_G), "SOF_GenRandom"},
    {ERR_FUNC(SOF_F_SOF_GENRANDOM), "SOF_GenRandom"},
    {ERR_FUNC(SOF_F_SOF_GETCERTINFO), "SOF_GetCertInfo"},
    {ERR_FUNC(SOF_F_SOF_GETCERTINFOBYOID), "SOF_GetCertInfoByOid"},
    {ERR_FUNC(SOF_F_SOF_GETCERTTRUSTLIST), "SOF_GetCertTrustList"},
    {ERR_FUNC(SOF_F_SOF_GETCERTTRUSTLISTALTNAMES),
     "SOF_GetCertTrustListAltNames"},
    {ERR_FUNC(SOF_F_SOF_GETDEVICEINFO), "SOF_GetDeviceInfo"},
    {ERR_FUNC(SOF_F_SOF_GETENCRYPTMETHOD), "SOF_GetEncryptMethod"},
    {ERR_FUNC(SOF_F_SOF_GETINFOFROMSIGNEDMESSAGE),
     "SOF_GetInfoFromSignedMessage"},
    {ERR_FUNC(SOF_F_SOF_GETLASTERROR), "SOF_GetLastError"},
    {ERR_FUNC(SOF_F_SOF_GETPINRETRYCOUNT), "SOF_GetPinRetryCount"},
    {ERR_FUNC(SOF_F_SOF_GETSERVERCERTIFICATE), "SOF_GetServerCertificate"},
    {ERR_FUNC(SOF_F_SOF_GETSIGNMETHOD), "SOF_GetSignMethod"},
    {ERR_FUNC(SOF_F_SOF_GETTIMESTAMPINFO), "SOF_GetTimeStampInfo"},
    {ERR_FUNC(SOF_F_SOF_GETUSERLIST), "SOF_GetUserList"},
    {ERR_FUNC(SOF_F_SOF_GETVERSION), "SOF_GetVersion"},
    {ERR_FUNC(SOF_F_SOF_GETXMLSIGNATUREINFO), "SOF_GetXMLSignatureInfo"},
    {ERR_FUNC(SOF_F_SOF_INITCERTAPPPOLICY), "SOF_InitCertAppPolicy"},
    {ERR_FUNC(SOF_F_SOF_LOGIN), "SOF_Login"},
    {ERR_FUNC(SOF_F_SOF_SETCERTTRUSTLIST), "SOF_SetCertTrustList"},
    {ERR_FUNC(SOF_F_SOF_SETENCRYPTMETHOD), "SOF_SetEncryptMethod"},
    {ERR_FUNC(SOF_F_SOF_SETSIGNMETHOD), "SOF_SetSignMethod"},
    {ERR_FUNC(SOF_F_SOF_SIGNDATA), "SOF_SignData"},
    {ERR_FUNC(SOF_F_SOF_SIGNDATAXML), "SOF_SignDataXML"},
    {ERR_FUNC(SOF_F_SOF_SIGNFILE), "SOF_SignFile"},
    {ERR_FUNC(SOF_F_SOF_SIGNMESSAGE), "SOF_SignMessage"},
    {ERR_FUNC(SOF_F_SOF_SIGNMESSAGEDETACH), "SOF_SignMessageDetach"},
    {ERR_FUNC(SOF_F_SOF_VALIDATECERT), "SOF_ValidateCert"},
    {ERR_FUNC(SOF_F_SOF_VERIFYSIGNEDDATA), "SOF_VerifySignedData"},
    {ERR_FUNC(SOF_F_SOF_VERIFYSIGNEDDATAXML), "SOF_VerifySignedDataXML"},
    {ERR_FUNC(SOF_F_SOF_VERIFYSIGNEDFILE), "SOF_VerifySignedFile"},
    {ERR_FUNC(SOF_F_SOF_VERIFYSIGNEDMESSAGE), "SOF_VerifySignedMessage"},
    {ERR_FUNC(SOF_F_SOF_VERIFYSIGNEDMESSAGEDETACH),
     "SOF_VerifySignedMessageDetach"},
    {ERR_FUNC(SOF_F_SOF_VERIFYTIMESTAMP), "SOF_VerifyTimeStamp"},
    {0, NULL}
};

static ERR_STRING_DATA SOF_str_reasons[] = {
    {ERR_REASON(SOF_R_DECODE_FAILURE), "decode failure"},
    {ERR_REASON(SOF_R_INVALID_CERT_ATTRIBUTE), "invalid cert attribute"},
    {ERR_REASON(SOF_R_NOT_IMPLEMENTED), "not implemented"},
    {ERR_REASON(SOF_R_READ_FILE_FAILURE), "read file failure"},
    {0, NULL}
};

#endif

int ERR_load_SOF_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(SOF_str_functs[0].error) == NULL) {
        ERR_load_strings(0, SOF_str_functs);
        ERR_load_strings(0, SOF_str_reasons);
    }
#endif
    return 1;
}
