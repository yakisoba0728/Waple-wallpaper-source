// Function: FUN_1404c87bc
// Addr: 1404c87bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c87bc(byte *param_1,undefined4 param_2)

{
  ulonglong in_RAX;
  byte *pbVar1;
  byte bVar2;
  longlong unaff_RSI;
  
  pbVar1 = (byte *)(in_RAX | 0x9d);
  *pbVar1 = *pbVar1 ^ (byte)pbVar1;
  *(undefined1 *)(unaff_RSI + 0x21004c) = *(undefined1 *)(unaff_RSI + 0x21004c);
  bVar2 = (byte)((uint)param_2 >> 8);
  pbVar1[0xc00309c] = pbVar1[0xc00309c] + bVar2;
  *pbVar1 = *pbVar1 ^ (byte)pbVar1;
  pbVar1 = (byte *)(unaff_RSI + 0x1101004c);
  *pbVar1 = *pbVar1 << 4 | *pbVar1 >> 4;
  *param_1 = *param_1 + (char)param_2;
  *param_1 = *param_1 ^ (bVar2 | 0xb);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

