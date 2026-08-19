// Function: FUN_1404b99b8
// Addr: 1404b99b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b99b8(undefined8 param_1,undefined2 param_2)

{
  char *in_RAX;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + 0x1f) = *(char *)(unaff_RDI + 0x1f) + (char)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX + (char)((ushort)param_2 >> 8);
  out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

