// Function: FUN_1404c8854
// Addr: 1404c8854
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8854(undefined8 param_1,undefined8 param_2)

{
  uint in_EAX;
  byte *pbVar1;
  
  pbVar1 = (byte *)((ulonglong)(in_EAX | 0x8000f54) ^ 0x14);
  pbVar1[-0x61] = pbVar1[-0x61] + (char)((ulonglong)param_2 >> 8);
  *pbVar1 = *pbVar1 ^ (byte)pbVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

