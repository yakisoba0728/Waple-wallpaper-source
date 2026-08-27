// Function: FUN_140161650
// Addr: 140161650
// Size: 623 bytes


undefined8 * FUN_140161650(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [72];
  
  puVar14 = auStack_68;
  puVar13 = auStack_68;
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
    uVar15 = uVar9;
    if (uVar9 <= uVar11) {
      uVar15 = uVar11;
    }
    if (uVar15 < 0xaaaaaaaaaaaaaab) {
      puVar16 = (undefined8 *)0x0;
      uVar11 = uVar15 * 0x18;
      if (uVar11 != 0) {
        if (uVar11 < 0x1000) {
          puVar16 = (undefined8 *)FUN_14028af20();
          puVar14 = auStack_68;
        }
        else {
          if (uVar11 + 0x27 <= uVar11) goto LAB_1401618bb;
          lVar12 = FUN_14028af20(uVar11 + 0x27);
          if (lVar12 == 0) {
            pcVar7 = (code *)swi(0x29);
            lVar12 = (*pcVar7)(5);
            puVar13 = auStack_60;
          }
          puVar16 = (undefined8 *)(lVar12 + 0x27U & 0xffffffffffffffe0);
          puVar16[-1] = lVar12;
          puVar14 = puVar13;
        }
      }
      *(longlong **)(puVar14 + 0x20) = param_1;
      *(ulonglong *)(puVar14 + 0x30) = uVar15;
      uVar3 = param_3[1];
      param_3[1] = 0;
      uVar4 = param_3[2];
      puVar1 = puVar16 + (((longlong)param_2 - lVar2) / 0x18) * 3;
      param_3[2] = 0;
      uVar5 = *param_3;
      *param_3 = 0;
      *puVar1 = uVar5;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar6 = (undefined8 *)param_1[1];
      puVar10 = (undefined8 *)*param_1;
      *(undefined8 **)(puVar14 + 0x40) = puVar1 + 3;
      *(undefined8 **)(puVar14 + 0x38) = puVar1;
      puVar8 = puVar16;
      if (param_2 == puVar6) {
        for (; puVar10 != puVar6; puVar10 = puVar10 + 3) {
          uVar3 = puVar10[2];
          uVar4 = puVar10[1];
          uVar5 = *puVar10;
          puVar10[2] = 0;
          puVar10[1] = 0;
          *puVar10 = 0;
          *puVar8 = uVar5;
          puVar8[1] = uVar4;
          puVar8[2] = uVar3;
          puVar8 = puVar8 + 3;
        }
      }
      else {
        for (; puVar10 != param_2; puVar10 = puVar10 + 3) {
          uVar3 = puVar10[2];
          uVar4 = puVar10[1];
          uVar5 = *puVar10;
          puVar10[2] = 0;
          puVar10[1] = 0;
          *puVar10 = 0;
          *puVar8 = uVar5;
          puVar8[1] = uVar4;
          puVar8[2] = uVar3;
          puVar8 = puVar8 + 3;
        }
        puVar6 = (undefined8 *)param_1[1];
        *(undefined8 **)(puVar14 + 0x38) = puVar16;
        puVar10 = puVar1 + 3;
        for (; param_2 != puVar6; param_2 = param_2 + 3) {
          uVar3 = param_2[2];
          uVar4 = param_2[1];
          uVar5 = *param_2;
          param_2[2] = 0;
          param_2[1] = 0;
          *param_2 = 0;
          *puVar10 = uVar5;
          puVar10[1] = uVar4;
          puVar10[2] = uVar3;
          puVar10 = puVar10 + 3;
        }
      }
      *(undefined8 *)(puVar14 + 0x28) = 0;
      *(undefined8 *)(puVar14 + -8) = 0x140161885;
      FUN_140161b70(param_1,puVar16,uVar9,uVar15);
      *(undefined8 *)(puVar14 + -8) = 0x14016188f;
      FUN_140161ac0(puVar14 + 0x20);
      return puVar1;
    }
  }
LAB_1401618bb:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

