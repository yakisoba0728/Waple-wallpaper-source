// Function: FUN_1404ac020
// Addr: 1404ac020
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac020(longlong param_1,undefined8 param_2)

{
  undefined4 in_EAX;
  
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + (char)((uint)in_EAX >> 8);
  *(char *)(param_1 + 0xfa3a000) = *(char *)(param_1 + 0xfa3a000) + (char)((ulonglong)param_2 >> 8);
  uRam00210049e564000f = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

