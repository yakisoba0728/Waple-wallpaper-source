// Function: FUN_1403f0470
// Addr: 1403f0470
// Size: 611 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1403f0470(longlong *param_1,undefined8 param_2,uint param_3,longlong param_4,
                       undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined1 local_68 [8];
  undefined4 local_60;
  int local_5c;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_b8;
  puVar8 = &DAT_14045dd10;
  puVar5 = &DAT_14045dd10;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*param_1;
  }
  pbVar3 = (byte *)&DAT_14045dd10;
  if (7 < *(uint *)(puVar5 + 3)) {
    pbVar3 = (byte *)puVar5[2];
  }
  uVar4 = 0;
  if (((uint)*pbVar3 * 0x100 + (uint)pbVar3[1] != 0) &&
     (uVar4 = FUN_1403c99a0(param_2,param_3,local_58,0), (int)uVar4 != 0)) {
    local_98 = local_98 & 0xffffff00;
    uVar4 = FUN_1403cdfa0(param_1,param_2,param_3,local_68);
    if ((char)uVar4 != '\0') {
      pbVar3 = (byte *)FUN_1403b3410(param_1,param_2);
      if ((uint)*pbVar3 * 0x100 + (uint)pbVar3[1] != 0) {
        iVar11 = 8;
        lVar1 = *param_1;
        iVar12 = (int)pbVar3 - *(int *)(lVar1 + 0x10);
        if (param_3 < *(uint *)(param_1 + 1)) {
          while( true ) {
            uVar4 = (ulonglong)param_3;
            uVar10 = (ulonglong)(param_3 + 1);
            uVar6 = (uint)pbVar3[uVar4 * 4 + 7] +
                    (uint)pbVar3[uVar4 * 4 + 5] * 0x10000 + (uint)pbVar3[uVar4 * 4 + 6] * 0x100 +
                    (uint)pbVar3[uVar4 * 4 + 4] * 0x1000000;
            uVar9 = (uint)pbVar3[uVar10 * 4 + 7] +
                    (uint)pbVar3[uVar10 * 4 + 5] * 0x10000 + (uint)pbVar3[uVar10 * 4 + 6] * 0x100 +
                    (uint)pbVar3[uVar10 * 4 + 4] * 0x1000000;
            if (((uVar9 <= uVar6) || (uVar9 - uVar6 < 9)) ||
               ((uint)(*(int *)(lVar1 + 0x18) - iVar12) < uVar9)) goto LAB_1403f064e;
            if (uVar6 == 0) {
              pbVar7 = (byte *)&DAT_14045dd10;
            }
            else {
              pbVar7 = pbVar3 + uVar6;
            }
            iVar2 = (uint)pbVar7[7] +
                    (uint)pbVar7[5] * 0x10000 + (uint)pbVar7[6] * 0x100 +
                    (uint)pbVar7[4] * 0x1000000;
            if (iVar2 != 0x64757065) break;
            if (((uVar9 - uVar6) - 8 < 2) || (iVar11 == 0)) goto LAB_1403f064e;
            iVar11 = iVar11 + -1;
            param_3 = (uint)pbVar7[9] + (uint)pbVar7[8] * 0x100;
            if (*(uint *)(param_1 + 1) <= param_3) goto LAB_1403f064e;
          }
          if (iVar2 == 0x706e6720) {
            puVar8 = (undefined8 *)FUN_140413f90(lVar1,uVar6 + iVar12 + 8);
          }
        }
      }
LAB_1403f064e:
      uVar4 = 0;
      if (*(char *)((longlong)puVar8 + 4) != '\0') {
        local_98 = -local_5c;
        local_78 = 0;
        if (*(longlong *)(param_4 + 0x98) != 0) {
          local_78 = *(undefined8 *)(*(longlong *)(param_4 + 0x98) + 0x48);
        }
        local_80 = local_58;
        local_88 = 0;
        local_90 = 0x706e6720;
        iVar11 = (**(code **)(param_4 + 0x58))(param_4,param_5,puVar8,local_60);
        FUN_140414150(puVar8);
        return (ulonglong)(iVar11 != 0);
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}

