// Function: FUN_1404cc84c
// Addr: 1404cc84c
// Size: 1 bytes


undefined4 FUN_1404cc84c(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint *in_RAX;
  byte bVar4;
  longlong unaff_RBX;
  char *unaff_RDI;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar3 = *in_RAX;
  pbVar1 = (byte *)(param_1 + unaff_RBX);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  *unaff_RDI = *unaff_RDI + (char)param_1 + CARRY1(bVar2,bVar4);
  uVar3 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + (char)uVar3) ^ 0x350f8200;
  unaff_RDI[(ulonglong)uVar3 * 8 + 0x4c] = unaff_RDI[(ulonglong)uVar3 * 8 + 0x4c] + (char)param_2;
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  uVar3 = uVar3 + 0x64050002;
  return CONCAT31((int3)(uVar3 >> 8),(byte)uVar3 | *(byte *)(ulonglong)uVar3);
}

