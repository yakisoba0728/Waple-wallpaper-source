// Function: FUN_1404b6d60
// Addr: 1404b6d60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6d60(undefined8 param_1,longlong param_2)

{
  uint *unaff_RBX;
  int unaff_ESI;
  byte in_CF;
  
  *unaff_RBX = *unaff_RBX & unaff_ESI + *(int *)(param_2 * 2) + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

