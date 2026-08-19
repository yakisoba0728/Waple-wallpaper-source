// Function: FUN_1404c6900
// Addr: 1404c6900
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6900(undefined8 param_1,longlong param_2)

{
  longlong in_RAX;
  char unaff_BH;
  longlong unaff_RDI;
  
  *(byte *)(unaff_RDI + param_2) = *(byte *)(unaff_RDI + param_2) | (byte)((ulonglong)param_2 >> 8);
  *(char *)(in_RAX + 0x2c) = *(char *)(in_RAX + 0x2c) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

