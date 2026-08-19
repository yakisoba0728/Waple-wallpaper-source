// Function: FUN_14049f9dc
// Addr: 14049f9dc
// Size: 1 bytes


void FUN_14049f9dc(byte *param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar4;
  int *in_RAX;
  uint *unaff_RBX;
  byte bVar3;
  char *pcVar5;
  
  *in_RAX = *in_RAX + param_2;
  bVar3 = *param_1;
  *param_1 = *param_1 + (byte)in_RAX;
  iVar4 = (int)in_RAX + 0x4300500 + (uint)CARRY1(bVar3,(byte)in_RAX);
  *unaff_RBX = *unaff_RBX & (uint)param_1;
  bVar3 = (byte)iVar4;
  cVar2 = bVar3 + 100;
  pcVar5 = (char *)(ulonglong)CONCAT31((int3)((uint)iVar4 >> 8),cVar2);
  *pcVar5 = (*pcVar5 - cVar2) - (0x9b < bVar3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

