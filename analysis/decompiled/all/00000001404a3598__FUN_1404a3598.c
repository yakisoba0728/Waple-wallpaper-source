// Function: FUN_1404a3598
// Addr: 1404a3598
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3598(char param_1,char param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  longlong lVar5;
  byte *unaff_RBX;
  int *unaff_RSI;
  char *pcVar6;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar3 = (char)in_RAX + (char)*in_RAX;
  lVar5 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                   CONCAT11((char)((ulonglong)in_RAX >> 8) + param_2,bVar3));
  pbVar1 = (byte *)(lVar5 + 0x28000612);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  uVar4 = (int)lVar5 + *unaff_RSI + (uint)CARRY1(bVar2,bVar3);
  pcVar6 = (char *)(ulonglong)uVar4;
  pcVar6[0x1004a34] = pcVar6[0x1004a34] + param_1;
  *unaff_RBX = *unaff_RBX | (byte)uVar4;
  *pcVar6 = *pcVar6 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

