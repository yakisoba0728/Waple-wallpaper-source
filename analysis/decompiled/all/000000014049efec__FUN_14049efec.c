// Function: FUN_14049efec
// Addr: 14049efec
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x00014049f029) overlaps instruction at (ram,0x00014049f028)
    */

void FUN_14049efec(longlong param_1,undefined8 param_2)

{
  uint3 uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  ulonglong in_RAX;
  int *piVar5;
  longlong *plVar6;
  byte *pbVar7;
  char *pcVar8;
  
  piVar5 = (int *)(in_RAX ^ 4);
  cRam0000000142b9f3b5 = cRam0000000142b9f3b5 + (char)piVar5;
  *(char *)piVar5 = (char)*piVar5 + (char)piVar5;
  uRam00000001b44ef000 = uRam00000001b44ef000 & (uint)piVar5;
  iVar4 = (uint)piVar5 + *piVar5;
  uVar1 = (uint3)((uint)iVar4 >> 8);
  plVar6 = (longlong *)CONCAT71((uint7)uVar1,0x49);
  *(int *)plVar6 = (int)*plVar6 + (int)plVar6;
  *plVar6 = (longlong)(*plVar6 + (longlong)plVar6);
  *(char *)plVar6 = (char)*plVar6 + 'I';
  *(char *)((longlong)plVar6 + 0x52000149) =
       *(char *)((longlong)plVar6 + 0x52000149) + (char)((ulonglong)param_2 >> 8);
  *plVar6 = (longlong)(*plVar6 + (longlong)plVar6);
  uVar2 = CONCAT31(uVar1,bRam00000001468bfa23) | 0x49;
  pbVar7 = (byte *)(ulonglong)uVar2;
  pcVar8 = (char *)(param_1 + -1);
  pbVar3 = pbVar7;
  if (pcVar8 != (char *)0x0 && (bRam00000001468bfa23 | 0x49) != 0) {
    *pbVar7 = *pbVar7 ^ (bRam00000001468bfa23 | 0x49);
    *pcVar8 = *pcVar8 + (char)((uint)iVar4 >> 8);
    pbVar7 = (byte *)(ulonglong)(uVar2 + 0x64050002);
    pbVar3 = pbRam00000000010049de;
  }
  pbRam00000000010049de = pbVar3;
  *pbVar7 = *pbVar7 + (char)pbVar7;
  uRam00000001a44ef034 = uRam00000001a44ef034 & (uint)pbVar7;
  piVar5 = (int *)CONCAT71((int7)((ulonglong)pbVar7 >> 8),0x4c);
  *piVar5 = *piVar5 + (int)piVar5;
  return;
}

