// Function: FUN_140316ad0
// Addr: 140316ad0
// Size: 337 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140316ad0(longlong param_1,uint param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [32];
  undefined4 local_78 [16];
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_1 + 0x2e0);
  if (lVar4 == 0) {
    uVar10 = 6;
  }
  else {
    uVar11 = *(uint *)(lVar4 + 4);
    if (uVar11 < param_2) {
      param_2 = uVar11;
    }
    uVar13 = 0;
    uVar3 = 0;
    if (uVar11 != 0) {
      do {
        piVar5 = *(int **)(lVar4 + 8 + (uVar13 + 7) * 0x18);
        pbVar1 = (byte *)(lVar4 + (uVar13 + 7) * 0x18);
        puVar6 = *(undefined4 **)(pbVar1 + 0x10);
        if ((uint)uVar13 < param_2) {
          iVar8 = *(int *)(uVar13 * 4 + param_3);
        }
        else {
          iVar8 = (piVar5[(ulonglong)*pbVar1 - 1] - *piVar5) / 2;
        }
        bVar2 = *pbVar1;
        uVar7 = 0;
        uVar15 = 0xffffffff;
        if (bVar2 == 0) {
LAB_140316bd2:
          uVar9 = *puVar6;
        }
        else {
          do {
            uVar12 = uVar7;
            if (iVar8 == piVar5[uVar12]) {
              uVar9 = puVar6[uVar12];
              goto LAB_140316bd4;
            }
            if (iVar8 < piVar5[uVar12]) {
              iVar14 = (int)uVar15;
              if (iVar14 < 0) goto LAB_140316bd2;
              uVar9 = FUN_1402f20b0(iVar8 - piVar5[iVar14],puVar6[uVar12] - puVar6[iVar14],
                                    piVar5[uVar12] - piVar5[iVar14]);
              goto LAB_140316bd4;
            }
            uVar11 = (int)uVar12 + 1;
            uVar7 = (ulonglong)uVar11;
            uVar15 = uVar12;
          } while ((int)uVar11 < (int)(uint)bVar2);
          uVar9 = puVar6[(ulonglong)bVar2 - 1];
        }
LAB_140316bd4:
        uVar3 = *(uint *)(lVar4 + 4);
        uVar11 = (uint)uVar13 + 1;
        local_78[uVar13] = uVar9;
        uVar13 = (ulonglong)uVar11;
      } while (uVar11 < uVar3);
    }
    uVar10 = FUN_14031b140(param_1,uVar3,local_78);
  }
  return uVar10;
}

