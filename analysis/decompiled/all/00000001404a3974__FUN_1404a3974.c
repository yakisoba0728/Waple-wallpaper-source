// Function: FUN_1404a3974
// Addr: 1404a3974
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3974(longlong param_1,undefined8 param_2)

{
  uint in_EAX;
  char unaff_BH;
  longlong unaff_RDI;
  
  *(byte *)(unaff_RDI + 6) = *(byte *)(unaff_RDI + 6) & (byte)((ulonglong)param_2 >> 8);
  *(char *)(param_1 + -0x6ffff989) = *(char *)(param_1 + -0x6ffff989) + unaff_BH;
  uRam00000001a44f3988 = uRam00000001a44f3988 & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

