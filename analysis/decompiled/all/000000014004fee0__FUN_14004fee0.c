// Function: FUN_14004fee0
// Addr: 14004fee0
// Size: 516 bytes


void FUN_14004fee0(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  char cVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  
  uVar17 = (longlong)(param_3 - 1) >> 1;
  uVar10 = param_2;
  while ((longlong)uVar10 < (longlong)uVar17) {
    uVar14 = uVar10 * 2 + 2;
    lVar12 = uVar14 * 0x20;
    cVar11 = FUN_140038c30(lVar12 + param_1,param_1 + -0x20 + lVar12);
    uVar13 = uVar10 * 2 | 1;
    if (-1 < cVar11) {
      uVar13 = uVar14;
    }
    lVar12 = uVar10 * 0x20;
    lVar15 = uVar13 * 0x20;
    uVar10 = uVar13;
    if (lVar12 != lVar15) {
      uVar14 = *(ulonglong *)(lVar12 + 0x18 + param_1);
      if (0xf < uVar14) {
        lVar16 = *(longlong *)(lVar12 + param_1);
        uVar13 = uVar14 + 1;
        if (0xfff < uVar13) {
          if (0x1f < (lVar16 - *(longlong *)(lVar16 + -8)) - 8U) goto LAB_1400500dc;
          uVar13 = uVar14 + 0x28;
          lVar16 = *(longlong *)(lVar16 + -8);
        }
        thunk_FUN_14028af80(lVar16,uVar13);
      }
      *(undefined8 *)(lVar12 + 0x18 + param_1) = 0xf;
      *(undefined8 *)(lVar12 + 0x10 + param_1) = 0;
      *(undefined1 *)(lVar12 + param_1) = 0;
      puVar1 = (undefined4 *)(lVar15 + param_1);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(lVar12 + param_1);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      puVar3 = (undefined8 *)(lVar15 + 0x10 + param_1);
      uVar9 = puVar3[1];
      puVar4 = (undefined8 *)(lVar12 + 0x10 + param_1);
      *puVar4 = *puVar3;
      puVar4[1] = uVar9;
      *(undefined8 *)(lVar15 + 0x10 + param_1) = 0;
      *(undefined8 *)(lVar15 + 0x18 + param_1) = 0xf;
      *(undefined1 *)(lVar15 + param_1) = 0;
    }
  }
  if ((uVar10 == uVar17) && ((param_3 & 1) == 0)) {
    FUN_14000de40(uVar10 * 0x20 + param_1,param_1 + -0x20 + param_3 * 0x20);
    uVar10 = param_3 - 1;
  }
  while ((longlong)param_2 < (longlong)uVar10) {
    uVar17 = (longlong)(uVar10 - 1) >> 1;
    puVar1 = (undefined4 *)(uVar17 * 0x20 + param_1);
    cVar11 = FUN_140038c30(puVar1,param_4);
    if (-1 < cVar11) break;
    lVar12 = uVar10 * 0x20;
    uVar10 = uVar17;
    if (lVar12 != uVar17 * 0x20) {
      uVar17 = *(ulonglong *)(lVar12 + 0x18 + param_1);
      if (0xf < uVar17) {
        lVar15 = *(longlong *)(lVar12 + param_1);
        uVar14 = uVar17 + 1;
        if (0xfff < uVar14) {
          if (0x1f < (lVar15 - *(longlong *)(lVar15 + -8)) - 8U) {
LAB_1400500dc:
            pcVar5 = (code *)swi(0x29);
            (*pcVar5)(5);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = uVar17 + 0x28;
          lVar15 = *(longlong *)(lVar15 + -8);
        }
        thunk_FUN_14028af80(lVar15,uVar14);
      }
      *(undefined8 *)(lVar12 + 0x18 + param_1) = 0xf;
      *(undefined8 *)(lVar12 + 0x10 + param_1) = 0;
      *(undefined1 *)(lVar12 + param_1) = 0;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(lVar12 + param_1);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      uVar9 = *(undefined8 *)(puVar1 + 6);
      puVar3 = (undefined8 *)(lVar12 + 0x10 + param_1);
      *puVar3 = *(undefined8 *)(puVar1 + 4);
      puVar3[1] = uVar9;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0xf;
      *(undefined1 *)puVar1 = 0;
    }
  }
  FUN_14000de40(uVar10 * 0x20 + param_1,param_4);
  return;
}

