// Function: FUN_14049f00c
// Addr: 14049f00c
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x00014049f029) overlaps instruction at (ram,0x00014049f028)
    */

void FUN_14049f00c(longlong param_1)

{
  byte *pbVar1;
  uint *in_RAX;
  longlong *plVar2;
  byte *pbVar3;
  int *piVar4;
  char *pcVar6;
  undefined7 uVar5;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar2 = (longlong *)CONCAT71(uVar5,0x49);
  *(int *)plVar2 = (int)*plVar2 + (int)plVar2;
  *plVar2 = *plVar2 + (longlong)plVar2;
  pbVar3 = (byte *)(CONCAT71(uVar5,bRam00000001468bfa23) | 0x49);
  pcVar6 = (char *)(param_1 + -1);
  pbVar1 = pbVar3;
  if (pcVar6 != (char *)0x0 && (bRam00000001468bfa23 | 0x49) != 0) {
    *pbVar3 = *pbVar3 ^ (bRam00000001468bfa23 | 0x49);
    *pcVar6 = *pcVar6 + (char)((ulonglong)in_RAX >> 8);
    pbVar3 = (byte *)(ulonglong)((int)pbVar3 + 0x64050002);
    pbVar1 = pbRam00000000010049de;
  }
  pbRam00000000010049de = pbVar1;
  *pbVar3 = *pbVar3 + (char)pbVar3;
  uRam00000001a44ef034 = uRam00000001a44ef034 & (uint)pbVar3;
  piVar4 = (int *)CONCAT71((int7)((ulonglong)pbVar3 >> 8),0x4c);
  *piVar4 = *piVar4 + (int)piVar4;
  return;
}

