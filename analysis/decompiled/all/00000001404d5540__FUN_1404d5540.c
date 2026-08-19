// Function: FUN_1404d5540
// Addr: 1404d5540
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5540(undefined8 param_1,undefined8 param_2)

{
  longlong in_RAX;
  char cVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar1 = (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RDI + in_RAX) = *(char *)(unaff_RDI + in_RAX) + cVar1;
  *(char *)(unaff_RSI + in_RAX) = *(char *)(unaff_RSI + in_RAX) + cVar1;
  *(char *)(in_RAX + -0x40ffca17) = *(char *)(in_RAX + -0x40ffca17) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

