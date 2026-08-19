// Function: FUN_1403bdde0
// Addr: 1403bdde0
// Size: 135 bytes


void FUN_1403bdde0(longlong param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar20;
  ulonglong uVar19;
  
  uVar5 = *(uint *)(param_1 + 0x60);
  uVar16 = 0;
  uVar14 = 0;
  if (uVar5 == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    lVar20 = 0;
    do {
      lVar4 = lVar20 * 0x14;
      cVar13 = (*param_2)(*(longlong *)(param_1 + 0x70) + lVar4);
      uVar15 = (uint)uVar16;
      if (cVar13 == '\0') {
        if (uVar15 != uVar14) {
          lVar8 = *(longlong *)(param_1 + 0x70);
          uVar12 = ((undefined8 *)(lVar4 + lVar8))[1];
          puVar1 = (undefined8 *)(lVar8 + uVar16 * 0x14);
          *puVar1 = *(undefined8 *)(lVar4 + lVar8);
          puVar1[1] = uVar12;
          *(undefined4 *)(lVar8 + 0x10 + uVar16 * 0x14) = *(undefined4 *)(lVar4 + 0x10 + lVar8);
          lVar8 = *(longlong *)(param_1 + 0x80);
          puVar2 = (undefined4 *)(lVar4 + lVar8);
          uVar9 = puVar2[1];
          uVar10 = puVar2[2];
          uVar11 = puVar2[3];
          puVar3 = (undefined4 *)(lVar8 + uVar16 * 0x14);
          *puVar3 = *puVar2;
          puVar3[1] = uVar9;
          puVar3[2] = uVar10;
          puVar3[3] = uVar11;
          puVar3[4] = *(undefined4 *)(lVar4 + 0x10 + lVar8);
        }
        uVar16 = (ulonglong)(uVar15 + 1);
      }
      else {
        lVar8 = *(longlong *)(param_1 + 0x70);
        uVar6 = *(uint *)(lVar4 + 8 + lVar8);
        uVar17 = uVar14 + 1;
        if ((uVar5 <= uVar17) || (uVar6 != *(uint *)(lVar8 + 8 + (ulonglong)uVar17 * 0x14))) {
          if (uVar15 == 0) {
            if (uVar17 < uVar5) {
              if (*(uint *)(param_1 + 0x1c) < 2) {
                FUN_1403ec350(param_1,uVar14,uVar14 + 2);
              }
              else {
                func_0x00014040efc0();
              }
            }
          }
          else {
            uVar15 = *(uint *)(lVar8 + 8 + (ulonglong)(uVar15 - 1) * 0x14);
            if (uVar6 < uVar15) {
              uVar17 = *(uint *)(lVar4 + lVar8 + 4);
              uVar19 = uVar16;
              do {
                uVar18 = (int)uVar19 - 1;
                uVar19 = (ulonglong)uVar18;
                lVar4 = *(longlong *)(param_1 + 0x70) + uVar19 * 0x14;
                uVar7 = *(uint *)(*(longlong *)(param_1 + 0x70) + 8 + uVar19 * 0x14);
                if (uVar7 != uVar15) break;
                if (uVar7 != uVar6) {
                  *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) ^ (*(uint *)(lVar4 + 4) ^ uVar17) & 7;
                }
                *(uint *)(lVar4 + 8) = uVar6;
              } while (uVar18 != 0);
            }
          }
        }
      }
      uVar14 = uVar14 + 1;
      lVar20 = lVar20 + 1;
    } while (uVar14 < uVar5);
    *(int *)(param_1 + 0x60) = (int)uVar16;
  }
  return;
}

