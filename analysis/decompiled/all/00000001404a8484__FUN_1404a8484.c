// Function: FUN_1404a8484
// Addr: 1404a8484
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8484(char *param_1,longlong param_2)

{
  uint uVar1;
  uint *in_RAX;
  char cVar2;
  byte bVar3;
  undefined6 uVar4;
  longlong unaff_RSI;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  cVar2 = (char)param_2;
  *(char *)(param_2 + 0xb50c000) = *(char *)(param_2 + 0xb50c000) + bVar3;
  *(char *)(unaff_RSI + 0x51) = *(char *)(unaff_RSI + 0x51) + cVar2;
  uVar1 = (uint)in_RAX | *in_RAX;
  if (uVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  uVar1 = CONCAT31((int3)(uVar1 >> 8),(char)uVar1 * '\x02');
  uVar1 = uVar1 | *(uint *)(ulonglong)uVar1;
  uVar1 = uVar1 | *(uint *)(ulonglong)uVar1;
  if (uVar1 != 0) {
    *param_1 = *param_1 + (byte)uVar1;
    bVar3 = bVar3 | param_1[CONCAT31((int3)(uVar1 >> 8),
                                     (byte)uVar1 | *(byte *)((ulonglong)uVar1 * 2))];
    *(char *)CONCAT62(uVar4,CONCAT11(bVar3,cVar2)) =
         *(char *)CONCAT62(uVar4,CONCAT11(bVar3,cVar2)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

