// Function: FUN_1404bf1e0
// Addr: 1404bf1e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf1e0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar4;
  int in_EAX;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  char cVar9;
  uint unaff_EBX;
  longlong unaff_RSI;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  iVar5 = in_EAX + -0x4ffff7cc;
  uVar2 = (undefined3)((uint)iVar5 >> 8);
  cVar3 = (char)iVar5 + (char)param_2 * '\x02';
  uVar6 = CONCAT31(uVar2,cVar3);
  puVar7 = (uint *)(ulonglong)uVar6;
  *puVar7 = *puVar7 & uVar6;
  *(char *)puVar7 = (char)*puVar7 + cVar3;
  bVar4 = (char)param_2 * '\x02' + 0xae;
  uVar6 = CONCAT31(uVar2,bVar4);
  puVar7 = (uint *)(ulonglong)uVar6;
  *puVar7 = *puVar7 & uVar6;
  uVar6 = CONCAT22((short)((uint)iVar5 >> 0x10),
                   CONCAT11(((char)((uint)iVar5 >> 8) + cVar9) * '\x02',bVar4 | (byte)*puVar7));
  uVar6 = uVar6 | *(uint *)(ulonglong)uVar6;
  bVar4 = (byte)uVar6;
  cVar3 = (char)(uVar6 >> 8) + bVar4;
  uVar6 = CONCAT22((short)(uVar6 >> 0x10),CONCAT11(cVar3,bVar4));
  uVar8 = (ulonglong)CONCAT31((int3)(uVar6 >> 8),bVar4 | *(byte *)(ulonglong)uVar6);
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + cVar3;
  pcVar1 = (char *)(uVar8 + param_1);
  *pcVar1 = *pcVar1 + cVar9;
  pcVar1 = (char *)(uVar8 - 0x2fffd952);
  *pcVar1 = *pcVar1 + cVar9;
  *(uint *)(param_2 + param_1) = *(uint *)(param_2 + param_1) & unaff_EBX;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

