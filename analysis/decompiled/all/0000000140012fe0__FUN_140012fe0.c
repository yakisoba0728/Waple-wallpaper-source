// Function: FUN_140012fe0
// Addr: 140012fe0
// Size: 103 bytes


undefined1 * FUN_140012fe0(undefined1 *param_1,short param_2)

{
  int iVar1;
  longlong *plVar2;
  short *psVar3;
  
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) goto LAB_14001303b;
  if (*(longlong *)plVar2[8] == 0) {
LAB_140013022:
    param_2 = (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
  }
  else {
    iVar1 = *(int *)plVar2[0xb];
    if (iVar1 < 1) goto LAB_140013022;
    *(int *)plVar2[0xb] = iVar1 + -1;
    psVar3 = *(short **)plVar2[8];
    *(short **)plVar2[8] = psVar3 + 1;
    *psVar3 = param_2;
  }
  if (param_2 != -1) {
    return param_1;
  }
LAB_14001303b:
  *param_1 = 1;
  return param_1;
}

