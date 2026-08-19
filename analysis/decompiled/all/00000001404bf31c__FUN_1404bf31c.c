// Function: FUN_1404bf31c
// Addr: 1404bf31c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf31c(longlong param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined8 in_RAX;
  char cVar5;
  char cVar6;
  longlong unaff_RBX;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  cVar5 = (char)param_2;
  uVar4 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02' + cVar5,(char)in_RAX)) +
          0x6c40000;
  cVar3 = (char)uVar4;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + cVar3;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + cVar5;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar6;
  *(char *)((ulonglong)uVar4 - 0x4b) = *(char *)((ulonglong)uVar4 - 0x4b) + cVar5;
  *(char *)(param_1 + -0x4b) = *(char *)(param_1 + -0x4b) + cVar6;
  pcVar1 = (char *)(param_2 + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + cVar3;
  bVar2 = *param_4;
  *param_4 = *param_4 + unaff_SPL;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar3 + '\x06' + CARRY1(bVar2,unaff_SPL));
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + cVar5;
  uVar4 = uVar4 | *(uint *)(ulonglong)uVar4;
  cRam00000000c04bfcb5 = cRam00000000c04bfcb5 + (char)uVar4;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

