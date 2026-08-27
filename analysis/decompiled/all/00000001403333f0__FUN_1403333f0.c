// Function: FUN_1403333f0
// Addr: 1403333f0
// Size: 497 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1403333f0(undefined8 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
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
  undefined4 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_e8;
  lVar2 = param_1[2];
  piVar3 = (int *)param_1[1];
  local_b0[0] = 3;
  iVar4 = FUN_1403335f0(param_1,local_b0,1);
  if (((iVar4 == 1) && (-1 < (int)local_a8)) &&
     (*(uint *)(lVar2 + 0x28) = local_a8, local_a8 <= (uint)(piVar3[4] - *piVar3) / 0x14)) {
    if (local_a8 != 0) {
      local_c0 = local_b8;
      local_c8 = 0;
      uVar6 = FUN_1402f7ff0(*param_1,0x14,0);
      *(undefined8 *)(lVar2 + 0x20) = uVar6;
      if (local_b8[0] != 0) {
        return local_b8[0];
      }
    }
    iVar4 = -1;
LAB_1403334a4:
    do {
      plVar9 = (longlong *)param_1[1];
      while( true ) {
        if ((int)plVar9[3] < 2) {
          FUN_140333980(plVar9);
        }
        *(undefined4 *)(plVar9 + 3) = 0;
        uVar7 = FUN_140333900(plVar9);
        if (uVar7 != 0) break;
        lVar8 = 0;
        if ((2 < (int)plVar9[3]) || ((int)plVar9[3] < 2)) goto LAB_1403334e9;
      }
      lVar8 = ~uVar7 + *plVar9;
LAB_1403334e9:
      if (uVar7 == 0) {
        return 0xa0;
      }
      iVar5 = FUN_140333a60(uVar7,lVar8);
      if (((iVar5 == 0x14) || (iVar5 == 0x15)) || (iVar5 == 0x17)) {
        if (iVar4 + 1 != *(int *)(lVar2 + 0x28)) {
          *(int *)(lVar2 + 0x28) = iVar4 + 1;
        }
        return 0;
      }
      if (iVar5 == 0x38) {
        if (*(int *)(lVar2 + 0x28) <= iVar4 + 1) {
          return 0xa0;
        }
        lVar8 = *(longlong *)(lVar2 + 0x20);
        local_98[0] = 3;
        local_88 = 2;
        local_78 = 2;
        local_68 = 2;
        local_58 = 2;
        iVar5 = FUN_1403335f0(param_1,local_98,5);
        if (iVar5 != 5) {
          return 0xa0;
        }
        puVar1 = (undefined4 *)(lVar8 + ((longlong)iVar4 + 1) * 0x14);
        *puVar1 = local_90;
        puVar1[1] = local_80;
        puVar1[2] = local_70;
        puVar1[3] = local_60;
        puVar1[4] = local_50;
        iVar4 = iVar4 + 1;
        goto LAB_1403334a4;
      }
    } while (iVar5 == 0x4b);
  }
  return 0xa0;
}

