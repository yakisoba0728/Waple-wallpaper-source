// Function: FUN_1400904e0
// Addr: 1400904e0
// Size: 843 bytes


ulonglong FUN_1400904e0(longlong param_1,longlong *param_2,undefined4 *param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_60 [9];
  
  puVar13 = auStack_98;
  local_68 = *(undefined8 *)(param_3 + 4);
  uVar16 = (undefined4)local_68;
  uVar17 = (undefined4)((ulonglong)local_68 >> 0x20);
  local_60[2] = 0;
  local_60[3] = 0xf;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  local_60[1] = 0;
  local_60[0] = 0;
  if (local_60 != param_2) {
    plVar7 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar7 = (longlong *)*param_2;
    }
    FUN_14000f880(local_60,plVar7,param_2[2]);
    uVar16 = (undefined4)local_68;
    uVar17 = (undefined4)((ulonglong)local_68 >> 0x20);
  }
  uVar6 = uStack_6c;
  uVar5 = uStack_70;
  uVar4 = uStack_74;
  uVar3 = local_78;
  uVar11 = *(ulonglong *)(param_1 + 0x38);
  local_60[4] = param_4;
  if (uVar11 <= *(longlong *)(param_1 + 0x48) + 1U) {
    uVar12 = 1;
    if (uVar11 != 0) {
      uVar12 = uVar11;
    }
    do {
      if ((uVar12 != uVar11) && (7 < uVar12)) {
        uVar11 = *(ulonglong *)(param_1 + 0x40);
        if (0x1fffffffffffffff < uVar12) {
LAB_140090827:
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        uVar15 = uVar12 * 8;
        if (uVar15 == 0) {
          uVar15 = 0;
        }
        else if (uVar15 < 0x1000) {
          uVar15 = FUN_14028af20();
        }
        else {
          if (uVar15 + 0x27 <= uVar15) goto LAB_140090827;
          lVar8 = FUN_14028af20(uVar15 + 0x27);
          if (lVar8 == 0) goto LAB_14009081a;
          uVar15 = lVar8 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar15 - 8) = lVar8;
        }
        uVar10 = uVar12 >> 1;
        lVar8 = uVar11 * 8;
        for (; uVar12 <= uVar10; uVar12 = uVar12 * 2) {
        }
        uVar12 = uVar12 - *(longlong *)(param_1 + 0x38);
        lVar14 = (*(longlong *)(param_1 + 0x38) - uVar11) * 8;
        FUN_1404210f0(lVar8 + uVar15,*(longlong *)(param_1 + 0x30) + lVar8,lVar14);
        lVar14 = lVar14 + lVar8 + uVar15;
        if (uVar12 < uVar11) {
          lVar8 = uVar12 * 8;
          FUN_1404210f0(lVar14,*(undefined8 *)(param_1 + 0x30),lVar8);
          lVar14 = (uVar11 - uVar12) * 8;
          FUN_1404210f0(uVar15,*(longlong *)(param_1 + 0x30) + lVar8,lVar14);
          uVar11 = uVar15 + lVar14;
        }
        else {
          FUN_1404210f0(lVar14,*(undefined8 *)(param_1 + 0x30),lVar8);
          FUN_1404217a0(lVar14 + lVar8,0,(uVar12 - uVar11) * 8);
          uVar11 = uVar15;
        }
        FUN_1404217a0(uVar11,0,lVar8);
        lVar8 = *(longlong *)(param_1 + 0x30);
        if (lVar8 == 0) {
LAB_140090742:
          *(ulonglong *)(param_1 + 0x30) = uVar15;
          *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + uVar12;
          uVar11 = *(ulonglong *)(param_1 + 0x38);
          break;
        }
        uVar11 = *(longlong *)(param_1 + 0x38) * 8;
        if (uVar11 < 0x1000) {
LAB_14009073a:
          thunk_FUN_14028af80(lVar8,uVar11);
          goto LAB_140090742;
        }
        if ((lVar8 - *(longlong *)(lVar8 + -8)) - 8U < 0x20) {
          uVar11 = uVar11 + 0x27;
          lVar8 = *(longlong *)(lVar8 + -8);
          goto LAB_14009073a;
        }
        goto LAB_14009081a;
      }
      if (0x3ffffffffffffff - uVar12 < uVar12) goto LAB_140090821;
      uVar12 = uVar12 * 2;
    } while( true );
  }
  *(ulonglong *)(param_1 + 0x40) = *(ulonglong *)(param_1 + 0x40) & uVar11 - 1;
  uVar12 = *(longlong *)(param_1 + 0x48) + *(longlong *)(param_1 + 0x40);
  uVar11 = uVar11 - 1 & uVar12;
  if (*(longlong *)(*(longlong *)(param_1 + 0x30) + uVar11 * 8) == 0) {
    uVar9 = FUN_14028af20(0x40);
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + uVar11 * 8) = uVar9;
  }
  puVar1 = *(undefined4 **)
            (*(longlong *)(param_1 + 0x30) + (*(longlong *)(param_1 + 0x38) - 1U & uVar12) * 8);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(ulonglong *)(puVar1 + 4) = CONCAT44(uVar17,uVar16);
  FUN_140016fc0(puVar1 + 6,local_60);
  *(longlong *)(puVar1 + 0xe) = local_60[4];
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 1;
  if (0xf < (ulonglong)local_60[3]) {
    uVar11 = local_60[3] + 1;
    lVar8 = local_60[0];
    if (0xfff < uVar11) {
      lVar8 = *(longlong *)(local_60[0] + -8);
      if (0x1f < (local_60[0] - lVar8) - 8U) {
LAB_14009081a:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar13 = auStack_90;
LAB_140090821:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar13 + -8) = &UNK_140090826;
        FUN_140082f20();
      }
      uVar11 = local_60[3] + 0x28;
    }
    local_60[4] = thunk_FUN_14028af80(lVar8,uVar11);
  }
  return local_60[4] & 0xffffffffffffff00;
}

