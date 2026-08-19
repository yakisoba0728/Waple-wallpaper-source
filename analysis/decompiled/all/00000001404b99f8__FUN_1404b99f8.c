// Function: FUN_1404b99f8
// Addr: 1404b99f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b99f8(undefined8 param_1)

{
  char *pcVar1;
  int in_EAX;
  uint uVar2;
  
  if ((POPCOUNT(in_EAX + 0xa0000a74U & 0xff) & 1U) == 0) {
    pcVar1 = (char *)((ulonglong)(in_EAX + 0xa0000a74U) - 0x6bffe085);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
    uVar2 = in_EAX + 0xc2210abf;
    *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | (byte)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

