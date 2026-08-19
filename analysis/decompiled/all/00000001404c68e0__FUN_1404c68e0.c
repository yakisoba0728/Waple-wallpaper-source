// Function: FUN_1404c68e0
// Addr: 1404c68e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c68e0(undefined8 param_1)

{
  longlong in_RAX;
  char unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + unaff_RBP) =
       *(char *)(unaff_RDI + unaff_RBP) + (char)((ulonglong)param_1 >> 8);
  *(char *)(in_RAX + 0x2c) = *(char *)(in_RAX + 0x2c) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

