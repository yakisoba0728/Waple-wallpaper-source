// Function: FUN_1404c6698
// Addr: 1404c6698
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6698(longlong param_1)

{
  byte bVar1;
  ulonglong in_RAX;
  byte *pbVar2;
  char unaff_BH;
  
  pbVar2 = (byte *)(in_RAX | 0x30);
  *pbVar2 = *pbVar2 + (byte)pbVar2;
  uRam00000001a45166a4 = uRam00000001a45166a4 & (uint)pbVar2;
  *pbVar2 = *pbVar2 | (byte)pbVar2;
  bVar1 = *(byte *)(param_1 + -0x65b7ffd1);
  *(byte *)(param_1 + -0x65b7ffd1) = bVar1 >> 6 | bVar1 << 3;
  pbVar2[0x21004c65] = pbVar2[0x21004c65] + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

