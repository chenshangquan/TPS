/* error_fmt.h.  Generated by wj.  */
#ifndef __INCerror_fmth
#define __INCerror_fmth


#define PPP_E_IPC_SENDMSG_FMT	"%% Ipc fail to send message%s"
#define PPP_E_USERNAME_TOOLONG_FMT	"%% Username is too long (SHOULD not longer than %d)%s"
#define PPP_E_PASSWORD_TOOLONG_FMT	"%% Password is too long (SHOULD not longer than %d)%s"
#define PPP_E_INVALID_NUMBER_FMT	"%% Invalid numeric parametrer for this option%s"
#define PPP_E_INVALID_PROTOCOL	"%% PPP is not running in this interface %s"
#define PPP_E_INVALID_PROTOCOL_C	"%% PPP在本接口没有启动%s"
#ifdef HDLC_ZHANKA_INIT
#define HDLC_E_TMP_FMT                    "%% HDLC error temp%s"
#define HDLC_E_CANNOT_SET_PARAMETAR_FMT   "%% HDLC unable to set HDLC protocol parameter%s"
#define HDLC_E_KEEPALIVE_NOT_IN_RANGE_FMT "%% HDLC keepalive not in range%s"
#define HDLC_E_TIMEOUT_NOT_IN_RANGE_FMT   "%% HDLC timeout no in range%s"
#define HDLC_E_CANNOT_SET_DEBUG_FMT       "%% HDLC cannot set debug%s"
#define HDLC_E_IS_NOT_RUNNING_THIS_IF_FMT "%% HDLC is not running in this interface%s"
#define HDLC_E_CANNOT_SET_PARAMETAR_FMT_C   "%% 不能设HDLC参数%s"
#define HDLC_E_KEEPALIVE_NOT_IN_RANGE_FMT_C "%% HDLC keepalive参数超出范围%s"
#define HDLC_E_TIMEOUT_NOT_IN_RANGE_FMT_C   "%% HDLC timeout参数超出范围%s"
#define HDLC_E_CANNOT_SET_DEBUG_FMT_C       "%% 不能设置HDLC调试信息%s"
#define HDLC_E_IS_NOT_RUNNING_THIS_IF_FMT_C "%% HDLC在本接口没有启动%s"
#endif /* HDLC_ZHANKA_INIT */

#ifdef SUB_VLAN_ZHANKA
#define SUB_VLAN_E_TMP_FMT                        "%% Sub vlan error temp%s"
#define SUB_VLAN_E_CANNOT_SET_DEBUG_FMT           "%% Sub vlan cannot set debug%s"
#define SUB_VLAN_E_VLAN_ID_IS_USED_FMT            "%% Please select another vlan ID%s"
#define SUB_VLAN_E_VLAN_IS_ALREADY_SET_FMT        "%% Vlan ID is already set in this sub interface %s"
#define SUB_VLAN_E_CANNOT_SET_DEBUG_FMT_C         "%% 不能设置vlan子接口调试信息%s"
#define SUB_VLAN_E_VLAN_ID_IS_USED_FMT_C          "%% 请选择另外一个vlan ID 号%s"
#define SUB_VLAN_E_VLAN_IS_ALREADY_SET_FMT_C      "%% Vlan ID已经在本接口配置过 %s"

#endif /* SUB_VLAN_ZHANKA */

#endif
