// Function: FUN_1402f9420
// Addr: 1402f9420
// Size: 819 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_1402f9420(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 *param_4,
             longlong param_5)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  uint local_128;
  int local_124;
  undefined4 local_120;
  longlong *local_118;
  longlong local_110;
  undefined4 *local_108;
  longlong local_100;
  uint local_f8 [10];
  undefined4 local_d0 [10];
  longlong local_a8 [10];
  ulonglong local_58;
  ulonglong uVar12;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_158;
  uVar12 = 0;
  local_100 = *param_1;
  local_124 = 2;
  local_110 = param_5;
  local_128 = local_128 & 0xffffff00;
  uVar7 = uVar12;
  local_120 = param_3;
  local_118 = param_1;
  local_108 = param_4;
  do {
    local_a8[uVar7] = 0;
    if (param_2 == 0) {
      puVar10 = local_f8 + uVar7;
      *puVar10 = 0;
LAB_1402f951c:
      local_138 = local_d0 + uVar7;
      uVar6 = (*(code *)(&PTR_FUN_1404366e0)[uVar7 * 2])(param_1);
      *puVar10 = uVar6;
    }
    else {
      uVar6 = 0;
      if (*(code **)(param_2 + 0x20) == (code *)0x0) {
LAB_1402f94ed:
        *(undefined4 *)(param_2 + 0xc) = 0;
      }
      else {
        iVar4 = (**(code **)(param_2 + 0x20))(param_2,0,0,0);
        uVar6 = -(uint)(iVar4 != 0) & 0x55;
        if (iVar4 == 0) goto LAB_1402f94ed;
      }
      puVar10 = local_f8 + uVar7;
      *puVar10 = uVar6;
      if (uVar6 == 0) goto LAB_1402f951c;
    }
    uVar7 = uVar7 + 1;
    iVar4 = local_124;
    uVar6 = local_128;
  } while (uVar7 != 9);
  do {
    if ((*(int *)(&DAT_1404366e8 + uVar12 * 0x10) == 3) ||
       (*(int *)(&DAT_1404366e8 + uVar12 * 0x10) == 4)) {
      bVar2 = true;
      if ((char)uVar6 == '\0') goto LAB_1402f958f;
    }
    else {
      bVar2 = false;
LAB_1402f958f:
      if (local_f8[uVar12] == 0) {
        lVar9 = local_a8[uVar12];
        if (lVar9 == 0) {
          lVar9 = *(longlong *)(local_110 + 0x18);
        }
        lVar8 = *local_118;
        puVar5 = (undefined8 *)(**(code **)(lVar8 + 8))(lVar8,0x48);
        if (puVar5 == (undefined8 *)0x0) {
          iVar4 = 0x40;
          puVar5 = (undefined8 *)0x0;
        }
        else {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[7] = 0;
          puVar5[8] = 0;
          puVar5[6] = lVar8;
          iVar4 = FUN_1402fb2c0(puVar5,lVar9);
          if (iVar4 != 0) {
            (**(code **)(lVar8 + 0x10))(lVar8,puVar5);
            puVar5 = (undefined8 *)0x0;
          }
        }
        uVar11 = 1;
        if ((bVar2) && (local_128 = local_128 & 0xff, (char)iVar4 == 'Q')) {
          local_128 = uVar11;
        }
        uVar3 = local_128;
        uVar6 = local_128;
        if (iVar4 == 0) {
          local_138 = local_108;
          iVar4 = FUN_1402f6180(local_118,puVar5,local_d0[uVar12],local_120);
          if (puVar5 != (undefined8 *)0x0) {
            lVar9 = puVar5[6];
            if ((code *)puVar5[5] != (code *)0x0) {
              (*(code *)puVar5[5])(puVar5);
            }
            (**(code **)(lVar9 + 0x10))(lVar9,puVar5);
          }
          if (iVar4 == 0) break;
          uVar6 = uVar3 & 0xff;
          local_128 = uVar3 & 0xff;
          if (bVar2) {
            uVar6 = uVar11;
            local_128 = uVar11;
          }
        }
      }
    }
    uVar11 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar11;
  } while (uVar11 < 9);
  lVar9 = local_100;
  lVar8 = 0;
  local_124 = iVar4;
  do {
    if (local_a8[lVar8] != 0) {
      (**(code **)(lVar9 + 0x10))(lVar9);
      local_a8[lVar8] = 0;
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 9);
  uVar1 = 0;
  if (local_124 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}

