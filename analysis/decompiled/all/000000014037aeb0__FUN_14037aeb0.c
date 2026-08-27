// Function: FUN_14037aeb0
// Addr: 14037aeb0
// Size: 1177 bytes


ulonglong FUN_14037aeb0(byte *param_1,int *param_2,undefined4 param_3)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  switch(param_3) {
  case 1:
    uVar6 = FUN_14037b370(param_1);
    break;
  case 2:
    pbVar1 = param_1 + 2;
    uVar8 = (ulonglong)(uint)param_2[6];
    pcVar2 = "OUT-OF-RANGE";
    uVar6 = 1;
    uVar7 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
    if (uVar7 <= uVar8) {
      pcVar2 = "OK";
    }
    FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
    if (uVar7 <= uVar8) {
      iVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      iVar5 = (int)uVar6;
      if (iVar3 == iVar5) {
        uVar6 = FUN_1403ff420(param_1,param_2);
        return uVar6;
      }
      if (iVar3 - iVar5 == iVar5) {
        uVar6 = FUN_1403ff610(param_1,param_2);
        return uVar6;
      }
LAB_14037af8a:
      return uVar6 & 0xff;
    }
    goto LAB_14037af6d;
  case 3:
    uVar6 = FUN_140379ec0(param_1);
    break;
  case 4:
    pbVar1 = param_1 + 2;
    uVar8 = (ulonglong)(uint)param_2[6];
    pcVar2 = "OUT-OF-RANGE";
    uVar6 = 1;
    uVar7 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
    if (uVar7 <= uVar8) {
      pcVar2 = "OK";
    }
    FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
    if (uVar7 <= uVar8) {
      if ((uint)*param_1 * 0x100 + (uint)param_1[1] == (int)uVar6) {
        uVar6 = FUN_1403fefb0(param_1,param_2);
        return uVar6;
      }
      goto LAB_14037af8a;
    }
    goto LAB_14037af6d;
  case 5:
    pbVar1 = param_1 + 2;
    uVar8 = (ulonglong)(uint)param_2[6];
    pcVar2 = "OUT-OF-RANGE";
    uVar6 = 1;
    uVar7 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
    if (uVar7 <= uVar8) {
      pcVar2 = "OK";
    }
    FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
    if (uVar7 <= uVar8) {
      if ((uint)*param_1 * 0x100 + (uint)param_1[1] == (int)uVar6) {
        uVar6 = FUN_1403ff150(param_1,param_2);
        return uVar6;
      }
      goto LAB_14037af8a;
    }
    goto LAB_14037af6d;
  case 6:
    pbVar1 = param_1 + 2;
    uVar8 = (ulonglong)(uint)param_2[6];
    pcVar2 = "OUT-OF-RANGE";
    uVar6 = 1;
    uVar7 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
    if (uVar7 <= uVar8) {
      pcVar2 = "OK";
    }
    FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
    if (uVar7 <= uVar8) {
      if ((uint)*param_1 * 0x100 + (uint)param_1[1] == (int)uVar6) {
        uVar6 = FUN_1403fefb0(param_1,param_2);
        return uVar6;
      }
      goto LAB_14037af8a;
    }
LAB_14037af6d:
    uVar6 = 0;
    break;
  case 7:
    uVar6 = FUN_140379c10(param_1);
    break;
  case 8:
    uVar6 = FUN_140379870(param_1);
    break;
  case 9:
    uVar8 = (ulonglong)(uint)param_2[6];
    pcVar2 = "OUT-OF-RANGE";
    pbVar1 = param_1 + 2;
    uVar6 = 1;
    uVar7 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
    if (uVar7 <= uVar8) {
      pcVar2 = "OK";
    }
    FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                  *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar2);
    if (uVar7 <= uVar8) {
      if ((uint)*param_1 * 0x100 + (uint)param_1[1] != (int)uVar6) {
        return uVar6 & 0xff;
      }
      uVar6 = (ulonglong)(uint)param_2[6];
      uVar8 = (longlong)(param_1 + 8) - *(longlong *)(param_2 + 2);
      FUN_1402fc370("SANITIZE",param_1 + 8,0);
      if ((uVar8 <= uVar6) && ((uint)*pbVar1 * 0x100 + (uint)param_1[3] != 9)) {
        uVar4 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000
                + (uint)param_1[7];
        if (uVar4 == 0) {
          uVar6 = FUN_14037aeb0(&DAT_14045dd10,param_2);
          return uVar6;
        }
        uVar6 = FUN_14037aeb0(param_1 + uVar4,param_2);
        return uVar6;
      }
    }
    uVar6 = 0;
    break;
  default:
    uVar6 = 1;
  }
  return uVar6;
}

