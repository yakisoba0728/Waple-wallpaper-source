// Function: FUN_1404b37b0
// Addr: 1404b37b0
// Size: 1 bytes


void FUN_1404b37b0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  longlong in_RAX;
  byte unaff_BL;
  longlong unaff_RBP;
  char *pcVar5;
  
  *(uint *)(param_2 + in_RAX) = *(uint *)(param_2 + in_RAX) & (uint)in_RAX;
  pbVar1 = (byte *)(in_RAX + unaff_RBP * 2);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)in_RAX;
  uVar4 = (uint)in_RAX + 0x181f3000 + (uint)CARRY1(bVar2,(byte)in_RAX);
  pcVar5 = (char *)(ulonglong)uVar4;
  pbVar1 = (byte *)(pcVar5 + 0x1f);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + unaff_BL;
  *pcVar5 = (*pcVar5 - (char)uVar4) - CARRY1(bVar2,unaff_BL);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

