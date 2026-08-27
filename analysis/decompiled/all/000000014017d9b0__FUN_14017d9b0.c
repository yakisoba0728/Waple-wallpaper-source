// Function: FUN_14017d9b0
// Addr: 14017d9b0
// Size: 1204 bytes


void FUN_14017d9b0(longlong *param_1,undefined4 param_2,char *param_3,char *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  size_t sVar5;
  ulonglong uVar6;
  size_t sVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  uint *puVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  undefined8 *_Buf1;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined4 local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  
  puVar16 = auStack_b8;
  puVar15 = (undefined4 *)param_1[0x60c];
  if (puVar15 != (undefined4 *)param_1[0x60d]) {
    do {
      _Buf1 = (undefined8 *)(puVar15 + 2);
      sVar5 = strlen(param_3);
      sVar7 = *(size_t *)(puVar15 + 6);
      if (0xf < *(ulonglong *)(puVar15 + 8)) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
      if ((sVar7 == sVar5) && ((sVar7 == 0 || (iVar4 = memcmp(_Buf1,param_3,sVar7), iVar4 == 0)))) {
        uVar14 = param_1[3];
        uVar18 = 0;
        if (uVar14 != 0) {
          if (((longlong)uVar14 < 0) && (uVar14 != 0)) {
            lVar11 = *param_1 + (~uVar14 >> 5) * -4 + -4;
          }
          else {
            lVar11 = *param_1 + (uVar14 >> 5) * 4;
          }
          uVar6 = (ulonglong)((uint)uVar14 & 0x1f) - 1;
          uVar18 = (uint)uVar6 & 0x1f;
          if ((uVar14 & 0x1f) == 0) {
            puVar12 = (uint *)(lVar11 + (~uVar6 >> 5) * -4 + -4);
          }
          else {
            puVar12 = (uint *)(lVar11 + (uVar6 >> 5) * 4);
          }
          if ((*puVar12 & 1 << (sbyte)uVar18) != 0) {
            return;
          }
        }
        FUN_14017de70(uVar18,puVar15);
        puVar10 = (undefined4 *)param_1[0x60d];
        puVar13 = puVar15;
        puVar3 = puVar15;
        while (puVar2 = puVar3 + 0x14, puVar2 != puVar10) {
          *puVar13 = *puVar2;
          FUN_14000de40(puVar13 + 2,puVar3 + 0x16);
          FUN_14000de40(puVar13 + 10,puVar3 + 0x1e);
          *(undefined8 *)(puVar13 + 0x12) = *(undefined8 *)(puVar3 + 0x26);
          puVar13 = puVar13 + 0x14;
          puVar3 = puVar2;
        }
        lVar11 = param_1[0x60d];
        FUN_140017240(lVar11 + -0x28);
        FUN_140017240(lVar11 + -0x48);
        param_1[0x60d] = param_1[0x60d] + -0x50;
      }
      else {
        puVar15 = puVar15 + 0x14;
      }
    } while (puVar15 != (undefined4 *)param_1[0x60d]);
  }
  uVar14 = 0;
  local_78 = 0xf;
  local_80 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0xf;
  local_98 = param_2;
  sVar7 = strlen(param_3);
  FUN_14000f880(&local_90,param_3,sVar7);
  if (param_4 == (char *)0x0) {
    param_4 = param_3;
  }
  sVar7 = strlen(param_4);
  FUN_14000f880(&local_70,param_4,sVar7);
  puVar15 = (undefined4 *)param_1[0x60d];
  local_50 = param_5;
  if (puVar15 == (undefined4 *)param_1[0x60e]) {
    lVar11 = ((longlong)puVar15 - param_1[0x60c]) / 0x50;
    if (lVar11 == 0x333333333333333) goto LAB_14017de5a;
    uVar6 = (param_1[0x60e] - param_1[0x60c] >> 4) * -0x3333333333333333;
    uVar8 = 0x333333333333333 - (uVar6 >> 1);
    if (uVar8 <= uVar6 && uVar6 - uVar8 != 0) {
LAB_14017de60:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar8 = lVar11 + 1;
    uVar17 = uVar8;
    if (uVar8 <= uVar6) {
      uVar17 = uVar6;
    }
    if (0x333333333333333 < uVar17) goto LAB_14017de60;
    uVar17 = uVar17 * 0x50;
    if (uVar17 == 0) {
LAB_14017dcac:
      uVar19 = lVar11 * 0x50;
      *(undefined4 *)(uVar19 + uVar14) = local_98;
      FUN_140016fc0((uVar19 | 8) + uVar14,&local_90);
      FUN_140016fc0(uVar19 + 0x28 + uVar14,&local_70);
      *(undefined8 *)(uVar19 + 0x48 + uVar14) = local_50;
      puVar13 = (undefined4 *)param_1[0x60d];
      puVar10 = (undefined4 *)param_1[0x60c];
      uVar6 = uVar14;
      if (puVar15 != puVar13) {
        FUN_14017e640((undefined4 *)param_1[0x60c],puVar15,uVar14);
        puVar13 = (undefined4 *)param_1[0x60d];
        uVar6 = uVar19 + 0x50 + uVar14;
        puVar10 = puVar15;
      }
      FUN_14017e640(puVar10,puVar13,uVar6);
      lVar11 = param_1[0x60c];
      if (lVar11 != 0) {
        lVar9 = param_1[0x60d];
        for (; lVar11 != lVar9; lVar11 = lVar11 + 0x50) {
          FUN_140017240(lVar11 + 0x28);
          FUN_140017240(lVar11 + 8);
        }
        lVar11 = param_1[0x60c];
        uVar6 = (param_1[0x60e] - lVar11 >> 4) * 0x10;
        if (0xfff < uVar6) {
          if (0x1f < (lVar11 - *(longlong *)(lVar11 + -8)) - 8U) goto LAB_14017de53;
          uVar6 = uVar6 + 0x27;
          lVar11 = *(longlong *)(lVar11 + -8);
        }
        thunk_FUN_14028af80(lVar11,uVar6);
      }
      param_1[0x60c] = uVar14;
      param_1[0x60d] = uVar8 * 0x50 + uVar14;
      param_1[0x60e] = uVar17 + uVar14;
      goto LAB_14017ddc4;
    }
    if (uVar17 < 0x1000) {
      uVar14 = FUN_14028af20(uVar17);
      goto LAB_14017dcac;
    }
    if (uVar17 + 0x27 <= uVar17) goto LAB_14017de60;
    lVar9 = FUN_14028af20();
    if (lVar9 != 0) {
      uVar14 = lVar9 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar14 - 8) = lVar9;
      goto LAB_14017dcac;
    }
  }
  else {
    *puVar15 = local_98;
    FUN_140016fc0(puVar15 + 2,&local_90);
    FUN_140016fc0(puVar15 + 10,&local_70);
    *(undefined8 *)(puVar15 + 0x12) = local_50;
    param_1[0x60d] = param_1[0x60d] + 0x50;
LAB_14017ddc4:
    if (0xf < local_58) {
      uVar6 = local_58 + 1;
      uVar14 = local_70;
      if (0xfff < uVar6) {
        uVar14 = *(ulonglong *)(local_70 - 8);
        if (0x1f < (local_70 - uVar14) - 8) goto LAB_14017de53;
        uVar6 = local_58 + 0x28;
      }
      thunk_FUN_14028af80(uVar14,uVar6);
    }
    local_60 = 0;
    local_58 = 0xf;
    local_70 = local_70 & 0xffffffffffffff00;
    if (local_78 < 0x10) {
      return;
    }
    uVar14 = local_78 + 1;
    lVar11 = local_90;
    if (uVar14 < 0x1000) {
LAB_14017de3d:
      thunk_FUN_14028af80(lVar11,uVar14);
      return;
    }
    lVar11 = *(longlong *)(local_90 + -8);
    if ((local_90 - lVar11) - 8U < 0x20) {
      uVar14 = local_78 + 0x28;
      goto LAB_14017de3d;
    }
  }
LAB_14017de53:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar16 = auStack_b0;
LAB_14017de5a:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar16 + -8) = &UNK_14017de5f;
  FUN_140013050();
}

