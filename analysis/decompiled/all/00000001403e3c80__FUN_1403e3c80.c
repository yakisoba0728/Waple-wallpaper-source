// Function: FUN_1403e3c80
// Addr: 1403e3c80
// Size: 804 bytes


void FUN_1403e3c80(longlong param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar15;
  char cVar16;
  ulonglong uVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar14;
  
  lVar6 = *(longlong *)(param_1 + 0x70);
  uVar14 = (ulonglong)param_2;
  uVar17 = (ulonglong)param_2;
  bVar11 = false;
  uVar13 = param_3;
  if ((((param_2 + 3 <= param_3) && (*(char *)(lVar6 + 0x12 + uVar17 * 0x14) == '\x0f')) &&
      (*(char *)(lVar6 + 0x12 + (ulonglong)(param_2 + 1) * 0x14) == ' ')) &&
     (*(char *)(lVar6 + 0x12 + (ulonglong)(param_2 + 2) * 0x14) == '\x04')) {
    uVar14 = (ulonglong)(param_2 + 3);
    bVar11 = true;
    uVar13 = param_2;
  }
  uVar19 = (uint)uVar14;
  uVar12 = uVar19;
  if (bVar11) {
    uVar12 = uVar13;
  }
  while ((uVar13 = uVar12, uVar19 < param_3 &&
         ((((*(byte *)(lVar6 + 0xc + uVar14 * 0x14) & 0x20) != 0 ||
           (bVar3 = *(byte *)(lVar6 + 0x12 + uVar14 * 0x14), 0x1f < bVar3)) ||
          (uVar13 = (uint)uVar14, (1 << (bVar3 & 0x1f) & 0x48c06U) == 0))))) {
    uVar19 = (uint)uVar14 + 1;
    uVar14 = (ulonglong)uVar19;
  }
  uVar14 = uVar17;
  uVar12 = param_2;
  while (uVar19 = (uint)uVar14, uVar12 < (-(uint)bVar11 & 3) + param_2) {
    uVar12 = uVar19 + 1;
    *(undefined1 *)(lVar6 + 0x13 + uVar14 * 0x14) = 5;
    uVar14 = (ulonglong)uVar12;
  }
  while (uVar12 = (uint)uVar14, uVar19 < uVar13) {
    uVar19 = uVar12 + 1;
    *(undefined1 *)(lVar6 + 0x13 + uVar14 * 0x14) = 3;
    uVar14 = (ulonglong)uVar19;
  }
  uVar21 = uVar14;
  if (uVar12 < param_3) {
    uVar21 = (ulonglong)(uVar12 + 1);
    *(undefined1 *)(lVar6 + 0x13 + uVar14 * 0x14) = 4;
  }
  cVar18 = '\x05';
  uVar13 = (uint)uVar21;
  uVar14 = uVar21;
  while (uVar13 < param_3) {
    cVar4 = *(char *)(lVar6 + 0x12 + uVar21 * 0x14);
    if (cVar4 == '$') {
      cVar16 = '\x03';
    }
    else if (cVar4 == '\x16') {
      cVar16 = '\x02';
    }
    else if (cVar4 == '(') {
      cVar16 = *(char *)(lVar6 + 0x13 + (ulonglong)((int)uVar14 - 1) * 0x14);
    }
    else {
      cVar16 = cVar18;
      if (cVar18 == '\x05') {
        if (cVar4 == '\x15') {
          cVar16 = '\b';
          cVar18 = '\b';
        }
      }
      else if (cVar18 == '\b') {
        if (cVar4 == '\t') {
          cVar16 = '\a';
        }
        else if (cVar4 == '\x15') {
          cVar16 = '\b';
        }
        else {
          cVar16 = '\t';
          cVar18 = cVar16;
        }
      }
    }
    uVar13 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar13;
    *(char *)(lVar6 + uVar21 * 0x14 + 0x13) = cVar16;
    uVar21 = uVar21 + 1;
  }
  FUN_14040c100(param_1,param_2,param_3,&LAB_1403b4b50);
  uVar14 = (ulonglong)param_3;
  uVar21 = (ulonglong)param_3;
  if (param_2 < param_3) {
    do {
      cVar18 = *(char *)(lVar6 + 0x13 + uVar17 * 0x14);
      if (cVar18 == '\x02') {
        uVar13 = (uint)uVar17;
        if ((uint)uVar14 != param_3) {
          uVar13 = (uint)uVar14;
        }
        uVar14 = (ulonglong)uVar13;
      }
      uVar15 = uVar17;
      if (cVar18 != '\x02') {
        uVar15 = uVar21;
      }
      uVar12 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar12;
      uVar13 = (uint)uVar15;
      uVar21 = uVar15;
    } while (uVar12 < param_3);
    if ((uint)uVar14 < uVar13) {
      FUN_1403f8e70(param_1,uVar14,uVar13 + 1);
      uVar17 = uVar14;
      do {
        uVar12 = (int)uVar17 + 1;
        uVar15 = (ulonglong)uVar12;
        uVar21 = uVar14;
        if (*(char *)(lVar6 + 0x12 + uVar17 * 0x14) == '\x16') {
          uVar19 = *(uint *)(param_1 + 0x60);
          uVar17 = (ulonglong)uVar19;
          if ((uint)uVar14 <= uVar19) {
            uVar17 = uVar14;
          }
          if (uVar12 <= uVar19) {
            uVar19 = uVar12;
          }
          uVar20 = (uint)uVar17;
          if (uVar20 + 2 <= uVar19) {
            lVar7 = *(longlong *)(param_1 + 0x70);
            uVar22 = (uVar19 - uVar20 >> 1) + uVar20;
            while (uVar20 < uVar22) {
              uVar19 = uVar19 - 1;
              uVar21 = (ulonglong)uVar19;
              uVar20 = (int)uVar17 + 1;
              puVar1 = (undefined8 *)(lVar7 + uVar17 * 0x14);
              uVar5 = *(undefined4 *)(lVar7 + 0x10 + uVar21 * 0x14);
              uVar8 = puVar1[1];
              puVar2 = (undefined8 *)(lVar7 + uVar21 * 0x14);
              uVar9 = *puVar2;
              uVar10 = puVar2[1];
              puVar2 = (undefined8 *)(lVar7 + uVar21 * 0x14);
              *puVar2 = *puVar1;
              puVar2[1] = uVar8;
              *(undefined4 *)(lVar7 + 0x10 + uVar21 * 0x14) = *(undefined4 *)(puVar1 + 2);
              *puVar1 = uVar9;
              puVar1[1] = uVar10;
              *(undefined4 *)(puVar1 + 2) = uVar5;
              uVar17 = (ulonglong)uVar20;
            }
          }
          uVar21 = uVar15;
          if (*(char *)(param_1 + 0x5a) != '\0') {
            uVar19 = *(uint *)(param_1 + 0x60);
            uVar17 = (ulonglong)uVar19;
            if ((uint)uVar14 <= uVar19) {
              uVar17 = uVar14;
            }
            if (uVar12 <= uVar19) {
              uVar19 = uVar12;
            }
            uVar20 = (uint)uVar17;
            if (uVar20 + 2 <= uVar19) {
              lVar7 = *(longlong *)(param_1 + 0x80);
              uVar22 = (uVar19 - uVar20 >> 1) + uVar20;
              while (uVar20 < uVar22) {
                uVar19 = uVar19 - 1;
                uVar14 = (ulonglong)uVar19;
                uVar20 = (int)uVar17 + 1;
                puVar1 = (undefined8 *)(lVar7 + uVar17 * 0x14);
                uVar5 = *(undefined4 *)(lVar7 + 0x10 + uVar14 * 0x14);
                uVar8 = puVar1[1];
                puVar2 = (undefined8 *)(lVar7 + uVar14 * 0x14);
                uVar9 = *puVar2;
                uVar10 = puVar2[1];
                puVar2 = (undefined8 *)(lVar7 + uVar14 * 0x14);
                *puVar2 = *puVar1;
                puVar2[1] = uVar8;
                *(undefined4 *)(lVar7 + 0x10 + uVar14 * 0x14) = *(undefined4 *)(puVar1 + 2);
                *puVar1 = uVar9;
                puVar1[1] = uVar10;
                *(undefined4 *)(puVar1 + 2) = uVar5;
                uVar17 = (ulonglong)uVar20;
              }
            }
          }
        }
        uVar14 = uVar21;
        uVar17 = uVar15;
      } while (uVar12 <= uVar13);
    }
  }
  return;
}

