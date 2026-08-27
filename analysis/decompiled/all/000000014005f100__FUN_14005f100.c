// Function: FUN_14005f100
// Addr: 14005f100
// Size: 355 bytes


undefined4 * FUN_14005f100(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar13 = auStack_58;
  puVar14 = auStack_58;
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 != (undefined8 *)param_1[2]) {
    uVar7 = param_2[1];
    *puVar11 = *param_2;
    puVar11[1] = uVar7;
    uVar7 = param_2[3];
    puVar11[2] = param_2[2];
    puVar11[3] = uVar7;
    puVar12 = (undefined4 *)param_1[1];
    param_1[1] = (longlong)(puVar12 + 8);
    return puVar12;
  }
  uVar16 = (longlong)puVar11 - *param_1;
  lVar10 = (longlong)uVar16 >> 5;
  if (lVar10 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar8 = param_1[2] - *param_1 >> 5;
  if (uVar8 <= 0x7ffffffffffffff - (uVar8 >> 1)) {
    uVar1 = lVar10 + 1;
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar15 = uVar1;
    if (uVar1 <= uVar8) {
      uVar15 = uVar8;
    }
    if (uVar15 < 0x800000000000000) {
      uVar8 = uVar15 * 0x20;
      if (uVar8 == 0) {
        puVar12 = (undefined4 *)0x0;
        puVar14 = auStack_58;
      }
      else if (uVar8 < 0x1000) {
        puVar12 = (undefined4 *)FUN_14028af20();
      }
      else {
        if (uVar8 + 0x27 <= uVar8) goto LAB_14005f25f;
        lVar10 = FUN_14028af20(uVar8 + 0x27);
        if (lVar10 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar10 = (*pcVar3)(5);
          puVar13 = auStack_50;
        }
        puVar12 = (undefined4 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(puVar12 + -2) = lVar10;
        puVar14 = puVar13;
      }
      uVar4 = *(undefined4 *)((longlong)param_2 + 4);
      uVar5 = *(undefined4 *)(param_2 + 1);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
      puVar17 = (undefined4 *)((uVar16 & 0xffffffffffffffe0) + (longlong)puVar12);
      *puVar17 = *(undefined4 *)param_2;
      puVar17[1] = uVar4;
      puVar17[2] = uVar5;
      puVar17[3] = uVar6;
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar5 = *(undefined4 *)(param_2 + 3);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
      puVar17[4] = *(undefined4 *)(param_2 + 2);
      puVar17[5] = uVar4;
      puVar17[6] = uVar5;
      puVar17[7] = uVar6;
      puVar2 = (undefined8 *)*param_1;
      if (puVar11 == (undefined8 *)param_1[1]) {
        lVar10 = param_1[1] - (longlong)puVar2;
        puVar9 = puVar12;
        puVar11 = puVar2;
      }
      else {
        *(undefined8 *)(puVar14 + -8) = 0x14005f223;
        FUN_1404210f0(puVar12,puVar2,(longlong)puVar11 - (longlong)puVar2);
        puVar9 = puVar17 + 8;
        lVar10 = param_1[1] - (longlong)puVar11;
      }
      *(undefined8 *)(puVar14 + -8) = 0x14005f236;
      FUN_1404210f0(puVar9,puVar11,lVar10);
      *(undefined8 *)(puVar14 + -8) = 0x14005f247;
      FUN_1400601c0(param_1,puVar12,uVar1,uVar15);
      return puVar17;
    }
  }
LAB_14005f25f:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

