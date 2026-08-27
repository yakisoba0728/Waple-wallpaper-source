// Function: FUN_1403ab390
// Addr: 1403ab390
// Size: 701 bytes


void FUN_1403ab390(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 local_68 [8];
  uint local_60;
  undefined4 local_50 [2];
  int *local_48;
  int local_40;
  undefined4 local_3c;
  
  lVar14 = *(longlong *)(param_2 + 0x20);
  if (*(char *)(lVar14 + 0x58) != '\0') {
    if ((*(byte *)(lVar14 + 0x18) & 0x40) != 0) {
      uVar13 = *(uint *)(lVar14 + 0x60);
      if (*(uint *)(lVar14 + 0x60) == 0xffffffff) {
        uVar13 = 0xffffffff;
      }
      uVar9 = 0;
      if (uVar13 != 0) {
        do {
          uVar8 = (int)uVar9 + 1;
          puVar2 = (uint *)(*(longlong *)(lVar14 + 0x70) + 4 + uVar9 * 0x14);
          *puVar2 = *puVar2 | 2;
          uVar9 = (ulonglong)uVar8;
        } while (uVar8 < uVar13);
      }
    }
    FUN_14040b460(param_2);
    *(undefined4 *)(param_2 + 0xb0) = 0;
    uVar13 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
             (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
    if (uVar13 != 0) {
      uVar8 = 0;
      param_1 = param_1 + 8;
      local_60 = uVar13;
      do {
        lVar14 = *(longlong *)(param_2 + 0x18);
        iVar12 = *(int *)(lVar14 + 0x18);
        if (iVar12 == -1) {
          lVar5 = FUN_140398a10(lVar14 + 0x80);
          iVar12 = (uint)*(byte *)(lVar5 + 5) + (uint)*(byte *)(lVar5 + 4) * 0x100;
          if (iVar12 == 0) {
            iVar12 = 0;
          }
          *(int *)(lVar14 + 0x18) = iVar12;
        }
        if (uVar8 < *(uint *)(param_4 + 8)) {
          lVar14 = (ulonglong)uVar8 * 8;
          piVar6 = *(int **)(lVar14 + *(longlong *)(param_4 + 0x10));
          while (uVar13 = local_60, piVar6 == (int *)0x0) {
            bVar3 = *(byte *)(param_1 + 10);
            bVar4 = *(byte *)(param_1 + 0xb);
            piVar6 = (int *)_calloc_base(1);
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)0x0;
              uVar13 = local_60;
              break;
            }
            *piVar6 = (uint)bVar3 * 0x100 + (uint)bVar4;
            local_48 = piVar6 + 2;
            uVar11 = 0;
            local_50[0] = 0;
            local_3c = 0;
            pbVar10 = (byte *)(param_1 +
                              ((ulonglong)*(byte *)(param_1 + 8) * 0x100 +
                              (ulonglong)*(byte *)(param_1 + 9) + 1) * 0xc);
            uVar13 = (uint)*(byte *)(param_1 + 10) * 0x100 + (uint)*(byte *)(param_1 + 0xb);
            local_40 = iVar12;
            if (uVar13 != 0) {
              do {
                FUN_140376bf0(pbVar10,local_68,local_50);
                uVar11 = uVar11 + 1;
                pbVar10 = pbVar10 + (ulonglong)pbVar10[1] + (ulonglong)*pbVar10 * 0x100;
              } while (uVar11 < uVar13);
            }
            plVar1 = (longlong *)(*(longlong *)(param_4 + 0x10) + lVar14);
            LOCK();
            bVar15 = *plVar1 == 0;
            if (bVar15) {
              *plVar1 = (longlong)piVar6;
            }
            UNLOCK();
            uVar13 = local_60;
            if (bVar15) break;
            thunk_FUN_1402d9040(piVar6);
            piVar6 = *(int **)(lVar14 + *(longlong *)(param_4 + 0x10));
          }
        }
        else {
          piVar6 = (int *)0x0;
        }
        if (uVar8 < *(uint *)(param_3 + 4)) {
          puVar7 = (undefined8 *)((ulonglong)uVar8 * 0x10 + *(longlong *)(param_3 + 8));
        }
        else {
          puVar7 = &DAT_14045dd10;
        }
        *(undefined8 **)(param_2 + 0x80) = puVar7;
        FUN_1403a5830(param_1,param_2,piVar6);
        if (*(char *)(*(longlong *)(param_2 + 0x20) + 0x58) == '\0') {
          return;
        }
        uVar8 = uVar8 + 1;
        param_1 = param_1 + (ulonglong)*(byte *)(param_1 + 7) +
                  ((ulonglong)CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)) *
                   0x100 + (ulonglong)*(byte *)(param_1 + 6)) * 0x100;
      } while (uVar8 < uVar13);
    }
  }
  return;
}

