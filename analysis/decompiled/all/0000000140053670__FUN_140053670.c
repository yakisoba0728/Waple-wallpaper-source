// Function: FUN_140053670
// Addr: 140053670
// Size: 1069 bytes


ulonglong *
FUN_140053670(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int extraout_var;
  int extraout_var_00;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *******pppppppuVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  int local_98;
  undefined8 ******local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong local_70;
  undefined8 ******local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  
  puVar11 = auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uVar3 = FUN_14028f780();
  puVar12 = param_3;
  if (7 < (ulonglong)param_3[3]) {
    puVar12 = (undefined8 *)*param_3;
  }
  uVar10 = param_3[2];
  local_58 = 0;
  local_50 = 0xf;
  uStack_60 = 0;
  local_68 = (undefined8 *******)0x0;
  if (uVar10 != 0) {
    if (0x7fffffff < uVar10) goto LAB_140053a8b;
    local_98 = 0;
    uVar4 = FUN_14028f7b0(uVar3,puVar12,uVar10 & 0xffffffff,0);
    if ((int)((ulonglong)uVar4 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140052f80();
    }
    FUN_140016ee0(&local_68,(longlong)(int)uVar4,0);
    pppppppuVar8 = &local_68;
    if (0xf < local_50) {
      pppppppuVar8 = (undefined8 *******)local_68;
    }
    local_98 = (int)uVar4;
    FUN_14028f7b0(uVar3,puVar12,uVar10 & 0xffffffff,pppppppuVar8);
    if (extraout_var != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140052f80(extraout_var);
    }
  }
  puVar12 = param_4;
  if (7 < (ulonglong)param_4[3]) {
    puVar12 = (undefined8 *)*param_4;
  }
  uVar10 = param_4[2];
  local_78 = 0;
  local_70 = 0xf;
  uStack_80 = 0;
  local_88 = (undefined8 *******)0x0;
  if (uVar10 != 0) {
    if (0x7fffffff < uVar10) {
LAB_140053a8b:
                    /* WARNING: Subroutine does not return */
      FUN_140052f30(0x16);
    }
    local_98 = 0;
    uVar4 = FUN_14028f7b0(uVar3,puVar12,uVar10 & 0xffffffff,0);
    if ((int)((ulonglong)uVar4 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140052f80();
    }
    FUN_140016ee0(&local_88,(longlong)(int)uVar4,0);
    pppppppuVar8 = &local_88;
    if (0xf < local_70) {
      pppppppuVar8 = (undefined8 *******)local_88;
    }
    local_98 = (int)uVar4;
    FUN_14028f7b0(uVar3,puVar12,uVar10 & 0xffffffff,pppppppuVar8);
    if (extraout_var_00 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140052f80(extraout_var_00);
    }
  }
  lVar5 = param_2[1];
  lVar9 = 8;
  if (local_78 == 0) {
    lVar9 = 4;
  }
  FUN_140052fb0(param_1,lVar9 + lVar5 + local_58 + local_78);
  FUN_1400532a0(param_1,*param_2,lVar5);
  FUN_1400532a0(param_1,&DAT_140475e88,3);
  pppppppuVar8 = &local_68;
  if (0xf < local_50) {
    pppppppuVar8 = (undefined8 *******)local_68;
  }
  FUN_1400532a0(param_1,pppppppuVar8,local_58);
  if (local_78 != 0) {
    FUN_1400532a0(param_1,&DAT_140475e8c,4);
    pppppppuVar8 = &local_88;
    if (0xf < local_70) {
      pppppppuVar8 = (undefined8 *******)local_88;
    }
    FUN_1400532a0(param_1,pppppppuVar8,local_78);
  }
  uVar10 = param_1[2];
  uVar1 = param_1[3];
  if (uVar10 < uVar1) {
    param_1[2] = uVar10 + 1;
    if (uVar1 < 0x10) {
      *(undefined2 *)((longlong)param_1 + uVar10) = 0x22;
    }
    else {
      *(undefined2 *)(*param_1 + uVar10) = 0x22;
    }
LAB_1400539d4:
    if (0xf < local_70) {
      uVar10 = local_70 + 1;
      pppppppuVar8 = (undefined8 *******)local_88;
      if (0xfff < uVar10) {
        pppppppuVar8 = (undefined8 *******)local_88[-1];
        if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)pppppppuVar8)))
        goto LAB_140053a6a;
        uVar10 = local_70 + 0x28;
      }
      thunk_FUN_14028af80(pppppppuVar8,uVar10);
    }
    local_78 = 0;
    local_70 = 0xf;
    local_88 = (undefined8 ******)((ulonglong)local_88 & 0xffffffffffffff00);
    if (local_50 < 0x10) {
      return param_1;
    }
    uVar10 = local_50 + 1;
    pppppppuVar8 = (undefined8 *******)local_68;
    if (uVar10 < 0x1000) {
LAB_140053a51:
      thunk_FUN_14028af80(pppppppuVar8,uVar10);
      return param_1;
    }
    pppppppuVar8 = (undefined8 *******)local_68[-1];
    if ((ulonglong)((longlong)local_68 + (-8 - (longlong)pppppppuVar8)) < 0x20) {
      uVar10 = local_50 + 0x28;
      goto LAB_140053a51;
    }
  }
  else {
    uVar13 = 0x7fffffffffffffff;
    if (uVar10 == 0x7fffffffffffffff) goto LAB_140053a71;
    uVar6 = uVar10 + 1 | 0xf;
    if ((uVar6 < 0x8000000000000000) && (uVar1 <= 0x7fffffffffffffff - (uVar1 >> 1))) {
      uVar7 = (uVar1 >> 1) + uVar1;
      uVar13 = uVar6;
      if (uVar6 < uVar7) {
        uVar13 = uVar7;
      }
      uVar6 = uVar13 + 1;
      if (uVar6 == 0) {
        uVar6 = 0;
      }
      else {
        if (0xfff < uVar6) {
          uVar7 = uVar13 + 0x28;
          if (uVar7 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_140017370();
          }
          goto LAB_140053940;
        }
        uVar6 = FUN_14028af20(uVar6);
      }
LAB_140053967:
      param_1[2] = uVar10 + 1;
      param_1[3] = uVar13;
      if (uVar1 < 0x10) {
        FUN_1404210f0(uVar6,param_1,uVar10);
        *(undefined2 *)(uVar6 + uVar10) = 0x22;
      }
      else {
        uVar13 = *param_1;
        FUN_1404210f0(uVar6,uVar13,uVar10);
        *(undefined2 *)(uVar6 + uVar10) = 0x22;
        if (uVar1 + 1 < 0x1000) {
          thunk_FUN_14028af80(uVar13);
        }
        else {
          if (0x1f < (uVar13 - *(longlong *)(uVar13 - 8)) - 8) goto LAB_140053a6a;
          thunk_FUN_14028af80(*(longlong *)(uVar13 - 8),uVar1 + 0x28);
        }
      }
      *param_1 = uVar6;
      goto LAB_1400539d4;
    }
    uVar7 = 0x8000000000000027;
LAB_140053940:
    lVar5 = FUN_14028af20(uVar7);
    if (lVar5 != 0) {
      uVar6 = lVar5 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar6 - 8) = lVar5;
      goto LAB_140053967;
    }
  }
LAB_140053a6a:
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5);
  puVar11 = auStack_b0;
LAB_140053a71:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar11 + -8) = &UNK_140053a76;
  FUN_1400172e0();
}

