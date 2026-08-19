// Function: FUN_140097560
// Addr: 140097560
// Size: 104 bytes


longlong * FUN_140097560(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  byte *pbVar3;
  uint uVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) goto LAB_1400975b4;
  if (*(longlong *)plVar2[7] == 0) {
LAB_14009759c:
    uVar4 = (**(code **)(*plVar2 + 0x38))();
  }
  else {
    iVar1 = *(int *)plVar2[10];
    if (iVar1 < 1) goto LAB_14009759c;
    *(int *)plVar2[10] = iVar1 + -1;
    pbVar3 = *(byte **)plVar2[7];
    *(byte **)plVar2[7] = pbVar3 + 1;
    uVar4 = (uint)*pbVar3;
  }
  if (uVar4 != 0xffffffff) {
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_1400975b4:
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}

