// Function: FUN_1402d2974
// Addr: 1402d2974
// Size: 497 bytes


void FUN_1402d2974(short *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  short *psVar5;
  short *psVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 *in_stack_00000030;
  undefined1 auStackY_2a8 [32];
  undefined1 local_228 [464];
  ulonglong local_58;
  
  local_58 = DAT_1404dc110 ^ (ulonglong)auStackY_2a8;
  if (param_1 == (short *)0x0) {
LAB_1402d29d9:
    func_0x0001402ed2f0(local_58 ^ (ulonglong)auStackY_2a8);
    return;
  }
  if ((*param_1 == 0x43) && (param_1[1] == 0)) {
    iVar3 = func_0x0001402dec70();
    if (iVar3 == 0) {
      *in_stack_00000030 = 0;
      goto LAB_1402d29d9;
    }
  }
  else {
    lVar4 = FUN_1402d9964();
    psVar6 = (short *)(lVar4 + 0xbc);
    psVar5 = (short *)(lVar4 + 0x1c2);
    iVar3 = FUN_1402d9bf0();
    if (iVar3 == 0) {
      uVar8 = 0xffffffffffffffff;
      do {
        uVar8 = uVar8 + 1;
      } while (param_1[uVar8] != 0);
      if (0x82 < uVar8) {
LAB_1402d2af0:
        func_0x000140421870(local_228,0,0x1ca);
        return;
      }
      lVar7 = (longlong)param_1 - (longlong)psVar5;
      do {
        sVar1 = *psVar5;
        sVar2 = *(short *)((longlong)psVar5 + lVar7);
        if (sVar1 != sVar2) break;
        psVar5 = psVar5 + 1;
      } while (sVar2 != 0);
      if (sVar1 != sVar2) {
        lVar7 = (longlong)param_1 - (longlong)psVar6;
        do {
          sVar1 = *psVar6;
          sVar2 = *(short *)((longlong)psVar6 + lVar7);
          if (sVar1 != sVar2) break;
          psVar6 = psVar6 + 1;
        } while (sVar2 != 0);
        if (sVar1 != sVar2) goto LAB_1402d2af0;
      }
      *in_stack_00000030 = *(undefined4 *)(lVar4 + 0xb8);
      iVar3 = func_0x0001402dec70();
      if ((iVar3 == 0) && (iVar3 = FUN_1402d9bf0(), iVar3 == 0)) goto LAB_1402d29d9;
    }
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

