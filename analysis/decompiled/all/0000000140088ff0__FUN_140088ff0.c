// Function: FUN_140088ff0
// Addr: 140088ff0
// Size: 68 bytes


void FUN_140088ff0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar16 = auStack_28;
  puVar15 = auStack_28;
  lVar1 = *param_1;
  if ((ulonglong)(param_1[2] - lVar1 >> 5) < param_2) {
    if (0x7ffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140013120();
    }
    lVar2 = param_1[1];
    puVar11 = (undefined8 *)0x0;
    uVar12 = param_2 * 0x20;
    if (uVar12 != 0) {
      if (uVar12 < 0x1000) {
        puVar11 = (undefined8 *)func_0x00014028aff0();
        puVar16 = auStack_28;
      }
      else {
        if (uVar12 + 0x27 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_140017440();
        }
        lVar10 = func_0x00014028aff0(uVar12 + 0x27);
        lVar13 = lVar10;
        if (lVar10 == 0) {
          lVar13 = 5;
          pcVar4 = (code *)swi(0x29);
          lVar10 = (*pcVar4)();
          puVar15 = auStack_20;
        }
        puVar11 = (undefined8 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
        puVar11[-1] = lVar13;
        puVar16 = puVar15;
      }
    }
    puVar3 = (undefined4 *)param_1[1];
    puVar9 = puVar11;
    for (puVar14 = (undefined4 *)*param_1; puVar14 != puVar3; puVar14 = puVar14 + 8) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      uVar5 = puVar14[1];
      uVar6 = puVar14[2];
      uVar7 = puVar14[3];
      *(undefined4 *)puVar9 = *puVar14;
      *(undefined4 *)((longlong)puVar9 + 4) = uVar5;
      *(undefined4 *)(puVar9 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar7;
      uVar8 = *(undefined8 *)(puVar14 + 6);
      puVar9[2] = *(undefined8 *)(puVar14 + 4);
      puVar9[3] = uVar8;
      *(undefined8 *)(puVar14 + 4) = 0;
      *(undefined8 *)(puVar14 + 6) = 0xf;
      *(undefined1 *)puVar14 = 0;
      puVar9 = puVar9 + 4;
    }
    *(undefined8 *)(puVar16 + -8) = 0x1400890fa;
    FUN_140013140(param_1,puVar11,lVar2 - lVar1 >> 5,param_2);
  }
  return;
}

