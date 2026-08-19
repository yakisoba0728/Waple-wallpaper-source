// Function: FUN_1404a6304
// Addr: 1404a6304
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6304(byte *param_1,ulonglong param_2)

{
  byte bVar1;
  char cVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar9;
  undefined8 in_RAX;
  uint *puVar11;
  char *pcVar12;
  char unaff_BH;
  byte unaff_SPL;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  char in_CF;
  byte bVar2;
  int iVar8;
  longlong lVar10;
  
  bVar5 = (char)in_RAX + 'b' + in_CF;
  lVar10 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5);
  bVar6 = *param_1;
  *param_1 = *param_1 + unaff_SPL;
  pbVar4 = (byte *)(lVar10 * 2);
  bVar1 = *pbVar4;
  bVar2 = *pbVar4;
  *pbVar4 = (bVar2 - bVar5) - CARRY1(bVar6,unaff_SPL);
  *(char *)((longlong)param_1 * 2) =
       (*(char *)((longlong)param_1 * 2) - (char)(param_2 >> 8)) -
       (bVar1 < bVar5 || (byte)(bVar2 - bVar5) < CARRY1(bVar6,unaff_SPL));
  iVar8 = (int)lVar10;
  uVar7 = iVar8 + 0x14000864;
  *param_1 = *param_1 ^ (byte)param_1;
  *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + unaff_BH;
  *(uint *)(ulonglong)uVar7 = *(uint *)(ulonglong)uVar7 | uVar7;
  bVar6 = (byte)(uVar7 >> 8);
  *(byte *)(param_2 + 0x4a) = *(byte *)(param_2 + 0x4a) & bVar6;
  *param_1 = *param_1 + bVar6;
  uVar9 = iVar8 + 0xd8050866;
  bVar6 = (byte)uVar9 | *(byte *)(ulonglong)uVar9;
  uVar7 = CONCAT31((int3)(uVar9 >> 8),bVar6);
  if ((POPCOUNT(bVar6) & 1U) != 0) {
    *(uint *)(ulonglong)uVar7 = *(uint *)(ulonglong)uVar7 | uVar7;
    *param_1 = *param_1 ^ (byte)param_1;
    *(char *)(param_2 & 0xffffffff) = *(char *)(param_2 & 0xffffffff) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar7 = CONCAT22((short)(uVar9 >> 0x10),CONCAT11((char)(uVar9 >> 8) * '\x02',bVar6));
  uVar7 = uVar7 | *(uint *)(ulonglong)uVar7;
  puVar11 = (uint *)(ulonglong)uVar7;
  *unaff_RDI = 0;
  *(char *)((longlong)puVar11 + unaff_RSI) =
       *(char *)((longlong)puVar11 + unaff_RSI) + (char)param_2;
  *puVar11 = *puVar11 | uVar7;
  cVar3 = (char)uVar7 + 'b';
  pcVar12 = (char *)(ulonglong)CONCAT31((int3)(uVar7 >> 8),cVar3);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar12 = *pcVar12 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

