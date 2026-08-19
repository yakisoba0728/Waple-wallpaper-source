// Function: FUN_1404c87a8
// Addr: 1404c87a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c87a8(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  uint *puVar2;
  byte *pbVar3;
  byte bVar4;
  longlong unaff_RSI;
  char in_CF;
  
  puVar2 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),((char)in_RAX + ',') - in_CF);
  uVar1 = (uint)puVar2 | *puVar2;
  pbVar3 = (byte *)(ulonglong)uVar1;
  if (uVar1 != 0) {
    cRam00000000f04c95ed = cRam00000000f04c95ed + (byte)uVar1;
    *pbVar3 = *pbVar3 ^ (byte)uVar1;
    pbVar3 = (byte *)((ulonglong)uVar1 | 0x9d);
    *pbVar3 = *pbVar3 ^ (byte)pbVar3;
  }
  *(undefined1 *)(unaff_RSI + 0x21004c) = *(undefined1 *)(unaff_RSI + 0x21004c);
  bVar4 = (byte)((uint)param_2 >> 8);
  pbVar3[0xc00309c] = pbVar3[0xc00309c] + bVar4;
  *pbVar3 = *pbVar3 ^ (byte)pbVar3;
  pbVar3 = (byte *)(unaff_RSI + 0x1101004c);
  *pbVar3 = *pbVar3 << 4 | *pbVar3 >> 4;
  *param_1 = *param_1 + (char)param_2;
  *param_1 = *param_1 ^ (bVar4 | 0xb);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

