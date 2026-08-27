// Function: FUN_1403f7500
// Addr: 1403f7500
// Size: 636 bytes


void FUN_1403f7500(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  
  puVar9 = *(uint **)(param_1 + 0x98);
  lVar10 = *(longlong *)(param_3 + 0x70);
  uVar20 = (ulonglong)param_4;
  uVar15 = puVar9[3];
  uVar5 = puVar9[2];
  uVar6 = puVar9[1];
  uVar21 = param_4 + 1;
  uVar18 = uVar21;
  if (uVar21 < param_5) {
    do {
      uVar19 = uVar18 + 1;
      puVar3 = (uint *)(lVar10 + 4 + (ulonglong)uVar18 * 0x14);
      *puVar3 = *puVar3 | uVar15 | uVar5 | uVar6;
      uVar18 = uVar19;
    } while (uVar19 < param_5);
    uVar16 = (ulonglong)uVar21;
    uVar15 = 0;
    uVar17 = uVar16;
    do {
      while( true ) {
        puVar1 = (undefined8 *)(lVar10 + uVar17 * 0x14);
        cVar4 = *(char *)(lVar10 + 0x12 + uVar17 * 0x14);
        if (((cVar4 != '\x04') || (2 < uVar15)) || (uVar5 = uVar21 + 1, param_5 <= uVar5)) break;
        puVar2 = (undefined8 *)(lVar10 + (ulonglong)uVar5 * 0x14);
        if (*(char *)(lVar10 + 0x12 + (ulonglong)uVar5 * 0x14) == '\x0f') {
          uVar15 = uVar21 + 2;
          *(uint *)((longlong)puVar1 + 4) = *(uint *)((longlong)puVar1 + 4) | *puVar9;
          *(uint *)((longlong)puVar2 + 4) = *(uint *)((longlong)puVar2 + 4) | *puVar9;
          if (1 < uVar15 - param_4) {
            if (*(uint *)(param_3 + 0x1c) < 2) {
              FUN_1403ec280(param_3,param_4,uVar15);
            }
            else {
              FUN_14040eef0();
            }
          }
          uVar11 = *puVar2;
          uVar12 = puVar2[1];
          uVar7 = *(undefined4 *)(puVar2 + 2);
          uVar13 = *puVar1;
          uVar14 = puVar1[1];
          uVar8 = *(undefined4 *)(puVar1 + 2);
          puVar1 = (undefined8 *)(lVar10 + uVar20 * 0x14);
          FUN_1404210f0(lVar10 + (ulonglong)(param_4 + 2) * 0x14,puVar1,
                        (ulonglong)(uVar21 - param_4) * 0x14);
          *puVar1 = uVar13;
          puVar1[1] = uVar14;
          *(undefined4 *)(puVar1 + 2) = uVar8;
          puVar1 = (undefined8 *)(lVar10 + uVar16 * 0x14);
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          *(undefined4 *)(lVar10 + 0x10 + uVar16 * 0x14) = uVar7;
          if (puVar9[4] != 0) {
            for (; uVar15 < param_5; uVar15 = uVar15 + 1) {
              puVar3 = (uint *)(lVar10 + 4 + (ulonglong)uVar15 * 0x14);
              *puVar3 = *puVar3 | puVar9[4];
            }
          }
          uVar21 = uVar21 + 1;
          uVar17 = uVar17 + 1;
          uVar15 = 2;
        }
        else {
          uVar15 = uVar15 + 1;
          uVar21 = uVar21 + 1;
          uVar17 = uVar17 + 1;
        }
      }
      if (cVar4 == '\x16') {
        if (1 < (uVar21 + 1) - param_4) {
          if (*(uint *)(param_3 + 0x1c) < 2) {
            FUN_1403ec280(param_3,uVar20);
          }
          else {
            FUN_14040eef0();
          }
        }
        uVar11 = *puVar1;
        uVar12 = puVar1[1];
        uVar7 = *(undefined4 *)(puVar1 + 2);
        puVar1 = (undefined8 *)(lVar10 + uVar20 * 0x14);
        FUN_1404210f0(lVar10 + uVar16 * 0x14,puVar1,(ulonglong)(uVar21 - param_4) * 0x14);
        *puVar1 = uVar11;
        puVar1[1] = uVar12;
        *(undefined4 *)(puVar1 + 2) = uVar7;
      }
      uVar21 = uVar21 + 1;
      uVar17 = uVar17 + 1;
    } while (uVar21 < param_5);
  }
  return;
}

