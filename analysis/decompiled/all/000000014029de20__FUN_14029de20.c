// Function: FUN_14029de20
// Addr: 14029de20
// Size: 20 bytes


undefined1 * FUN_14029de20(undefined1 *param_1,short param_2)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) goto code_r0x00014029de82;
  if (**(longlong **)(lVar2 + 0x40) == 0) {
code_r0x00014029de62:
    param_2 = (*(code *)PTR_FUN_140426bb8)(lVar2,param_2);
  }
  else {
    iVar1 = **(int **)(lVar2 + 0x58);
    if (iVar1 < 1) goto code_r0x00014029de62;
    **(int **)(lVar2 + 0x58) = iVar1 + -1;
    psVar3 = (short *)**(longlong **)(lVar2 + 0x40);
    **(longlong **)(lVar2 + 0x40) = (longlong)(psVar3 + 1);
    *psVar3 = param_2;
  }
  if (param_2 != -1) {
    return param_1;
  }
code_r0x00014029de82:
  *param_1 = 1;
  return param_1;
}

