// Function: FUN_1404bf204
// Addr: 1404bf204
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf204(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  char cVar6;
  undefined8 in_RAX;
  uint *puVar4;
  ulonglong uVar5;
  char cVar7;
  uint unaff_EBX;
  longlong unaff_RSI;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  puVar4 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11(((char)((ulonglong)in_RAX >> 8) + cVar7) * '\x02',(char)in_RAX)
                           );
  uVar3 = (uint)puVar4 | *puVar4;
  bVar2 = (byte)uVar3;
  cVar6 = (char)(uVar3 >> 8) + bVar2;
  uVar3 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11(cVar6,bVar2));
  uVar5 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar2 | *(byte *)(ulonglong)uVar3);
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + cVar6;
  pcVar1 = (char *)(uVar5 + param_1);
  *pcVar1 = *pcVar1 + cVar7;
  pcVar1 = (char *)(uVar5 - 0x2fffd952);
  *pcVar1 = *pcVar1 + cVar7;
  *(uint *)(param_2 + param_1) = *(uint *)(param_2 + param_1) & unaff_EBX;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

