// Function: FUN_1404a3420
// Addr: 1404a3420
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3420(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char in_CF;
  byte *pbVar2;
  
  bVar1 = (char)in_RAX + 't' + in_CF;
  pbVar2 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  *pbVar2 = *pbVar2 | bVar1;
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RBP + 2) = *(char *)(unaff_RBP + 2) + (char)((uint)((int)pbVar2 + 0x6024000) >> 8)
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

