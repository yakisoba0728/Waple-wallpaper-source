// Function: FUN_140161230
// Addr: 140161230
// Size: 612 bytes


undefined8 * FUN_140161230(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 unaff_R13;
  ulonglong uVar16;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [72];
  
  puVar13 = auStack_78;
  puVar14 = auStack_78;
  lVar2 = *param_1;
  lVar12 = (param_1[1] - lVar2 >> 3) * -0x5555555555555555;
  if (lVar12 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar11 = (param_1[2] - lVar2 >> 3) * -0x5555555555555555;
  uVar9 = 0xaaaaaaaaaaaaaaa - (uVar11 >> 1);
  if (uVar11 < uVar9 || uVar11 - uVar9 == 0) {
    uVar9 = lVar12 + 1;
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar16 = uVar9;
    if (uVar9 <= uVar11) {
      uVar16 = uVar11;
    }
    if (uVar16 < 0xaaaaaaaaaaaaaab) {
      uVar11 = uVar16 * 0x18;
      if (uVar11 == 0) {
        puVar15 = (undefined8 *)0x0;
        puVar14 = auStack_78;
      }
      else if (uVar11 < 0x1000) {
        puVar15 = (undefined8 *)FUN_14028af20();
      }
      else {
        if (uVar11 + 0x27 <= uVar11) goto LAB_140161490;
        lVar12 = FUN_14028af20(uVar11 + 0x27);
        if (lVar12 == 0) {
          pcVar7 = (code *)swi(0x29);
          lVar12 = (*pcVar7)(5);
          puVar13 = auStack_70;
        }
        puVar15 = (undefined8 *)(lVar12 + 0x27U & 0xffffffffffffffe0);
        puVar15[-1] = lVar12;
        puVar14 = puVar13;
      }
      *(undefined8 *)(puVar14 + 0x90) = unaff_R13;
      *(longlong **)(puVar14 + 0x20) = param_1;
      *(ulonglong *)(puVar14 + 0x30) = uVar16;
      puVar1 = puVar15 + (((longlong)param_2 - lVar2) / 0x18) * 3;
      *(undefined8 **)(puVar14 + 0x40) = puVar1 + 3;
      *(undefined8 *)(puVar14 + -8) = 0x140161364;
      FUN_140161940(-((longlong)param_2 - lVar2 >> 0x3f),puVar1,param_3);
      puVar3 = (undefined8 *)param_1[1];
      puVar10 = (undefined8 *)*param_1;
      *(undefined8 **)(puVar14 + 0x38) = puVar1;
      puVar8 = puVar15;
      if (param_2 == puVar3) {
        for (; puVar10 != puVar3; puVar10 = puVar10 + 3) {
          uVar4 = puVar10[2];
          uVar5 = puVar10[1];
          uVar6 = *puVar10;
          puVar10[2] = 0;
          puVar10[1] = 0;
          *puVar10 = 0;
          *puVar8 = uVar6;
          puVar8[1] = uVar5;
          puVar8[2] = uVar4;
          puVar8 = puVar8 + 3;
        }
      }
      else {
        for (; puVar10 != param_2; puVar10 = puVar10 + 3) {
          uVar4 = puVar10[2];
          uVar5 = puVar10[1];
          uVar6 = *puVar10;
          puVar10[2] = 0;
          puVar10[1] = 0;
          *puVar10 = 0;
          *puVar8 = uVar6;
          puVar8[1] = uVar5;
          puVar8[2] = uVar4;
          puVar8 = puVar8 + 3;
        }
        puVar3 = (undefined8 *)param_1[1];
        *(undefined8 **)(puVar14 + 0x38) = puVar15;
        puVar10 = puVar1 + 3;
        for (; param_2 != puVar3; param_2 = param_2 + 3) {
          uVar4 = param_2[2];
          uVar5 = param_2[1];
          uVar6 = *param_2;
          param_2[2] = 0;
          param_2[1] = 0;
          *param_2 = 0;
          *puVar10 = uVar6;
          puVar10[1] = uVar5;
          puVar10[2] = uVar4;
          puVar10 = puVar10 + 3;
        }
      }
      *(undefined8 *)(puVar14 + 0x28) = 0;
      *(undefined8 *)(puVar14 + -8) = 0x140161455;
      FUN_140161b70(param_1,puVar15,uVar9,uVar16);
      *(undefined8 *)(puVar14 + -8) = 0x14016145f;
      FUN_140161ac0(puVar14 + 0x20);
      return puVar1;
    }
  }
LAB_140161490:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

