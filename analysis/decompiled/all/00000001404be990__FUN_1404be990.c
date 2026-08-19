// Function: FUN_1404be990
// Addr: 1404be990
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be990(undefined1 *param_1)

{
  longlong unaff_retaddr;
  
  *param_1 = *param_1;
  *(char *)(unaff_retaddr * 2) = *(char *)(unaff_retaddr * 2) - (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

