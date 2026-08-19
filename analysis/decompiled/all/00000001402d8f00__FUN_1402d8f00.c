// Function: FUN_1402d8f00
// Addr: 1402d8f00
// Size: 199 bytes


longlong FUN_1402d8f00(short *param_1,longlong param_2,short *param_3,longlong param_4,
                      longlong param_5,undefined8 param_6)

{
  short sVar1;
  short *psVar2;
  char cVar3;
  bool bVar4;
  longlong local_res8;
  short *local_58;
  longlong local_50;
  longlong local_48 [2];
  char cStack_38;
  
  if (((param_1 == (short *)0x0) || (param_2 == 0)) || (*param_1 = 0, param_3 == (short *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  func_0x0001402bf8e8(&local_50,param_6);
  local_res8 = param_2;
  local_58 = param_1;
  if (param_5 == 0) {
    param_5 = *(longlong *)(local_48[0] + 0x120);
  }
  do {
    sVar1 = *param_3;
    if (sVar1 == 0) break;
    if (sVar1 == 0x25) {
      if (param_4 == 0) goto LAB_1402d9033;
      sVar1 = param_3[1];
      bVar4 = sVar1 == 0x23;
      psVar2 = param_3 + 1;
      if (bVar4) {
        sVar1 = param_3[2];
        psVar2 = param_3 + 2;
      }
      param_3 = psVar2;
      if ((sVar1 == 0x45) || (sVar1 == 0x4f)) {
        param_3 = param_3 + 1;
        sVar1 = *param_3;
      }
      cVar3 = func_0x0001402d6fc0(local_48,sVar1,param_4,&local_58,&local_res8,param_5,bVar4);
      if (cVar3 == '\0') {
        if (local_res8 == 0) goto UNWIND_INFO_1402d903e_UnwindCodes_24__UnwindOpCode;
        *param_1 = 0;
        goto LAB_1402d9033;
      }
    }
    else {
      *local_58 = sVar1;
      local_58 = local_58 + 1;
      local_res8 = local_res8 + -1;
    }
    param_3 = param_3 + 1;
  } while (local_res8 != 0);
  if (local_res8 != 0) {
    *local_58 = 0;
    if (cStack_38 != '\0') {
      *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
    }
    return param_2 - local_res8;
  }
UNWIND_INFO_1402d903e_UnwindCodes_24__UnwindOpCode:
  *param_1 = 0;
  if (local_res8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
LAB_1402d9033:
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

