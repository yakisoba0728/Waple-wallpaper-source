// Function: FUN_1404a0e70
// Addr: 1404a0e70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0e70(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar6;
  undefined8 in_RAX;
  uint *puVar5;
  char unaff_BL;
  longlong unaff_RSI;
  char in_CF;
  
  param_1[-0x6e59fffd] = param_1[-0x6e59fffd] + 3 + in_CF;
  bVar6 = (char)((ulonglong)in_RAX >> 8) + unaff_BL;
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar6;
  puVar5 = (uint *)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                            CONCAT11(bVar6,(byte)in_RAX)) >> 8),
                            ((byte)in_RAX | 0x4a) + 6 + CARRY1(bVar2,bVar6));
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)param_2;
  uVar3 = (uint)puVar5 | *puVar5;
  param_1[0x8e40400] = param_1[0x8e40400] + (char)((ulonglong)param_2 >> 8);
  in(0x94);
  uVar4 = in(0x49);
  *param_1 = *param_1 + (char)((uint)uVar4 >> 8);
  pcVar1 = (char *)((ulonglong)CONCAT31((int3)(uVar3 >> 8),(char)uVar3 * '\x02') + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)uVar4 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

