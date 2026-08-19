// Function: FUN_1404d4880
// Addr: 1404d4880
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4880(int *param_1,int *param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar10;
  undefined8 in_RAX;
  undefined6 uVar12;
  byte bVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  uint unaff_EBX;
  longlong unaff_RSI;
  uint *unaff_RDI;
  bool in_CF;
  char *pcVar8;
  uint *puVar9;
  undefined7 uVar11;
  
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar14 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar13 = (byte)param_2;
  bVar7 = (byte)in_RAX;
  uVar11 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar10 = (byte)((ulonglong)in_RAX >> 8);
  uVar12 = (undefined6)((ulonglong)in_RAX >> 0x10);
  if (!in_CF) {
    cVar5 = bVar7 + bVar10;
    puVar2 = (undefined1 *)(CONCAT71(uVar11,cVar5) + -0x5df5ffd5);
    *puVar2 = *puVar2;
    *param_1 = *param_1 - (int)param_2;
    cVar6 = cVar5 + ' ';
    pcVar8 = (char *)CONCAT71((int7)(CONCAT62(uVar12,CONCAT11(bVar10 * '\x02',cVar5)) >> 8),cVar6);
    *pcVar8 = *pcVar8 + cVar6;
    *pcVar8 = *pcVar8 + cVar6;
    *param_2 = *param_2 + unaff_EBX;
    *(char *)unaff_RDI = (char)*unaff_RDI + (char)param_1;
    *unaff_RDI = *unaff_RDI & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar1 = &stack0x00000000 + unaff_RSI * 2;
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  bVar7 = bVar7 + CARRY1(bVar3,bVar7);
  puVar9 = (uint *)CONCAT71(uVar11,bVar7);
  *puVar9 = *puVar9 & (uint)puVar9;
  *(byte *)puVar9 = (byte)*puVar9 + bVar7;
  *param_2 = *param_2 + (int)param_2;
  *(byte *)puVar9 = (byte)*puVar9 | bVar7;
  bVar4 = (char)((ulonglong)param_2 >> 8) + *(char *)((longlong)unaff_RDI + (longlong)param_1);
  bVar3 = *(byte *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(bVar4,bVar13)));
  *(byte *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(bVar4,bVar13))) =
       *(char *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(bVar4,bVar13))) + bVar13;
  if (!CARRY1(bVar3,bVar13)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar8 = (char *)(CONCAT71(uVar11,bVar7) ^ 0xe);
  *pcVar8 = *pcVar8 + bVar13;
  pbVar1 = (byte *)((CONCAT62(uVar12,CONCAT11(bVar10 | (byte)pcVar8 | 0xf0,(byte)pcVar8)) | 0xf0) +
                   7);
  *pbVar1 = *pbVar1 | bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

