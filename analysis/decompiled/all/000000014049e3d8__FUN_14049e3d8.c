// Function: FUN_14049e3d8
// Addr: 14049e3d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e3d8(char *param_1,longlong param_2)

{
  byte *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI ^ (byte)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + (char)param_2;
  *(char *)(param_2 + 0x7010049) = *(char *)(param_2 + 0x7010049) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

