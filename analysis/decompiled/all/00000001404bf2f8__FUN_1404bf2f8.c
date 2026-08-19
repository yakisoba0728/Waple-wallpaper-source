// Function: FUN_1404bf2f8
// Addr: 1404bf2f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf2f8(undefined8 param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  int in_EAX;
  uint uVar4;
  longlong lVar6;
  char cVar7;
  char cVar8;
  longlong unaff_RBX;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  char *pcVar5;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  cVar7 = (char)param_2;
  uVar4 = in_EAX + 0x50000a34;
  pcVar5 = (char *)(ulonglong)uVar4;
  lVar6 = CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x26,(char)param_1));
  *(char *)(lVar6 + -0x4b) = *(char *)(lVar6 + -0x4b) + cVar8;
  pcVar1 = (char *)(param_2 + unaff_RSI * 8);
  cVar3 = (char)uVar4;
  *pcVar1 = *pcVar1 + cVar3;
  *param_4 = *param_4 + unaff_SPL;
  *pcVar5 = *pcVar5 + cVar3;
  pcVar5[-0x4b] = pcVar5[-0x4b] + cVar7;
  *(char *)(lVar6 + -0x4b) = *(char *)(lVar6 + -0x4b) + cVar8;
  pcVar1 = (char *)(param_2 + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + cVar3;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)((longlong)pcVar5 * 2) = *(char *)((longlong)pcVar5 * 2) + (char)param_1;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11((char)(uVar4 >> 8) * '\x02' + cVar7,cVar3)) +
          0x6c40000;
  cVar3 = (char)uVar4;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + cVar3;
  *(char *)(unaff_RBX + lVar6) = *(char *)(unaff_RBX + lVar6) + cVar7;
  *(char *)(param_2 + lVar6) = *(char *)(param_2 + lVar6) + cVar8;
  *(char *)((ulonglong)uVar4 - 0x4b) = *(char *)((ulonglong)uVar4 - 0x4b) + cVar7;
  *(char *)(lVar6 + -0x4b) = *(char *)(lVar6 + -0x4b) + cVar8;
  pcVar1 = (char *)(param_2 + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + cVar3;
  bVar2 = *param_4;
  *param_4 = *param_4 + unaff_SPL;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar3 + '\x06' + CARRY1(bVar2,unaff_SPL));
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + cVar7;
  uVar4 = uVar4 | *(uint *)(ulonglong)uVar4;
  cRam00000000c04bfcb5 = cRam00000000c04bfcb5 + (char)uVar4;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

