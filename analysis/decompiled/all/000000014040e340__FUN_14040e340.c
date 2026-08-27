// Function: FUN_14040e340
// Addr: 14040e340
// Size: 1119 bytes


void FUN_14040e340(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  byte *pbVar1;
  uint *puVar2;
  byte *pbVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  char *pcVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte *pbVar20;
  
  if ((*(byte *)(param_4 + 2) & 0x80) != 0) {
    uVar17 = *(uint *)(param_1 + 0x30);
    if (uVar17 == 0) {
      uVar17 = 0;
    }
    else {
      uVar16 = uVar17 - 1;
      if (*(int *)(param_1 + 0x34 + (ulonglong)(uVar16 & 0x3f) * 4) == *(int *)(param_2 + 100)) {
        *(uint *)(param_1 + 0x30) = uVar16;
        uVar17 = uVar16;
      }
    }
    *(undefined4 *)(param_1 + 0x34 + (ulonglong)(uVar17 & 0x3f) * 4) =
         *(undefined4 *)(param_2 + 100);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  uVar17 = (uint)*(byte *)(param_4 + 3) + (uint)*(byte *)(param_4 + 2) * 0x100 & 0x3fff;
  if (((uVar17 != 0) && (uVar16 = *(uint *)(param_1 + 0x30), uVar16 != 0)) &&
     (*(uint *)(param_2 + 0x5c) < *(uint *)(param_2 + 0x60))) {
    uVar5 = *(undefined4 *)(param_2 + 100);
    iVar15 = (int)*(longlong *)(param_1 + 0x18);
    uVar14 = (ulonglong)((*(int *)(param_1 + 0x10) - iVar15) + uVar17 >> 2);
    if (uVar17 < (uint)(iVar15 - *(int *)(param_1 + 0x10))) {
      uVar14 = 0x1fffffff;
    }
    uVar19 = 0;
    pbVar20 = (byte *)(*(longlong *)(param_1 + 0x18) + uVar14 * 4);
    do {
      uVar16 = uVar16 - 1;
      lVar12 = (ulonglong)(uVar16 & 0x3f) + 0xd;
      cVar10 = FUN_1403ec600(param_2,*(undefined4 *)(param_1 + lVar12 * 4));
      if (cVar10 == '\0') {
        return;
      }
      lVar7 = *(longlong *)(param_1 + 8);
      pbVar1 = pbVar20 + 4;
      pcVar13 = "OUT-OF-RANGE";
      uVar18 = (ulonglong)*(uint *)(lVar7 + 0x40);
      uVar14 = (longlong)pbVar1 - *(longlong *)(lVar7 + 0x30);
      if (uVar14 <= uVar18) {
        pcVar13 = "OK";
      }
      FUN_1402fc370("SANITIZE",pbVar1,0,1,*(int *)(lVar7 + 0x28) + 1,0,
                    "check_point [%p] in [%p..%p] -> %s",pbVar1,*(longlong *)(lVar7 + 0x30),
                    *(undefined8 *)(lVar7 + 0x38),pcVar13);
      if (uVar18 < uVar14) goto LAB_14040e769;
      iVar15 = (int)*(longlong *)(param_1 + 0x20);
      uVar11 = (uint)pbVar20[3] +
               (uint)pbVar20[1] * 0x10000 + (uint)pbVar20[2] * 0x100 + (uint)*pbVar20 * 0x1000000;
      uVar17 = uVar11 & 0x3fffffff | 0xc0000000;
      if ((uVar11 >> 0x1d & 1) == 0) {
        uVar17 = uVar11 & 0x3fffffff;
      }
      pcVar13 = "OUT-OF-RANGE";
      uVar9 = (uVar17 + *(int *)(*(longlong *)(param_2 + 0x70) +
                                (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14)) * 2;
      uVar17 = (uVar9 - iVar15) + *(int *)(param_1 + 0x10) >> 1;
      if (uVar9 < (uint)(iVar15 - *(int *)(param_1 + 0x10))) {
        uVar17 = 0x3fffffff;
      }
      pbVar3 = (byte *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar17 * 2);
      lVar7 = *(longlong *)(param_1 + 8);
      pbVar20 = pbVar3 + 2;
      uVar18 = (ulonglong)*(uint *)(lVar7 + 0x40);
      uVar14 = (longlong)pbVar20 - *(longlong *)(lVar7 + 0x30);
      if (uVar14 <= uVar18) {
        pcVar13 = "OK";
      }
      FUN_1402fc370("SANITIZE",pbVar20,0,1,*(int *)(lVar7 + 0x28) + 1,0,
                    "check_point [%p] in [%p..%p] -> %s",pbVar20,*(longlong *)(lVar7 + 0x30),
                    *(undefined8 *)(lVar7 + 0x38),pcVar13);
      if (uVar18 < uVar14) goto LAB_14040e769;
      uVar17 = (uint)pbVar3[1] + (uint)*pbVar3 * 0x100 + (int)uVar19;
      uVar19 = (ulonglong)uVar17;
      if ((uVar11 & 0xc0000000) != 0) {
        lVar7 = *(longlong *)(param_1 + 8);
        iVar15 = (int)*(longlong *)(param_1 + 0x28);
        uVar14 = (ulonglong)*(uint *)(lVar7 + 0x40);
        uVar9 = (uVar17 - iVar15) + *(int *)(param_1 + 0x10) >> 1;
        if (uVar17 < (uint)(iVar15 - *(int *)(param_1 + 0x10))) {
          uVar9 = 0x3fffffff;
        }
        uVar19 = (ulonglong)uVar9;
        pcVar13 = "OUT-OF-RANGE";
        pbVar3 = (byte *)(*(longlong *)(param_1 + 0x28) + uVar19 * 2);
        pbVar20 = pbVar3 + 2;
        uVar18 = (longlong)pbVar20 - *(longlong *)(lVar7 + 0x30);
        if (uVar18 <= uVar14) {
          pcVar13 = "OK";
        }
        FUN_1402fc370("SANITIZE",pbVar20,0,1,*(int *)(lVar7 + 0x28) + 1,0,
                      "check_point [%p] in [%p..%p] -> %s",pbVar20,*(longlong *)(lVar7 + 0x30),
                      *(undefined8 *)(lVar7 + 0x38),pcVar13);
        if (uVar14 < uVar18) goto LAB_14040e769;
        cVar10 = FUN_1403f7d40(*(undefined8 *)(param_1 + 8),(uint)pbVar3[1] + (uint)*pbVar3 * 0x100)
        ;
        if (cVar10 == '\0') {
          return;
        }
        iVar15 = *(int *)(param_1 + 0x30);
        uVar17 = iVar15 - 1;
        iVar6 = *(int *)(param_1 + 0x34 + (ulonglong)(uVar17 & 0x3f) * 4);
        while (uVar16 < uVar17) {
          *(uint *)(param_1 + 0x30) = iVar15 - 1U;
          cVar10 = FUN_1403ec600(param_2,*(undefined4 *)
                                          (param_1 + 0x34 + (ulonglong)(iVar15 - 1U & 0x3f) * 4));
          if (cVar10 == '\0') {
            return;
          }
          lVar7 = *(longlong *)(param_1 + 8);
          puVar2 = (uint *)(*(longlong *)(lVar7 + 0x20) + 0xd8);
          *puVar2 = *puVar2 | 0x1000000;
          uVar14 = (ulonglong)*(uint *)(*(longlong *)(lVar7 + 0x20) + 0x5c);
          lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x20) + 0x70);
          puVar4 = (ushort *)(lVar8 + 0x10 + uVar14 * 0x14);
          *puVar4 = *puVar4 & 0xa0;
          puVar4 = (ushort *)(lVar8 + 0x10 + uVar14 * 0x14);
          *puVar4 = *puVar4 | 0x841;
          cVar10 = FUN_1403f7e30(*(undefined8 *)(lVar7 + 0x20),0xffff);
          if (cVar10 == '\0') {
            return;
          }
          iVar15 = *(int *)(param_1 + 0x30);
          uVar17 = iVar15 - 1;
        }
        cVar10 = FUN_1403ec600(param_2,iVar6 + 1);
        if (cVar10 == '\0') {
          return;
        }
        if ((1 < (uint)(*(int *)(param_2 + 100) - *(int *)(param_1 + lVar12 * 4))) &&
           (*(uint *)(param_2 + 0x1c) < 2)) {
          FUN_1403ec3f0(param_2);
        }
      }
      if ((int)uVar11 < 0) goto LAB_14040e769;
      pbVar20 = pbVar1;
    } while (uVar16 != 0);
    *(undefined4 *)(param_1 + 0x30) = 0;
LAB_14040e769:
    FUN_1403ec600(param_2,uVar5);
  }
  return;
}

