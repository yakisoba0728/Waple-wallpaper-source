// Function: FUN_1400ef8d0
// Addr: 1400ef8d0
// Size: 403 bytes


undefined4 * FUN_1400ef8d0(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar14 = auStack_58;
  puVar15 = auStack_58;
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 != (undefined8 *)param_1[2]) {
    uVar7 = param_2[1];
    *puVar12 = *param_2;
    puVar12[1] = uVar7;
    puVar12[2] = param_2[2];
    puVar13 = (undefined4 *)param_1[1];
    param_1[1] = (longlong)(puVar13 + 6);
    return puVar13;
  }
  lVar10 = (longlong)puVar12 - *param_1;
  lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
  lVar10 = (lVar10 >> 2) - (lVar10 >> 0x3f);
  if (lVar10 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar17 = (param_1[2] - *param_1 >> 3) * -0x5555555555555555;
  uVar8 = 0xaaaaaaaaaaaaaaa - (uVar17 >> 1);
  if (uVar17 < uVar8 || uVar17 - uVar8 == 0) {
    uVar8 = lVar10 + 1;
    uVar17 = (uVar17 >> 1) + uVar17;
    uVar16 = uVar8;
    if (uVar8 <= uVar17) {
      uVar16 = uVar17;
    }
    if (uVar16 < 0xaaaaaaaaaaaaaab) {
      uVar17 = uVar16 * 0x18;
      if (uVar17 == 0) {
        puVar13 = (undefined4 *)0x0;
        puVar15 = auStack_58;
      }
      else if (uVar17 < 0x1000) {
        puVar13 = (undefined4 *)FUN_14028af20();
      }
      else {
        if (uVar17 + 0x27 <= uVar17) goto LAB_1400efa5f;
        lVar9 = FUN_14028af20(uVar17 + 0x27);
        if (lVar9 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar9 = (*pcVar3)(5);
          puVar14 = auStack_50;
        }
        puVar13 = (undefined4 *)(lVar9 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(puVar13 + -2) = lVar9;
        puVar15 = puVar14;
      }
      uVar4 = *(undefined4 *)((longlong)param_2 + 4);
      uVar5 = *(undefined4 *)(param_2 + 1);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
      puVar1 = puVar13 + lVar10 * 6;
      *puVar1 = *(undefined4 *)param_2;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      *(undefined8 *)(puVar1 + 4) = param_2[2];
      puVar2 = (undefined8 *)*param_1;
      if (puVar12 == (undefined8 *)param_1[1]) {
        lVar10 = param_1[1] - (longlong)puVar2;
        puVar11 = puVar13;
        puVar12 = puVar2;
      }
      else {
        *(undefined8 *)(puVar15 + -8) = 0x1400efa23;
        FUN_1404210f0(puVar13,puVar2,(longlong)puVar12 - (longlong)puVar2);
        puVar11 = puVar1 + 6;
        lVar10 = param_1[1] - (longlong)puVar12;
      }
      *(undefined8 *)(puVar15 + -8) = 0x1400efa36;
      FUN_1404210f0(puVar11,puVar12,lVar10);
      *(undefined8 *)(puVar15 + -8) = 0x1400efa47;
      FUN_1400efe40(param_1,puVar13,uVar8,uVar16);
      return puVar1;
    }
  }
LAB_1400efa5f:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

