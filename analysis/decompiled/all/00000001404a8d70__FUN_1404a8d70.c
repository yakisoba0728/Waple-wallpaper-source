// Function: FUN_1404a8d70
// Addr: 1404a8d70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8d70(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  ulonglong unaff_RBP;
  
  puVar2 = (uint *)((unaff_RBP & 0xffffffff) * 2);
  *puVar2 = *puVar2 | (uint)param_1;
  puVar1 = (undefined1 *)(param_2 + 0x2100 + param_1 * 2);
  *puVar1 = *puVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

