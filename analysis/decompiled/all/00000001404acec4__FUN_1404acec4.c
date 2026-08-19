// Function: FUN_1404acec4
// Addr: 1404acec4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acec4(undefined8 param_1,undefined8 param_2)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  *(char *)(unaff_RBX + unaff_RDI) =
       *(char *)(unaff_RBX + unaff_RDI) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

