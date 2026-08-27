// Function: FUN_1403f1b50
// Addr: 1403f1b50
// Size: 466 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403f1b50(undefined8 param_1,longlong param_2,longlong param_3,int *param_4,uint param_5,
                  int param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1404dc040 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1403c99a0(param_2,*(undefined4 *)
                                 (*(longlong *)(param_3 + 0x70) + (ulonglong)param_5 * 0x14),
                        &local_38,1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x2c);
  lVar3 = *(longlong *)(param_3 + 0x80) + (ulonglong)param_5 * 0x14;
  uVar4 = param_6 - 200;
  *(undefined8 *)(lVar3 + 8) = 0;
  switch((ulonglong)uVar4) {
  case 0:
  case 0x12:
  case 0x1c:
    *(int *)(lVar3 + 8) = *param_4 - local_38;
    break;
  default:
switchD_1403f1bea_caseD_1:
    *(int *)(lVar3 + 8) = ((param_4[2] - local_30) / 2 - local_38) + *param_4;
    if (0x22 < uVar4) {
      return;
    }
    break;
  case 0x10:
  case 0x16:
  case 0x20:
    *(int *)(lVar3 + 8) = ((param_4[2] - local_38) - local_30) + *param_4;
    break;
  case 0x21:
  case 0x22:
    if (*(int *)(param_3 + 0x38) == 4) {
      *(int *)(lVar3 + 8) = ((param_4[2] - local_30 / 2) - local_38) + *param_4;
    }
    else {
      if (*(int *)(param_3 + 0x38) != 5) goto switchD_1403f1bea_caseD_1;
      *(int *)(lVar3 + 8) = (*param_4 - local_30 / 2) - local_38;
    }
  }
  iVar1 = (int)((iVar1 >> 0x1f & 0xfU) + iVar1) >> 4;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((&switchD_1403f1c8b::switchdataD_1403f1d70)[uVar4]) {
  default:
    goto switchD_1403f1c8b_caseD_1;
  case 0x12:
  case 0x14:
  case 0x16:
  case 0x21:
    param_4[3] = param_4[3] - iVar1;
  case 0:
  case 2:
    iVar2 = (param_4[1] - local_34) + param_4[3];
    *(int *)(lVar3 + 0xc) = iVar2;
    if (0 < iVar1 == 0 < iVar2) {
      param_4[3] = param_4[3] - iVar2;
      *(undefined4 *)(lVar3 + 0xc) = 0;
    }
    break;
  case 0x1c:
  case 0x1e:
  case 0x20:
  case 0x22:
    param_4[1] = param_4[1] + iVar1;
    param_4[3] = param_4[3] - iVar1;
  case 0xe:
  case 0x10:
    local_34 = (param_4[1] - local_2c) - local_34;
    *(int *)(lVar3 + 0xc) = local_34;
    if (0 < iVar1 != 0 < local_34) {
      iVar1 = -(local_34 / 2);
      param_4[1] = param_4[1] + iVar1;
      param_4[3] = param_4[3] + local_34 / 2;
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + iVar1;
    }
    param_4[1] = param_4[1] - local_2c;
  }
  param_4[3] = param_4[3] + local_2c;
switchD_1403f1c8b_caseD_1:
  return;
}

