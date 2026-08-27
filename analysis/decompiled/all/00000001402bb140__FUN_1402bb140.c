// Function: FUN_1402bb140
// Addr: 1402bb140
// Size: 372 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402bb140(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,undefined8 param_6,int param_7,int param_8,longlong param_9,
                  undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;
  
  local_18 = DAT_1404dc040 ^ (ulonglong)auStackY_e8;
  local_b8._0_8_ = _DAT_14042c3e0;
  local_b8.ExceptionRecord = _UNK_14042c3e8;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)FUN_1402be500;
  local_b8.ExceptionAddress = _DAT_14042c3f0;
  local_b8._24_8_ = _UNK_14042c3f8;
  local_b8.ExceptionInformation[2] = param_5;
  local_b8.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_b8.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_b8.ExceptionInformation[5] = *(longlong *)(param_9 + 0x18) + param_10[1];
  local_b8.ExceptionInformation[9] = *(longlong *)(param_9 + 0x20) + param_10[1];
  local_b8.ExceptionInformation[0xb] = (ULONG_PTR)param_8;
  local_b8.ExceptionInformation[10] = _DAT_14042c450;
  local_b8.ExceptionInformation[0xc]._0_4_ = _DAT_14042c460;
  local_b8.ExceptionInformation[0xc]._4_4_ = _UNK_14042c464;
  local_b8.ExceptionInformation[0xd]._0_4_ = _UNK_14042c468;
  local_b8.ExceptionInformation[0xd]._4_4_ = _UNK_14042c46c;
  local_b8.ExceptionInformation[0xe] = DAT_14042c470;
  local_b8.ExceptionInformation[8] = 0x19930520;
  local_b8.ExceptionInformation[1] = param_4;
  local_b8.ExceptionInformation[4] = param_3;
  local_b8.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  return;
}

