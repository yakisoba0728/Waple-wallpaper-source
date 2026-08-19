// Function: FUN_1400eafe0
// Addr: 1400eafe0
// Size: 55 bytes


char * FUN_1400eafe0(char *param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *******pppppppuVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dd;
  undefined8 ******ppppppuStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  ulonglong uStack_10;
  
  puVar6 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar6 = (undefined8 *)*param_2;
  }
  uVar4 = func_0x0001400f0000(puVar6,param_2[2],param_3,0x2e);
  pcVar10 = (char *)0x0;
  uVar5 = 0;
  uVar12 = 0;
  uVar13 = 0;
  if (uVar4 == 0xffffffffffffffff) {
code_r0x0001400eb132:
    *(undefined8 *)param_1 = uVar5;
    *(undefined4 *)(param_1 + 8) = uVar12;
    *(undefined4 *)(param_1 + 0xc) = uVar13;
    *(char **)(param_1 + 0x10) = pcVar10;
    param_1[0x18] = '\x0f';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    *param_1 = (char)pcVar10;
    return param_1;
  }
  uStack_18 = 0;
  uStack_10 = 0;
  ppppppuStack_28 = (undefined8 *******)0x0;
  uStack_20 = 0;
  if ((ulonglong)param_2[2] < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_140012a10();
  }
  lVar7 = param_2[2] - uVar4;
  lVar11 = -1;
  if (lVar7 != -1) {
    lVar11 = lVar7;
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  func_0x000140017550(&ppppppuStack_28,(longlong)param_2 + uVar4,lVar11);
  pppppppuVar8 = &ppppppuStack_28;
  if (0xf < uStack_10) {
    pppppppuVar8 = (undefined8 *******)ppppppuStack_28;
  }
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  uVar5 = func_0x000140421ed0(pppppppuVar8);
  func_0x000140017550(param_1,pppppppuVar8,uVar5);
  pcVar10 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar10 = *(char **)param_1;
  }
  pcVar9 = pcVar10 + *(longlong *)(param_1 + 0x10);
  pcVar1 = pcVar10;
  for (; pcVar10 != pcVar9; pcVar10 = pcVar10 + 1) {
    iVar3 = tolower((int)*pcVar10);
    *pcVar1 = (char)iVar3;
    pcVar1 = pcVar1 + 1;
  }
  if (uStack_10 < 0x10) {
    return param_1;
  }
  uVar4 = uStack_10 + 1;
  pppppppuVar8 = (undefined8 *******)ppppppuStack_28;
  if (0xfff < uVar4) {
    pppppppuVar8 = (undefined8 *******)ppppppuStack_28[-1];
    if (0x1f < (ulonglong)((longlong)ppppppuStack_28 + (-8 - (longlong)pppppppuVar8))) {
      pcVar2 = (code *)swi(0x29);
      uVar5 = (*pcVar2)(5);
      uVar12 = extraout_XMM0_Dc;
      uVar13 = extraout_XMM0_Dd;
      goto code_r0x0001400eb132;
    }
    uVar4 = uStack_10 + 0x28;
  }
  func_0x00014028b040(pppppppuVar8,uVar4);
  return param_1;
}

