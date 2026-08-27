// Function: FUN_140416580
// Addr: 140416580
// Size: 912 bytes


void FUN_140416580(longlong param_1,longlong param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint local_res8 [2];
  
  if (*(char *)(param_1 + 4) != '\0') {
    lVar7 = FUN_1403c5100(*(longlong *)(param_1 + 0x20) + 0x100);
    uVar10 = (uint)*(byte *)(lVar7 + 9) + (uint)*(byte *)(lVar7 + 8) * 0x100;
    uVar12 = (uint)*(byte *)(lVar7 + 5) + (uint)*(byte *)(lVar7 + 4) * 0x100;
    if (uVar12 == 0) {
      puVar11 = &DAT_14045dd10;
    }
    else {
      puVar11 = (undefined8 *)((ulonglong)uVar12 + lVar7);
    }
    if (uVar10 == 0) {
      piVar8 = (int *)0x0;
      lVar7 = 0;
    }
    else {
      piVar8 = (int *)_calloc_base(uVar10,4);
      lVar7 = _calloc_base(uVar10,4);
      fVar3 = DAT_1404925f0;
      if ((piVar8 == (int *)0x0) || (lVar7 == 0)) {
        thunk_FUN_1402d9040(piVar8);
        thunk_FUN_1402d9040(lVar7);
        return;
      }
      uVar15 = 0;
      if (3 < uVar10) {
        do {
          uVar12 = (uint)uVar15;
          if (uVar12 < uVar10) {
            puVar13 = (undefined8 *)((longlong)puVar11 + uVar15 * 0x14);
          }
          else {
            puVar13 = &DAT_14045dd10;
          }
          uVar5 = uVar12 + 1;
          *(float *)(lVar7 + uVar15 * 4) =
               ((float)(int)((((uint)*(byte *)((longlong)puVar13 + 9) +
                              (uint)*(byte *)(puVar13 + 1) * 0x100) * 0x100 +
                             (uint)*(byte *)((longlong)puVar13 + 10)) * 0x100 +
                            (uint)*(byte *)((longlong)puVar13 + 0xb)) + 0.0) * fVar3;
          if (uVar5 < uVar10) {
            puVar13 = (undefined8 *)((longlong)puVar11 + (ulonglong)uVar5 * 0x14);
          }
          else {
            puVar13 = &DAT_14045dd10;
          }
          uVar6 = uVar12 + 2;
          *(float *)(lVar7 + (ulonglong)uVar5 * 4) =
               ((float)(int)((((uint)*(byte *)((longlong)puVar13 + 9) +
                              (uint)*(byte *)(puVar13 + 1) * 0x100) * 0x100 +
                             (uint)*(byte *)((longlong)puVar13 + 10)) * 0x100 +
                            (uint)*(byte *)((longlong)puVar13 + 0xb)) + 0.0) * fVar3;
          if (uVar6 < uVar10) {
            puVar13 = (undefined8 *)((longlong)puVar11 + (ulonglong)uVar6 * 0x14);
          }
          else {
            puVar13 = &DAT_14045dd10;
          }
          uVar5 = uVar12 + 3;
          *(float *)(lVar7 + (ulonglong)uVar6 * 4) =
               ((float)(int)((((uint)*(byte *)((longlong)puVar13 + 9) +
                              (uint)*(byte *)(puVar13 + 1) * 0x100) * 0x100 +
                             (uint)*(byte *)((longlong)puVar13 + 10)) * 0x100 +
                            (uint)*(byte *)((longlong)puVar13 + 0xb)) + 0.0) * fVar3;
          if (uVar5 < uVar10) {
            puVar13 = (undefined8 *)((longlong)puVar11 + (ulonglong)uVar5 * 0x14);
          }
          else {
            puVar13 = &DAT_14045dd10;
          }
          uVar15 = (ulonglong)(uVar12 + 4);
          *(float *)(lVar7 + (ulonglong)uVar5 * 4) =
               ((float)(int)((((uint)*(byte *)((longlong)puVar13 + 9) +
                              (uint)*(byte *)(puVar13 + 1) * 0x100) * 0x100 +
                             (uint)*(byte *)((longlong)puVar13 + 10)) * 0x100 +
                            (uint)*(byte *)((longlong)puVar13 + 0xb)) + 0.0) * fVar3;
        } while (uVar12 + 4 < uVar10 - 3);
      }
      uVar12 = (uint)uVar15;
      while (uVar12 < uVar10) {
        *(float *)(lVar7 + uVar15 * 4) =
             ((float)(int)((((uint)*(byte *)((longlong)puVar11 + uVar15 * 0x14 + 9) +
                            (uint)*(byte *)((longlong)puVar11 + uVar15 * 0x14 + 8) * 0x100) * 0x100
                           + (uint)*(byte *)((longlong)puVar11 + uVar15 * 0x14 + 10)) * 0x100 +
                          (uint)*(byte *)((longlong)puVar11 + uVar15 * 0x14 + 0xb)) + 0.0) * fVar3;
        uVar12 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar12;
      }
    }
    iVar2 = *(int *)(param_1 + 0x74);
    if (iVar2 != -1) {
      local_res8[0] = uVar10;
      uVar9 = FUN_1403c5100(*(longlong *)(param_1 + 0x20) + 0x100);
      FUN_1403cafb0(uVar9,iVar2,local_res8,lVar7);
    }
    uVar15 = 0;
    if (param_3 != 0) {
      do {
        iVar2 = *(int *)(param_2 + uVar15 * 8);
        uVar14 = 0;
        uVar1 = *(undefined4 *)(param_2 + 4 + uVar15 * 8);
        if (uVar10 != 0) {
          do {
            if ((uint)*(byte *)((longlong)puVar11 + uVar14 * 0x14 + 1) * 0x10000 +
                (uint)*(byte *)((longlong)puVar11 + uVar14 * 0x14 + 2) * 0x100 +
                (uint)*(byte *)((longlong)puVar11 + uVar14 * 0x14) * 0x1000000 +
                (uint)*(byte *)((longlong)puVar11 + uVar14 * 0x14 + 3) == iVar2) {
              *(undefined4 *)(lVar7 + uVar14 * 4) = uVar1;
            }
            uVar12 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar12;
          } while (uVar12 < uVar10);
        }
        uVar12 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar12;
      } while (uVar12 < param_3);
    }
    FUN_1404185a0(*(undefined8 *)(param_1 + 0x20),uVar10,lVar7,piVar8);
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x80));
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x88));
    *(int **)(param_1 + 0x80) = piVar8;
    *(longlong *)(param_1 + 0x88) = lVar7;
    *(uint *)(param_1 + 0x7c) = uVar10;
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      if (*piVar8 != 0) {
        uVar4 = 1;
        goto LAB_1404168d8;
      }
      piVar8 = piVar8 + 1;
    }
    uVar4 = 0;
LAB_1404168d8:
    *(undefined1 *)(param_1 + 0x78) = uVar4;
    FUN_1403b2f70(param_1);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  }
  return;
}

