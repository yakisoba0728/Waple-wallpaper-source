// Function: FUN_1404b4738
// Addr: 1404b4738
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4738(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  longlong unaff_RDI;
  
  pcVar1 = (char *)(unaff_RDI * 2 + 0xaecb3903);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

