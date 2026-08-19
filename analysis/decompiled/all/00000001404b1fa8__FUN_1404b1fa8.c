// Function: FUN_1404b1fa8
// Addr: 1404b1fa8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1fa8(int *param_1,longlong param_2)

{
  int unaff_ESI;
  uint *unaff_RDI;
  
  *param_1 = *param_1 + (uint)param_2;
  *(int *)(param_2 + -0x1ff40ff3) = *(int *)(param_2 + -0x1ff40ff3) + unaff_ESI;
  *unaff_RDI = *unaff_RDI & (uint)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

