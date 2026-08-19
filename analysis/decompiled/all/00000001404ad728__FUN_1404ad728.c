// Function: FUN_1404ad728
// Addr: 1404ad728
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad728(undefined8 param_1,uint *param_2)

{
  int in_EAX;
  uint uVar1;
  uint unaff_ESI;
  
  *param_2 = *param_2 | unaff_ESI;
  uVar1 = in_EAX + 0x26003f0;
  uRam00000001744fd738 = uRam00000001744fd738 & uVar1;
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
  bRam000000014653d750 = bRam000000014653d750 << 1 | (char)bRam000000014653d750 < '\0';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

