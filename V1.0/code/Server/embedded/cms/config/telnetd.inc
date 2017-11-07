/******************************************************************************

                  ��Ȩ���� (C), 2001-2013, ������Ѷ�������޹�˾

 ******************************************************************************
  �� �� ��   : telnetd.h
  �� �� ��   : ����
  ��    ��   : yanghaifeng
  ��������   : 2013��7��25�� ������
  ����޸�   :
  ��������   : telnetd.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2013��7��25�� ������
    ��    ��   : yanghaifeng
    �޸�����   : �����ļ�

******************************************************************************/

/*----------------------------------------------*
 * ����ͷ�ļ�                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * �ⲿ����˵��                                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * �ⲿ����ԭ��˵��                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * �ڲ�����ԭ��˵��                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ȫ�ֱ���                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ģ�鼶����                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ��������                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * �궨��                                       *
 *----------------------------------------------*/

#ifndef __TELNETD_H__
#define __TELNETD_H__


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif /* __cplusplus */

    extern void ScanClientIfExpires();
    extern int telnetauth(char* user, char* password);
    extern int TelnetConfigSaveStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetConfigSetStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetDebugLevelSetStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetDebugSendStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetExitConfirmStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetLog2DBSetStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetLog2FileSetStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetLoginStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetLogLevelSetStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetLogoutConfirmStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetParseClientData(int cpos, unsigned char* buf, int len);
    extern int TelnetPortSetStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetPromptPasswordStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetPromptUserStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetReleaseAllUACInfoConfirmStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetReleaseAllUADialogInfoConfirmStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetReleaseAllUASInfoConfirmStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetReleaseCallTaskConfirmStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetReleaseCallTaskStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetReleaseRecordTaskConfirmStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetReleaseRecordTaskStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetRestartSystemConfirmStateProc(int cpos, unsigned char* buf, int len);
    extern void TelnetRunTraceSend(char* msg);
    extern int TelnetRunTraceSendStateProc(int cpos, unsigned char* buf, int len);
    extern void TelnetSend(char* msg);
    extern void TelnetSendSIPMessage(const char* fmt, ...);
    extern void TelnetServerFree();
    extern int  TelnetServerInit();
    extern void TelnetServerMain();
    extern int TelnetSIPDebugSendStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetStopCruiseTaskConfirmStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetStopCruiseTaskStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetStopPollTaskConfirmStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetStopPollTaskStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetStopSystemConfirmStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetSysCallTaskDetalStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetSysDiagnoseStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetSysRunInfoStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetSysSIPUAInfoStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetSystemShellStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetUserNameSetStateProc(int cpos, unsigned char* buf, int len);
    extern int TelnetUserPasswordSetStateProc(int cpos, unsigned char* buf, int len);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __TELNETD_H__ */