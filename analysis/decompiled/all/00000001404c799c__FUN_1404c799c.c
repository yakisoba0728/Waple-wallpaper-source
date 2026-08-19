// Function: FUN_1404c799c
// Addr: 1404c799c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c799c(undefined8 param_1,undefined8 param_2)

{
  longlong in_RAX;
  longlong unaff_RDI;
  
  *(int *)(unaff_RDI + -0x47fcffd1) = *(int *)(unaff_RDI + -0x47fcffd1) << 0xf;
  *(char *)(in_RAX + 0x21004c78) = *(char *)(in_RAX + 0x21004c78) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

