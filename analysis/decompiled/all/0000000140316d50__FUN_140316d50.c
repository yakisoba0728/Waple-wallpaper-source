// Function: FUN_140316d50
// Addr: 140316d50
// Size: 375 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140316d50(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [32];
  int aiStack_88 [4];
  undefined4 local_78 [16];
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_a8;
  uVar11 = 4;
  if (param_2 < 5) {
    uVar11 = param_2;
  }
  uVar13 = 0;
  if (uVar11 != 0) {
    do {
      iVar8 = FUN_1402f4b60();
      uVar14 = (int)uVar13 + 1;
      aiStack_88[uVar13] = iVar8 >> 0x10;
      uVar13 = (ulonglong)uVar14;
    } while (uVar14 < uVar11);
  }
  lVar3 = *(longlong *)(param_1 + 0x2e0);
  if (lVar3 == 0) {
    uVar10 = 6;
  }
  else {
    uVar14 = *(uint *)(lVar3 + 4);
    uVar6 = uVar14;
    if (uVar11 <= uVar14) {
      uVar6 = uVar11;
    }
    uVar13 = 0;
    uVar11 = 0;
    if (uVar14 != 0) {
      do {
        piVar4 = *(int **)(lVar3 + 8 + (uVar13 + 7) * 0x18);
        pbVar1 = (byte *)(lVar3 + (uVar13 + 7) * 0x18);
        puVar5 = *(undefined4 **)(pbVar1 + 0x10);
        if ((uint)uVar13 < uVar6) {
          iVar8 = aiStack_88[uVar13];
        }
        else {
          iVar8 = (piVar4[(ulonglong)*pbVar1 - 1] - *piVar4) / 2;
        }
        bVar2 = *pbVar1;
        uVar7 = 0;
        uVar16 = 0xffffffff;
        if (bVar2 == 0) {
LAB_140316e82:
          uVar9 = *puVar5;
        }
        else {
          do {
            uVar12 = uVar7;
            if (iVar8 == piVar4[uVar12]) {
              uVar9 = puVar5[uVar12];
              goto LAB_140316e84;
            }
            if (iVar8 < piVar4[uVar12]) {
              iVar15 = (int)uVar16;
              if (iVar15 < 0) goto LAB_140316e82;
              uVar9 = FUN_1402f20b0(iVar8 - piVar4[iVar15],puVar5[uVar12] - puVar5[iVar15],
                                    piVar4[uVar12] - piVar4[iVar15]);
              goto LAB_140316e84;
            }
            uVar11 = (int)uVar12 + 1;
            uVar7 = (ulonglong)uVar11;
            uVar16 = uVar12;
          } while ((int)uVar11 < (int)(uint)bVar2);
          uVar9 = puVar5[(ulonglong)bVar2 - 1];
        }
LAB_140316e84:
        uVar11 = *(uint *)(lVar3 + 4);
        uVar14 = (uint)uVar13 + 1;
        local_78[uVar13] = uVar9;
        uVar13 = (ulonglong)uVar14;
      } while (uVar14 < uVar11);
    }
    uVar10 = FUN_14031b140(param_1,uVar11,local_78);
  }
  return uVar10;
}

