// Function: FUN_14040df20
// Addr: 14040df20
// Size: 1049 bytes


void FUN_14040df20(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  byte *pbVar2;
  uint *puVar3;
  byte *pbVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  char cVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  uint local_res10;
  
  if ((*(byte *)(param_4 + 2) & 0x80) != 0) {
    uVar14 = *(uint *)(param_1 + 0x30);
    if (uVar14 == 0) {
      uVar14 = 0;
    }
    else {
      uVar1 = uVar14 - 1;
      if (*(int *)(param_1 + 0x34 + (ulonglong)(uVar1 & 0x3f) * 4) == *(int *)(param_2 + 100)) {
        *(uint *)(param_1 + 0x30) = uVar1;
        uVar14 = uVar1;
      }
    }
    *(undefined4 *)(param_1 + 0x34 + (ulonglong)(uVar14 & 0x3f) * 4) =
         *(undefined4 *)(param_2 + 100);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  if ((((*(byte *)(param_4 + 2) & 0x20) != 0) && (uVar14 = *(uint *)(param_1 + 0x30), uVar14 != 0))
     && (*(uint *)(param_2 + 0x5c) < *(uint *)(param_2 + 0x60))) {
    uVar6 = *(undefined4 *)(param_2 + 100);
    local_res10 = 0;
    pbVar17 = (byte *)(*(longlong *)(param_1 + 0x18) +
                      (ulonglong)CONCAT11(*(undefined1 *)(param_4 + 4),*(undefined1 *)(param_4 + 5))
                      * 4);
    do {
      uVar14 = uVar14 - 1;
      cVar11 = FUN_1403ec600(param_2,*(undefined4 *)
                                      (param_1 + 0x34 + (ulonglong)(uVar14 & 0x3f) * 4));
      if (cVar11 == '\0') {
        return;
      }
      lVar9 = *(longlong *)(param_1 + 8);
      pbVar2 = pbVar17 + 4;
      pcVar13 = "OUT-OF-RANGE";
      uVar16 = (ulonglong)*(uint *)(lVar9 + 0x40);
      uVar15 = (longlong)pbVar2 - *(longlong *)(lVar9 + 0x30);
      if (uVar15 <= uVar16) {
        pcVar13 = "OK";
      }
      FUN_1402fc370("SANITIZE",pbVar2,0,1,*(int *)(lVar9 + 0x28) + 1,0,
                    "check_point [%p] in [%p..%p] -> %s",pbVar2,*(longlong *)(lVar9 + 0x30),
                    *(undefined8 *)(lVar9 + 0x38),pcVar13);
      if (uVar16 < uVar15) goto LAB_14040e306;
      lVar9 = *(longlong *)(param_1 + 8);
      uVar15 = (ulonglong)*(uint *)(lVar9 + 0x40);
      uVar12 = (uint)pbVar17[3] +
               (uint)pbVar17[1] * 0x10000 + (uint)pbVar17[2] * 0x100 + (uint)*pbVar17 * 0x1000000;
      uVar1 = uVar12 & 0x3fffffff | 0xc0000000;
      if ((uVar12 >> 0x1d & 1) == 0) {
        uVar1 = uVar12 & 0x3fffffff;
      }
      pbVar4 = (byte *)(*(longlong *)(param_1 + 0x20) +
                       (ulonglong)
                       (uVar1 + *(int *)(*(longlong *)(param_2 + 0x70) +
                                        (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14)) * 2);
      pbVar17 = pbVar4 + 2;
      pcVar13 = "OUT-OF-RANGE";
      uVar16 = (longlong)pbVar17 - *(longlong *)(lVar9 + 0x30);
      if (uVar16 <= uVar15) {
        pcVar13 = "OK";
      }
      FUN_1402fc370("SANITIZE",pbVar17,0,1,*(int *)(lVar9 + 0x28) + 1,0,
                    "check_point [%p] in [%p..%p] -> %s",pbVar17,*(longlong *)(lVar9 + 0x30),
                    *(undefined8 *)(lVar9 + 0x38),pcVar13);
      if (uVar15 < uVar16) goto LAB_14040e306;
      local_res10 = (uint)*pbVar4 * 0x100 + local_res10 + (uint)pbVar4[1];
      if ((uVar12 & 0xc0000000) != 0) {
        lVar9 = *(longlong *)(param_1 + 8);
        uVar16 = (ulonglong)*(uint *)(lVar9 + 0x40);
        pbVar4 = (byte *)(*(longlong *)(param_1 + 0x28) + (ulonglong)local_res10 * 2);
        pbVar17 = pbVar4 + 2;
        uVar15 = (longlong)pbVar17 - *(longlong *)(lVar9 + 0x30);
        pcVar13 = "OUT-OF-RANGE";
        if (uVar15 <= uVar16) {
          pcVar13 = "OK";
        }
        FUN_1402fc370("SANITIZE",pbVar17,0,1,*(int *)(lVar9 + 0x28) + 1,0,
                      "check_point [%p] in [%p..%p] -> %s",pbVar17,*(longlong *)(lVar9 + 0x30),
                      *(undefined8 *)(lVar9 + 0x38),pcVar13);
        if (uVar16 < uVar15) goto LAB_14040e306;
        cVar11 = FUN_1403f7d40(*(undefined8 *)(param_1 + 8),(uint)*pbVar4 * 0x100 + (uint)pbVar4[1])
        ;
        if (cVar11 == '\0') {
          return;
        }
        iVar7 = *(int *)(param_1 + 0x30);
        uVar1 = iVar7 - 1;
        iVar8 = *(int *)(param_1 + 0x34 + (ulonglong)(uVar1 & 0x3f) * 4);
        while (uVar14 < uVar1) {
          *(uint *)(param_1 + 0x30) = iVar7 - 1U;
          cVar11 = FUN_1403ec600(param_2,*(undefined4 *)
                                          (param_1 + 0x34 + (ulonglong)(iVar7 - 1U & 0x3f) * 4));
          if (cVar11 == '\0') {
            return;
          }
          lVar9 = *(longlong *)(param_1 + 8);
          puVar3 = (uint *)(*(longlong *)(lVar9 + 0x20) + 0xd8);
          *puVar3 = *puVar3 | 0x1000000;
          uVar15 = (ulonglong)*(uint *)(*(longlong *)(lVar9 + 0x20) + 0x5c);
          lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x20) + 0x70);
          puVar5 = (ushort *)(lVar10 + 0x10 + uVar15 * 0x14);
          *puVar5 = *puVar5 & 0xa0;
          puVar5 = (ushort *)(lVar10 + 0x10 + uVar15 * 0x14);
          *puVar5 = *puVar5 | 0x841;
          cVar11 = FUN_1403f7e30(*(undefined8 *)(lVar9 + 0x20),0xffff);
          if (cVar11 == '\0') {
            return;
          }
          iVar7 = *(int *)(param_1 + 0x30);
          uVar1 = iVar7 - 1;
        }
        cVar11 = FUN_1403ec600(param_2,iVar8 + 1);
        if (cVar11 == '\0') {
          return;
        }
        if ((1 < (uint)(*(int *)(param_2 + 100) -
                       *(int *)(param_1 + (ulonglong)(uVar14 & 0x3f) * 4 + 0x34))) &&
           (*(uint *)(param_2 + 0x1c) < 2)) {
          FUN_1403ec3f0(param_2);
        }
      }
      if ((int)uVar12 < 0) goto LAB_14040e306;
      pbVar17 = pbVar2;
    } while (uVar14 != 0);
    *(undefined4 *)(param_1 + 0x30) = 0;
LAB_14040e306:
    FUN_1403ec600(param_2,uVar6);
  }
  return;
}

