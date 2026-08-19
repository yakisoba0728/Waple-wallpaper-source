// Function: FUN_1404ac098
// Addr: 1404ac098
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac098(undefined8 param_1,longlong param_2)

{
  uint in_EAX;
  
  uRam00000001a44fc0a0 = uRam00000001a44fc0a0 & in_EAX;
  *(byte *)(param_2 + -0x55acfff1) =
       *(byte *)(param_2 + -0x55acfff1) & (byte)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

