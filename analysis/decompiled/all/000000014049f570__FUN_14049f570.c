// Function: FUN_14049f570
// Addr: 14049f570
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f570(uint *param_1)

{
  *param_1 = *param_1 & (uint)&stack0x00000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

