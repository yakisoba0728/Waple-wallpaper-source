// Function: FUN_140077310
// Addr: 140077310
// Size: 844 bytes


void FUN_140077310(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  ulonglong local_78;
  longlong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  
  puVar7 = auStack_98;
  lVar6 = *param_1;
  lVar10 = param_3 - lVar6 >> 3;
  uVar11 = lVar10 * -0x71c71c71c71c71c7;
  param_5 = param_5 - param_4;
  if (param_5 != 0) {
    lVar1 = param_1[1];
    lVar8 = param_5 >> 3;
    uVar9 = lVar8 * -0x71c71c71c71c71c7;
    uVar3 = (param_1[2] - lVar1) / 0x48;
    local_78 = uVar11;
    if (uVar3 <= uVar9 && uVar9 - uVar3 != 0) {
      lVar8 = lVar1 - lVar6 >> 3;
      uVar3 = lVar8 * 0x71c71c71c71c71c7 + 0x38e38e38e38e38e;
      if (uVar3 <= uVar9 && uVar9 - uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140013120();
      }
      uVar3 = (param_1[2] - lVar6 >> 3) * -0x71c71c71c71c71c7;
      uVar4 = 0x38e38e38e38e38e - (uVar3 >> 1);
      if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
        uVar4 = lVar8 * -0x71c71c71c71c71c7 + uVar9;
        uVar3 = (uVar3 >> 1) + uVar3;
        local_60 = uVar4;
        if (uVar4 <= uVar3) {
          local_60 = uVar3;
        }
        if (local_60 < 0x38e38e38e38e38f) {
          local_78 = local_60 * 0x48;
          if (local_78 == 0) {
            lVar5 = 0;
            lVar8 = (uVar9 + uVar11) * 0x48;
            lVar10 = lVar10 * 8;
            local_70 = param_1;
            local_50 = lVar8;
            FUN_14007c6f0(param_4,uVar9,lVar10);
            local_58 = lVar10;
            if ((param_5 != 0x48) || (param_3 != lVar1)) {
              FUN_14007c760(lVar6,param_3,0);
              local_58 = 0;
              lVar6 = param_3;
              lVar5 = lVar8;
            }
            FUN_14007c760(lVar6,lVar1,lVar5);
            lVar6 = *param_1;
            local_68 = 0;
            if (lVar6 != 0) {
              if (lVar6 != param_1[1]) {
                    /* WARNING: Subroutine does not return */
                FUN_140017310(lVar6 + 0x28);
              }
              lVar6 = *param_1;
              if ((0xfff < (ulonglong)((param_1[2] - lVar6 >> 3) * 8)) &&
                 (lVar10 = lVar6 - *(longlong *)(lVar6 + -8), lVar6 = *(longlong *)(lVar6 + -8),
                 puVar7 = auStack_98, 0x1f < lVar10 - 8U)) {
                lVar6 = 5;
                pcVar2 = (code *)swi(0x29);
                (*pcVar2)(5);
                puVar7 = auStack_90;
              }
              *(undefined8 *)(puVar7 + -8) = 0x140077596;
              func_0x00014028b040(lVar6);
              return;
            }
            *param_1 = 0;
            param_1[1] = uVar4 * 0x48;
            param_1[2] = local_78;
            FUN_14007d1d0(&local_70);
            goto LAB_1400776e9;
          }
          if (local_78 < 0x1000) {
            func_0x00014028aff0(local_78);
            return;
          }
          if (local_78 < local_78 + 0x27) {
            func_0x00014028aff0();
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
    lVar6 = lVar8 * 8;
    if (uVar9 < (ulonglong)((lVar1 - param_3 >> 3) * -0x71c71c71c71c71c7)) {
      lVar10 = lVar1 + lVar8 * -8;
      lVar8 = lVar6;
      lVar5 = FUN_14007c760(lVar10,lVar1,lVar1);
      param_1[1] = lVar5;
      while (lVar10 != param_3) {
        FUN_14000df10(lVar1 + -0x48,lVar10 + -0x48);
        *(undefined4 *)(lVar1 + -0x28) = *(undefined4 *)(lVar10 + -0x28);
        FUN_14000df10(lVar1 + -0x20,lVar10 + -0x20);
        lVar1 = lVar1 + -0x48;
        lVar10 = lVar10 + -0x48;
        lVar8 = lVar6;
      }
      if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140017310(param_3 + 0x28);
      }
      FUN_14007c6f0(param_4,uVar9,param_3);
      uVar11 = local_78;
    }
    else {
      lVar6 = FUN_14007c760(param_3,lVar1,lVar6 + param_3);
      param_1[1] = lVar6;
      if (param_3 != lVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_140017310(param_3 + 0x28);
      }
      FUN_14007c6f0(param_4,uVar9,param_3);
    }
  }
LAB_1400776e9:
  *param_2 = *param_1 + uVar11 * 0x48;
  return;
}

