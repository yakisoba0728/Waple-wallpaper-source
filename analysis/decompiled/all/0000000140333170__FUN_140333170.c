// Function: FUN_140333170
// Addr: 140333170
// Size: 565 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140333170(undefined8 *param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  int *local_c0;
  int local_b8 [2];
  undefined4 local_b0 [2];
  uint local_a8;
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_e8;
  lVar1 = param_1[2];
  piVar2 = (int *)param_1[1];
  local_b0[0] = 3;
  iVar4 = FUN_1403335f0(param_1,local_b0,1);
  if (((iVar4 == 1) && (-1 < (int)local_a8)) &&
     (*(uint *)(lVar1 + 0x38) = local_a8, local_a8 <= (uint)(piVar2[4] - *piVar2) / 10)) {
    if (local_a8 != 0) {
      local_c0 = local_b8;
      local_c8 = 0;
      uVar8 = FUN_1402f7ff0(*param_1,0x10,0);
      *(undefined8 *)(lVar1 + 0x30) = uVar8;
      if (local_b8[0] != 0) {
        return local_b8[0];
      }
    }
    iVar4 = -1;
    do {
      plVar12 = (longlong *)param_1[1];
      while( true ) {
        if ((int)plVar12[3] < 2) {
          FUN_140333980(plVar12);
        }
        *(undefined4 *)(plVar12 + 3) = 0;
        uVar9 = FUN_140333900(plVar12);
        if (uVar9 != 0) break;
        if (2 < (int)plVar12[3]) {
          return 0xa0;
        }
        if ((int)plVar12[3] < 2) {
          return 0xa0;
        }
      }
      iVar5 = FUN_140333a60(uVar9,~uVar9 + *plVar12);
      switch(iVar5) {
      case 0x14:
      case 0x15:
      case 0x16:
        iVar5 = *(int *)(lVar1 + 0x38);
        iVar4 = iVar4 + 1;
        if (iVar4 != iVar5) {
          *(int *)(lVar1 + 0x38) = iVar4;
          iVar5 = iVar4;
        }
        FUN_1402ea670(*(undefined8 *)(lVar1 + 0x30),iVar5,0x10,&LAB_14031a830);
        return 0;
      default:
        goto switchD_1403332a5_caseD_17;
      case 0x22:
      case 0x24:
      case 0x25:
        iVar11 = iVar4 + 1;
        if (*(int *)(lVar1 + 0x38) <= iVar11) {
          return 0xa0;
        }
        lVar3 = *(longlong *)(lVar1 + 0x30);
        local_98[0] = 5;
        local_88 = 5;
        local_78 = 3;
        local_68 = 3;
        iVar6 = FUN_1403335f0(param_1,local_98,4);
        if (iVar6 < 3) {
          return 0xa0;
        }
        lVar10 = (longlong)iVar4 + 1;
        *(undefined4 *)(lVar3 + lVar10 * 0x10) = local_90;
        *(undefined4 *)(lVar3 + 4 + lVar10 * 0x10) = local_80;
        iVar4 = iVar11;
        if (iVar5 == 0x25) {
          *(undefined4 *)(lVar3 + 8 + lVar10 * 0x10) = 0;
          *(undefined4 *)(lVar3 + 0xc + lVar10 * 0x10) = local_70;
        }
        else {
          *(undefined4 *)(lVar3 + 8 + lVar10 * 0x10) = local_70;
          if ((iVar5 != 0x22) || (uVar7 = local_60, iVar6 != 4)) {
            uVar7 = 0;
          }
          *(undefined4 *)(lVar3 + 0xc + lVar10 * 0x10) = uVar7;
        }
        break;
      case 0x4b:
        break;
      }
    } while( true );
  }
switchD_1403332a5_caseD_17:
  return 0xa0;
}

