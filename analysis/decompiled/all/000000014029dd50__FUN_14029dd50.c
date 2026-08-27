// Function: FUN_14029dd50
// Addr: 14029dd50
// Size: 110 bytes


undefined1 * FUN_14029dd50(undefined1 *param_1,short param_2)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) goto LAB_14029ddb2;
  if (**(longlong **)(lVar2 + 0x40) == 0) {
LAB_14029dd92:
    param_2 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar2,param_2);
  }
  else {
    iVar1 = **(int **)(lVar2 + 0x58);
    if (iVar1 < 1) goto LAB_14029dd92;
    **(int **)(lVar2 + 0x58) = iVar1 + -1;
    psVar3 = (short *)**(longlong **)(lVar2 + 0x40);
    **(longlong **)(lVar2 + 0x40) = (longlong)(psVar3 + 1);
    *psVar3 = param_2;
  }
  if (param_2 != -1) {
    return param_1;
  }
LAB_14029ddb2:
  *param_1 = 1;
  return param_1;
}

