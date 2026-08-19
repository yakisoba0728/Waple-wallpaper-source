// Function: FUN_1404d5698
// Addr: 1404d5698
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5698(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  char unaff_BH;
  longlong unaff_RBP;
  byte *pbVar5;
  
  bVar3 = (char)in_RAX + 0x60;
  pbVar5 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  iVar2 = *(int *)(pbVar5 + 2);
  *pbVar5 = *pbVar5 ^ bVar3;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  uVar4 = (int)pbVar5 + 0xf4050002;
  pcVar1 = (char *)(unaff_RBP + 0x21004d + (ulonglong)(uint)(param_2 + iVar2) * 2);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  pcVar1 = (char *)(unaff_RBP + 0x1601004d + (ulonglong)(uint)(param_2 + iVar2) * 2);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

