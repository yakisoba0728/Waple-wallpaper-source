// Function: FUN_1404b9c20
// Addr: 1404b9c20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9c20(undefined8 param_1,longlong param_2)

{
  char unaff_BL;
  
  *(char *)(param_2 + -0x58) = *(char *)(param_2 + -0x58) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

