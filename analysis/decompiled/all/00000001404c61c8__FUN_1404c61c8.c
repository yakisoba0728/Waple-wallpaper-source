// Function: FUN_1404c61c8
// Addr: 1404c61c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c61c8(undefined8 param_1,int *param_2)

{
  int unaff_ESI;
  undefined1 *unaff_RDI;
  byte in_CF;
  
  *param_2 = *param_2 + unaff_ESI + (uint)in_CF;
  *unaff_RDI = *unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

