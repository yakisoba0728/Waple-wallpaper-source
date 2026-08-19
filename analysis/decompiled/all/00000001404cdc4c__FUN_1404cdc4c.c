// Function: FUN_1404cdc4c
// Addr: 1404cdc4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdc4c(undefined8 param_1,char param_2)

{
  byte bVar1;
  undefined8 in_RAX;
  char *pcVar3;
  ulonglong unaff_RBP;
  char unaff_R13B;
  float10 in_ST0;
  float10 in_ST1;
  byte *pbVar2;
  
  bVar1 = (char)in_RAX + 0x60;
  pbVar2 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  *pbVar2 = *pbVar2 ^ bVar1;
  pbVar2[-0x4a] = pbVar2[-0x4a] + param_2 + (char)*(undefined4 *)(pbVar2 + 2);
  pcVar3 = (char *)(ulonglong)(uint)((int)pbVar2 - *(int *)pbVar2);
  *pcVar3 = *pcVar3 + unaff_R13B;
  *(int *)((unaff_RBP & 0xffffffff) * 2 + -100) = (int)in_ST0;
  *(int *)((unaff_RBP & 0xffffffff) * 2 + 2) = (int)in_ST1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

