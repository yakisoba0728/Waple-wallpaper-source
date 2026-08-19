// Function: FUN_1404ae1c0
// Addr: 1404ae1c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae1c0(undefined8 param_1,longlong param_2)

{
  char unaff_BH;
  
  in(0x12);
  *(char *)(param_2 + -0x1b) = *(char *)(param_2 + -0x1b) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

