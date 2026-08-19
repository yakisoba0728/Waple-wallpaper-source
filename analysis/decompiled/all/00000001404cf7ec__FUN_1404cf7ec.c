// Function: FUN_1404cf7ec
// Addr: 1404cf7ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf7ec(undefined8 param_1,char param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  undefined8 in_RAX;
  char unaff_R13B;
  byte *pbVar4;
  
  bVar2 = (char)in_RAX + 0x60;
  pbVar4 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  *pbVar4 = *pbVar4 ^ bVar2;
  pbVar4[-0x4a] = pbVar4[-0x4a] + param_2 + (char)*(undefined4 *)(pbVar4 + 2);
  iVar3 = (int)pbVar4 - *(int *)pbVar4;
  pcVar1 = (char *)((ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),(char)iVar3 + '\t') + 0x31);
  *pcVar1 = *pcVar1 + unaff_R13B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

