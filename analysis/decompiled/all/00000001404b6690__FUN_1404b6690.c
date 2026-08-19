// Function: FUN_1404b6690
// Addr: 1404b6690
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6690(void)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  byte in_CF;
  byte *pbVar3;
  
  uVar2 = in_EAX + 0x21004a + (uint)in_CF;
  pbVar3 = (byte *)(ulonglong)uVar2;
  bVar1 = *pbVar3;
  *pbVar3 = *pbVar3 + (byte)uVar2;
  uVar2 = CONCAT31((int3)(uVar2 >> 8),uRam50001b76cf001b76) + 0x1821004a +
          (uint)CARRY1(bVar1,(byte)uVar2);
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | (byte)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

