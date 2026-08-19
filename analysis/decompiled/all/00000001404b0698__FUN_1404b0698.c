// Function: FUN_1404b0698
// Addr: 1404b0698
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0698(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = (byte)((ulonglong)param_2 >> 8);
  uVar1 = (int)&stack0x00000000 + 0x21004b;
  uVar1 = CONCAT22((short)(uVar1 >> 0x10),
                   CONCAT11((char)(uVar1 >> 8) * '\x02' + (char)param_2,
                            (byte)uVar1 | *(byte *)(ulonglong)uVar1));
  uVar1 = uVar1 | *(uint *)(ulonglong)uVar1;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + bVar2;
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)(uVar1 >> 8);
  *(char *)((ulonglong)uVar1 + param_1) = *(char *)((ulonglong)uVar1 + param_1) + bVar2;
  cRam0000000155cbfee4 = cRam0000000155cbfee4 + CARRY1((byte)uVar1,bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

