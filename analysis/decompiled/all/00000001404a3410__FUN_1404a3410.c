// Function: FUN_1404a3410
// Addr: 1404a3410
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3410(undefined8 param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined8 in_RAX;
  byte *pbVar4;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  bVar3 = bRamec0005ffd60005ff;
  pbVar4 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bRamec0005ffd60005ff);
  bVar2 = *param_2;
  *(uint *)(pbVar4 + unaff_RSI) = *(uint *)(pbVar4 + unaff_RSI) & (uint)param_2;
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)param_2;
  *pbVar4 = *pbVar4 | bVar3;
  pcVar1 = (char *)(unaff_RDI + CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 ^ bVar2));
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RBP + 2) = *(char *)(unaff_RBP + 2) + (char)((uint)((int)pbVar4 + 0x6024000) >> 8)
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

