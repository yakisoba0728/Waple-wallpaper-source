// Function: FUN_1404c2ae8
// Addr: 1404c2ae8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2ae8(undefined8 param_1,undefined1 *param_2,longlong *param_3)

{
  *param_3 = *param_3 + (longlong)param_3;
  *param_2 = *param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

