// Function: FUN_1404a30cc
// Addr: 1404a30cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a30cc(longlong param_1,undefined8 param_2)

{
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)((ulonglong)param_2 >> 8);
  cRam000000010c4a368a = cRam000000010c4a368a + '\x05';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

