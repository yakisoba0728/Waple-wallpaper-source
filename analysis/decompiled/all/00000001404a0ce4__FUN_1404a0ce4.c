// Function: FUN_1404a0ce4
// Addr: 1404a0ce4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0ce4(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  char cVar5;
  undefined8 in_RAX;
  uint *puVar4;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  bVar2 = *param_1;
  *param_1 = *param_1 + unaff_SPL;
  puVar4 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                            (char)in_RAX + '\x06' + CARRY1(bVar2,unaff_SPL));
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 2);
  *pcVar1 = *pcVar1 + (char)param_2;
  uVar3 = (uint)puVar4 | *puVar4;
  param_1[0x8e40400] = param_1[0x8e40400] + (char)((ulonglong)param_2 >> 8);
  cVar5 = (char)(uVar3 >> 8);
  *(char *)((ulonglong)uVar3 - 0x3afffc72) = *(char *)((ulonglong)uVar3 - 0x3afffc72) + cVar5;
  *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar5;
  *param_1 = *param_1 + cVar5;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)uVar3 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

