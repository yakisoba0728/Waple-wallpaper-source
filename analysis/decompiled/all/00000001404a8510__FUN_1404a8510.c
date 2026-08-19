// Function: FUN_1404a8510
// Addr: 1404a8510
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8510(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int in_EAX;
  uint uVar2;
  
  uVar2 = in_EAX + 0x30000b54U | *(uint *)(ulonglong)(in_EAX + 0x30000b54U);
  pbVar1 = (byte *)(param_2 + 0x2002100 + param_1 * 2);
  *pbVar1 = *pbVar1 & (byte)uVar2;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (byte)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

