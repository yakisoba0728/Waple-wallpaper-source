// Function: FUN_1404a6314
// Addr: 1404a6314
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6314(uint *param_1,ulonglong param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  undefined7 uVar7;
  char *pcVar5;
  longlong lVar6;
  char cVar8;
  char cVar9;
  char unaff_BH;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  char in_CF;
  uint *puVar4;
  
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar1 = (char)in_RAX + '0' + in_CF;
  puVar4 = (uint *)CONCAT71(uVar7,cVar1);
  uVar3 = (uint)puVar4;
  *puVar4 = *puVar4 | uVar3;
  bVar2 = (byte)((ulonglong)in_RAX >> 8);
  cVar8 = (char)param_2;
  if ((POPCOUNT(*puVar4 & 0xff) & 1U) == 0) {
    *puVar4 = *puVar4 | uVar3;
    cVar9 = (char)(param_2 >> 8);
    if ((POPCOUNT(*puVar4 & 0xff) & 1U) == 0) {
      lVar6 = CONCAT71(uVar7,cVar1 + '0');
      puVar4 = (uint *)(param_2 + lVar6);
      *puVar4 = *puVar4 & (uint)lVar6;
      *(char *)CONCAT71(unaff_00000021,unaff_SPL) =
           *(char *)CONCAT71(unaff_00000021,unaff_SPL) + cVar1 + '0';
      *(byte *)param_1 = 0;
      *param_1 = *param_1 ^ (uint)param_1;
      pcVar5 = (char *)(CONCAT62((int6)(param_2 >> 0x10),CONCAT11(cVar9 + cVar8,cVar8)) + 0x421004a)
      ;
      *pcVar5 = *pcVar5 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *puVar4 = *puVar4 | uVar3;
    *(byte *)(param_2 + 0x4a) = *(byte *)(param_2 + 0x4a) & bVar2;
    *(byte *)param_1 = (byte)*param_1 + bVar2;
    *(char *)((longlong)puVar4 * 2) = *(char *)((longlong)puVar4 * 2) + cVar1;
    puVar4 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar2 + cVar9,cVar1));
  }
  else {
    *puVar4 = *puVar4 | uVar3;
    *(byte *)(param_2 + 0x4a) = *(byte *)(param_2 + 0x4a) & bVar2;
    *(byte *)param_1 = (byte)*param_1 + bVar2;
    uVar3 = uVar3 + 0xc4050002;
    bVar2 = (byte)uVar3 | *(byte *)(ulonglong)uVar3;
    uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar2);
    puVar4 = (uint *)(ulonglong)uVar3;
    if ((POPCOUNT(bVar2) & 1U) != 0) {
      *puVar4 = *puVar4 | uVar3;
      *(byte *)param_1 = (byte)*param_1 ^ (byte)param_1;
      *(char *)(param_2 & 0xffffffff) = *(char *)(param_2 & 0xffffffff) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  puVar4 = (uint *)CONCAT62((int6)((ulonglong)puVar4 >> 0x10),
                            CONCAT11((char)((ulonglong)puVar4 >> 8) * '\x02',(char)puVar4));
  uVar3 = (uint)puVar4 | *puVar4;
  puVar4 = (uint *)(ulonglong)uVar3;
  *unaff_RDI = 0;
  *(char *)((longlong)puVar4 + unaff_RSI) = *(char *)((longlong)puVar4 + unaff_RSI) + cVar8;
  *puVar4 = *puVar4 | uVar3;
  cVar1 = (char)uVar3 + 'b';
  pcVar5 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),cVar1);
  *(byte *)param_1 = (byte)*param_1 + unaff_SPL;
  *pcVar5 = *pcVar5 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

