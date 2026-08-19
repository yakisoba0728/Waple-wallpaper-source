// Function: FUN_1404c61f0
// Addr: 1404c61f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c61f0(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + 0x4002ef8) =
       *(char *)(unaff_RDI + 0x4002ef8) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

