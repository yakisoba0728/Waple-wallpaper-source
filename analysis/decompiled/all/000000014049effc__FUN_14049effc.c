// Function: FUN_14049effc
// Addr: 14049effc
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x00014049f029) overlaps instruction at (ram,0x00014049f028)
    */

void FUN_14049effc(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  int in_EAX;
  uint uVar4;
  int *piVar7;
  char *pcVar8;
  longlong *plVar5;
  byte *pbVar6;
  
  uVar4 = in_EAX + 0xb0000374;
  plVar5 = (longlong *)(ulonglong)uVar4;
  *param_3 = (longlong)(*param_3 + (longlong)plVar5);
  *plVar5 = (longlong)(*plVar5 + (longlong)plVar5);
  *(byte *)plVar5 = (char)*plVar5 + (byte)uVar4;
  *(char *)((longlong)plVar5 + 0x52000149) =
       *(char *)((longlong)plVar5 + 0x52000149) + (char)((ulonglong)param_2 >> 8);
  *plVar5 = (longlong)(*plVar5 + (longlong)plVar5);
  bVar3 = (byte)uVar4 | bRam00000001468bfa23;
  uVar1 = CONCAT31((int3)(uVar4 >> 8),bVar3);
  pbVar6 = (byte *)(ulonglong)uVar1;
  pcVar8 = (char *)(param_1 + -1);
  pbVar2 = pbVar6;
  if (pcVar8 != (char *)0x0 && bVar3 != 0) {
    *pbVar6 = *pbVar6 ^ bVar3;
    *pcVar8 = *pcVar8 + (char)(uVar4 >> 8);
    pbVar6 = (byte *)(ulonglong)(uVar1 + 0x64050002);
    pbVar2 = pbRam00000000010049de;
  }
  pbRam00000000010049de = pbVar2;
  *pbVar6 = *pbVar6 + (char)pbVar6;
  uRam00000001a44ef034 = uRam00000001a44ef034 & (uint)pbVar6;
  piVar7 = (int *)CONCAT71((int7)((ulonglong)pbVar6 >> 8),0x4c);
  *piVar7 = *piVar7 + (int)piVar7;
  return;
}

