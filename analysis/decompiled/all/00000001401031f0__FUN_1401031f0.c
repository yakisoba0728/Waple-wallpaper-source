// Function: FUN_1401031f0
// Addr: 1401031f0
// Size: 600 bytes


undefined8 * FUN_1401031f0(longlong *param_1,char *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  size_t sVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  puVar14 = auStack_68;
  puVar13 = auStack_68;
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 != (undefined8 *)param_1[2]) {
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    sVar8 = strlen(param_2);
    FUN_140017480(puVar12,param_2,sVar8);
    puVar12 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar12 + 4);
    return puVar12;
  }
  uVar18 = (longlong)puVar12 - *param_1;
  lVar10 = (longlong)uVar18 >> 5;
  if (lVar10 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar17 = param_1[2] - *param_1 >> 5;
  if (uVar17 <= 0x7ffffffffffffff - (uVar17 >> 1)) {
    uVar1 = lVar10 + 1;
    uVar17 = (uVar17 >> 1) + uVar17;
    uVar15 = uVar1;
    if (uVar1 <= uVar17) {
      uVar15 = uVar17;
    }
    if (uVar15 < 0x800000000000000) {
      puVar16 = (undefined8 *)0x0;
      uVar17 = uVar15 * 0x20;
      if (uVar17 != 0) {
        if (uVar17 < 0x1000) {
          puVar16 = (undefined8 *)FUN_14028af20();
          puVar14 = auStack_68;
        }
        else {
          if (uVar17 + 0x27 <= uVar17) goto LAB_140103444;
          lVar10 = FUN_14028af20(uVar17 + 0x27);
          if (lVar10 == 0) {
            pcVar3 = (code *)swi(0x29);
            lVar10 = (*pcVar3)(5);
            puVar13 = auStack_60;
          }
          puVar16 = (undefined8 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
          puVar16[-1] = lVar10;
          puVar14 = puVar13;
        }
      }
      puVar19 = (undefined8 *)((uVar18 & 0xffffffffffffffe0) + (longlong)puVar16);
      *puVar19 = 0;
      puVar19[1] = 0;
      puVar19[2] = 0;
      puVar19[3] = 0;
      *(undefined8 *)(puVar14 + -8) = 0x140103315;
      sVar8 = strlen(param_2);
      *(undefined8 *)(puVar14 + -8) = 0x140103323;
      FUN_140017480(puVar19,param_2,sVar8);
      puVar2 = (undefined8 *)param_1[1];
      puVar9 = (undefined8 *)*param_1;
      puVar11 = puVar16;
      if (puVar12 == puVar2) {
        for (; puVar9 != puVar2; puVar9 = puVar9 + 4) {
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11[3] = 0;
          uVar4 = *(undefined4 *)((longlong)puVar9 + 4);
          uVar5 = *(undefined4 *)(puVar9 + 1);
          uVar6 = *(undefined4 *)((longlong)puVar9 + 0xc);
          *(undefined4 *)puVar11 = *(undefined4 *)puVar9;
          *(undefined4 *)((longlong)puVar11 + 4) = uVar4;
          *(undefined4 *)(puVar11 + 1) = uVar5;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uVar6;
          uVar7 = puVar9[3];
          puVar11[2] = puVar9[2];
          puVar11[3] = uVar7;
          puVar9[2] = 0;
          puVar9[3] = 0xf;
          *(undefined1 *)puVar9 = 0;
          puVar11 = puVar11 + 4;
        }
      }
      else {
        for (; puVar9 != puVar12; puVar9 = puVar9 + 4) {
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11[3] = 0;
          uVar4 = *(undefined4 *)((longlong)puVar9 + 4);
          uVar5 = *(undefined4 *)(puVar9 + 1);
          uVar6 = *(undefined4 *)((longlong)puVar9 + 0xc);
          *(undefined4 *)puVar11 = *(undefined4 *)puVar9;
          *(undefined4 *)((longlong)puVar11 + 4) = uVar4;
          *(undefined4 *)(puVar11 + 1) = uVar5;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uVar6;
          uVar7 = puVar9[3];
          puVar11[2] = puVar9[2];
          puVar11[3] = uVar7;
          puVar9[2] = 0;
          puVar9[3] = 0xf;
          *(undefined1 *)puVar9 = 0;
          puVar11 = puVar11 + 4;
        }
        puVar2 = (undefined8 *)param_1[1];
        puVar9 = puVar19;
        for (; puVar12 != puVar2; puVar12 = puVar12 + 4) {
          puVar11 = puVar9 + 4;
          *puVar11 = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          puVar9[7] = 0;
          uVar4 = *(undefined4 *)((longlong)puVar12 + 4);
          uVar5 = *(undefined4 *)(puVar12 + 1);
          uVar6 = *(undefined4 *)((longlong)puVar12 + 0xc);
          *(undefined4 *)puVar11 = *(undefined4 *)puVar12;
          *(undefined4 *)((longlong)puVar9 + 0x24) = uVar4;
          *(undefined4 *)(puVar9 + 5) = uVar5;
          *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar6;
          uVar7 = puVar12[3];
          puVar9[6] = puVar12[2];
          puVar9[7] = uVar7;
          puVar12[2] = 0;
          puVar12[3] = 0xf;
          *(undefined1 *)puVar12 = 0;
          puVar9 = puVar11;
        }
      }
      *(undefined8 *)(puVar14 + -8) = 0x14010342a;
      FUN_140013070(param_1,puVar16,uVar1,uVar15);
      return puVar19;
    }
  }
LAB_140103444:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

