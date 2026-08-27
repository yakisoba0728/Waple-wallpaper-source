// Function: FUN_1400eaf10
// Addr: 1400eaf10
// Size: 380 bytes


char * FUN_1400eaf10(char *param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  size_t sVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char *******pppppppcVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Dd;
  char ******local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  puVar6 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar6 = (undefined8 *)*param_2;
  }
  uVar4 = FUN_1400eff30(puVar6,param_2[2],param_3,0x2e);
  pcVar10 = (char *)0x0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  if (uVar4 == 0xffffffffffffffff) {
LAB_1400eb062:
    *(undefined8 *)param_1 = uVar12;
    *(undefined4 *)(param_1 + 8) = uVar13;
    *(undefined4 *)(param_1 + 0xc) = uVar14;
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
  local_18 = 0;
  local_10 = 0;
  local_28 = (char ******)0x0;
  uStack_20 = 0;
  if ((ulonglong)param_2[2] < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_140012940();
  }
  lVar7 = param_2[2] - uVar4;
  lVar11 = -1;
  if (lVar7 != -1) {
    lVar11 = lVar7;
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_140017480(&local_28,(longlong)param_2 + uVar4,lVar11);
  pppppppcVar8 = &local_28;
  if (0xf < local_10) {
    pppppppcVar8 = (char *******)local_28;
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
  sVar5 = strlen((char *)pppppppcVar8);
  FUN_140017480(param_1,pppppppcVar8,sVar5);
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
  if (local_10 < 0x10) {
    return param_1;
  }
  uVar4 = local_10 + 1;
  pppppppcVar8 = (char *******)local_28;
  if (0xfff < uVar4) {
    pppppppcVar8 = (char *******)local_28[-1];
    if ((char *)0x1f < (char *)((longlong)local_28 + (-8 - (longlong)pppppppcVar8))) {
      pcVar2 = (code *)swi(0x29);
      uVar12 = (*pcVar2)(5);
      uVar13 = extraout_XMM0_Dc;
      uVar14 = extraout_XMM0_Dd;
      goto LAB_1400eb062;
    }
    uVar4 = local_10 + 0x28;
  }
  thunk_FUN_14028af80(pppppppcVar8,uVar4);
  return param_1;
}

