// Function: FUN_1404b0644
// Addr: 1404b0644
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0644(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x15);
  *pbVar1 = *pbVar1 ^ bVar3;
  *(char *)(unaff_RSI + -0x6bffea8d) = *(char *)(unaff_RSI + -0x6bffea8d) + unaff_BH;
  uVar2 = (int)&stack0x00000000 + 0x21004b;
  uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                   CONCAT11((char)(uVar2 >> 8) * '\x02' + (char)param_2,
                            (byte)uVar2 | *(byte *)(ulonglong)uVar2));
  uVar2 = uVar2 | *(uint *)(ulonglong)uVar2;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + bVar3;
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)(uVar2 >> 8);
  *(char *)((ulonglong)uVar2 + param_1) = *(char *)((ulonglong)uVar2 + param_1) + bVar3;
  cRam0000000155cbfee4 = cRam0000000155cbfee4 + CARRY1((byte)uVar2,bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

