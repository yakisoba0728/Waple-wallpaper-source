// Function: FUN_1404c4324
// Addr: 1404c4324
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4324(undefined8 param_1,longlong param_2)

{
  InterruptDescriptorTableRegister(*(undefined8 *)(param_2 + 0x7700800));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

