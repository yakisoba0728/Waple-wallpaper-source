// Function: FUN_14038b870
// Addr: 14038b870
// Size: 480 bytes


void FUN_14038b870(longlong param_1,code *param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  
  if (*(uint *)(param_1 + 0x60) != 0) {
    uVar13 = 1;
    uVar16 = 0;
    if (1 < *(uint *)(param_1 + 0x60)) {
      do {
        uVar12 = (uint)uVar13;
        cVar11 = (*param_2)(*(longlong *)(param_1 + 0x70) + (ulonglong)(uVar12 - 1) * 0x14,
                            *(longlong *)(param_1 + 0x70) + uVar13 * 0x14);
        uVar14 = uVar16;
        if (cVar11 == '\0') {
          if ((param_3 != '\0') && (1 < uVar12 - uVar16)) {
            if (*(uint *)(param_1 + 0x1c) < 2) {
              FUN_1403ec280(param_1,uVar16,uVar13);
            }
            else {
              FUN_14040eef0();
            }
          }
          uVar18 = *(uint *)(param_1 + 0x60);
          uVar14 = uVar18;
          if (uVar16 <= uVar18) {
            uVar14 = uVar16;
          }
          uVar17 = uVar18;
          if (uVar12 <= uVar18) {
            uVar17 = uVar12;
          }
          if ((uVar14 + 2 <= uVar17) && (uVar15 = (uVar17 - uVar14 >> 1) + uVar14, uVar14 < uVar15))
          {
            lVar5 = *(longlong *)(param_1 + 0x70);
            do {
              uVar17 = uVar17 - 1;
              uVar19 = (ulonglong)uVar17;
              uVar13 = (ulonglong)uVar14;
              uVar14 = uVar14 + 1;
              puVar1 = (undefined8 *)(lVar5 + uVar13 * 0x14);
              uVar4 = *(undefined4 *)(lVar5 + 0x10 + uVar19 * 0x14);
              uVar6 = *(undefined4 *)((longlong)puVar1 + 4);
              uVar7 = *(undefined4 *)(puVar1 + 1);
              uVar8 = *(undefined4 *)((longlong)puVar1 + 0xc);
              puVar2 = (undefined8 *)(lVar5 + uVar19 * 0x14);
              uVar9 = *puVar2;
              uVar10 = puVar2[1];
              puVar3 = (undefined4 *)(lVar5 + uVar19 * 0x14);
              *puVar3 = *(undefined4 *)puVar1;
              puVar3[1] = uVar6;
              puVar3[2] = uVar7;
              puVar3[3] = uVar8;
              *(undefined4 *)(lVar5 + 0x10 + uVar19 * 0x14) = *(undefined4 *)(puVar1 + 2);
              *puVar1 = uVar9;
              puVar1[1] = uVar10;
              *(undefined4 *)(puVar1 + 2) = uVar4;
            } while (uVar14 < uVar15);
            uVar18 = *(uint *)(param_1 + 0x60);
          }
          uVar14 = uVar12;
          if (*(char *)(param_1 + 0x5a) != '\0') {
            uVar17 = uVar18;
            if (uVar16 <= uVar18) {
              uVar17 = uVar16;
            }
            if (uVar12 <= uVar18) {
              uVar18 = uVar12;
            }
            if ((uVar17 + 2 <= uVar18) &&
               (uVar16 = (uVar18 - uVar17 >> 1) + uVar17, uVar17 < uVar16)) {
              lVar5 = *(longlong *)(param_1 + 0x80);
              do {
                uVar18 = uVar18 - 1;
                uVar19 = (ulonglong)uVar18;
                uVar13 = (ulonglong)uVar17;
                uVar17 = uVar17 + 1;
                puVar1 = (undefined8 *)(lVar5 + uVar13 * 0x14);
                uVar4 = *(undefined4 *)(lVar5 + 0x10 + uVar19 * 0x14);
                uVar6 = *(undefined4 *)((longlong)puVar1 + 4);
                uVar7 = *(undefined4 *)(puVar1 + 1);
                uVar8 = *(undefined4 *)((longlong)puVar1 + 0xc);
                puVar2 = (undefined8 *)(lVar5 + uVar19 * 0x14);
                uVar9 = *puVar2;
                uVar10 = puVar2[1];
                puVar3 = (undefined4 *)(lVar5 + uVar19 * 0x14);
                *puVar3 = *(undefined4 *)puVar1;
                puVar3[1] = uVar6;
                puVar3[2] = uVar7;
                puVar3[3] = uVar8;
                *(undefined4 *)(lVar5 + 0x10 + uVar19 * 0x14) = *(undefined4 *)(puVar1 + 2);
                *puVar1 = uVar9;
                puVar1[1] = uVar10;
                *(undefined4 *)(puVar1 + 2) = uVar4;
              } while (uVar17 < uVar16);
            }
          }
        }
        uVar16 = uVar14;
        uVar13 = (ulonglong)(uVar12 + 1);
      } while (uVar12 + 1 < *(uint *)(param_1 + 0x60));
    }
    if ((param_3 != '\0') && (1 < (int)uVar13 - uVar16)) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        FUN_1403ec280(param_1,uVar16,uVar13);
      }
      else {
        FUN_14040eef0();
      }
    }
    FUN_1403f8e70(param_1,uVar16,uVar13);
    FUN_1403f8e70(param_1,0,*(undefined4 *)(param_1 + 0x60));
  }
  return;
}

