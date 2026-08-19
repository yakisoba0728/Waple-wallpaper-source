// Function: FUN_1404c1b0c
// Addr: 1404c1b0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1b0c(longlong param_1,undefined8 param_2)

{
  byte *in_RAX;
  byte *pbVar1;
  byte bVar2;
  uint unaff_EBP;
  
  bVar2 = (byte)param_1;
  *in_RAX = *in_RAX | bVar2;
  in_RAX[0x2915509a] = in_RAX[0x2915509a] | (byte)param_2;
  in_RAX[0x32] = in_RAX[0x32] + bVar2;
  pbVar1 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x3f);
  *(int *)pbVar1 = *(int *)pbVar1 + (int)pbVar1;
  *pbVar1 = *pbVar1 | bVar2;
  *pbVar1 = *pbVar1 | bVar2;
  *pbVar1 = *pbVar1 | bVar2;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | (byte)((ulonglong)param_2 >> 8);
  *(int *)(ulonglong)unaff_EBP = *(int *)(ulonglong)unaff_EBP - unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

