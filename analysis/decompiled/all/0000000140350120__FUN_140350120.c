// Function: FUN_140350120
// Addr: 140350120
// Size: 656 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140350120(longlong param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_1d8 [32];
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  undefined4 local_1a0;
  int local_19c;
  ulonglong local_28;
  
  local_28 = DAT_1404dc040 ^ (ulonglong)auStack_1d8;
  iVar1 = *(int *)(param_1 + 0x1c);
  local_1b0 = *param_3 << 2;
  local_1b4 = param_4[1] << 2;
  iVar7 = *param_4 << 2;
  local_1a8 = *param_2 << 2;
  local_1a0 = *(undefined4 *)(param_1 + 0x48);
  local_1b8 = iVar7;
  local_1ac = param_3[1] << 2;
  local_1a4 = param_2[1] << 2;
  local_19c = *(int *)(param_1 + 0x4c);
  iVar4 = (param_3[1] << 2) >> 8;
  iVar3 = (param_2[1] << 2) >> 8;
  iVar2 = *(int *)(param_1 + 0x4c) >> 8;
  if (((((iVar1 <= local_1b4 >> 8) && (iVar1 <= iVar4)) && (iVar1 <= iVar3)) && (iVar1 <= iVar2)) ||
     (((iVar1 = *(int *)(param_1 + 0x18), local_1b4 >> 8 < iVar1 && (iVar4 < iVar1)) &&
      ((iVar3 < iVar1 && (iVar2 < iVar1)))))) {
    *(int *)(param_1 + 0x48) = iVar7;
    *(int *)(param_1 + 0x4c) = local_1b4;
    return;
  }
  piVar6 = &local_1b8;
  do {
    while( true ) {
      iVar1 = piVar6[6];
      iVar2 = piVar6[2];
      iVar3 = iVar1 + iVar2 * -3 + iVar7 * 2;
      if (iVar3 < 0) {
        iVar3 = (iVar2 * 3 - iVar1) + iVar7 * -2;
      }
      if (iVar3 < 0x81) break;
LAB_1403502dd:
      piVar6[0xc] = iVar1;
      iVar4 = piVar6[4] + iVar2;
      iVar1 = piVar6[4] + iVar1;
      iVar3 = iVar1 + iVar4;
      iVar4 = iVar4 + *piVar6 + iVar2;
      piVar6[10] = iVar1 >> 1;
      iVar7 = iVar4 + iVar3 >> 3;
      piVar6[8] = iVar3 >> 2;
      piVar6[2] = *piVar6 + iVar2 >> 1;
      iVar5 = piVar6[1] + piVar6[3];
      piVar6[4] = iVar4 >> 2;
      piVar6[0xd] = piVar6[7];
      piVar6[6] = iVar7;
      iVar3 = piVar6[5] + piVar6[3];
      iVar1 = piVar6[5] + piVar6[7];
      iVar2 = iVar1 + iVar3;
      iVar3 = iVar3 + iVar5;
      piVar6[0xb] = iVar1 >> 1;
      piVar6[9] = iVar2 >> 2;
      piVar6[3] = iVar5 >> 1;
      piVar6[5] = iVar3 >> 2;
      piVar6[7] = iVar3 + iVar2 >> 3;
      piVar6 = piVar6 + 6;
    }
    iVar7 = piVar6[7];
    iVar3 = piVar6[1];
    iVar4 = iVar3 * 2 + piVar6[3] * -3 + iVar7;
    if (iVar4 < 0) {
      iVar4 = (piVar6[3] * 3 + iVar3 * -2) - iVar7;
    }
    if (0x80 < iVar4) goto LAB_1403502dd;
    iVar4 = *piVar6;
    iVar5 = iVar1 * 2 + piVar6[4] * -3 + iVar4;
    if (iVar5 < 0) {
      iVar5 = (piVar6[4] * 3 + iVar1 * -2) - iVar4;
    }
    if (0x80 < iVar5) goto LAB_1403502dd;
    iVar5 = iVar7 * 2 + piVar6[5] * -3 + iVar3;
    if (iVar5 < 0) {
      iVar5 = (piVar6[5] * 3 + iVar7 * -2) - iVar3;
    }
    if (0x80 < iVar5) goto LAB_1403502dd;
    FUN_1403503b0(param_1,iVar4,iVar3);
    if (piVar6 == &local_1b8) {
      return;
    }
    iVar7 = piVar6[-6];
    piVar6 = piVar6 + -6;
  } while( true );
}

