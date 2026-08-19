// Function: FUN_1404b3a3c
// Addr: 1404b3a3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b3a7b) overlaps instruction at (ram,0x0001404b3a79)
    */

void FUN_1404b3a3c(longlong param_1,longlong param_2,byte param_3,char *param_4)

{
  undefined2 uVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int *in_RAX;
  byte *pbVar7;
  char cVar9;
  byte *pbVar8;
  byte bVar11;
  undefined2 uVar12;
  uint uVar13;
  int *piVar14;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EBP;
  longlong in_FS_OFFSET;
  bool bVar18;
  char *pcVar6;
  byte bVar10;
  uint *puVar15;
  char *pcVar16;
  char cVar17;
  
  uVar13 = (uint)param_2 | *(uint *)(param_2 + 7);
  param_1 = param_1 + -1;
  if (param_1 == 0 || uVar13 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = (undefined2)(uVar13 >> 0x10);
  cVar17 = (char)(uVar13 >> 8) + (char)*in_RAX;
  uVar5 = CONCAT22(uVar1,CONCAT11(cVar17,(byte)uVar13));
  piVar14 = (int *)(ulonglong)uVar5;
  *piVar14 = *piVar14 + unaff_EBP;
  uVar4 = (int)in_RAX + *in_RAX;
  cVar9 = (char)((ulonglong)param_1 >> 8) - *(char *)(ulonglong)uVar4;
  pbVar8 = (byte *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(cVar9,(char)param_1));
  bVar3 = (byte)uVar4;
  *(byte *)piVar14 = (char)*piVar14 + bVar3;
  *pbVar8 = *pbVar8 ^ bVar3;
  uVar2 = (undefined3)(uVar4 >> 8);
  bVar3 = bVar3 - *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(char *)piVar14 = (char)*piVar14 + cVar9;
  *(char *)(ulonglong)CONCAT31(uVar2,bVar3) = *(char *)(ulonglong)CONCAT31(uVar2,bVar3) + bVar3;
  *piVar14 = *piVar14 + (int)pbVar8;
  bVar11 = (byte)uVar13 | *(byte *)((longlong)piVar14 + 6);
  puVar15 = (uint *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),bVar11);
  pbVar8 = pbVar8 + -1;
  bVar10 = (byte)((ulonglong)pbVar8 >> 8);
  if (pbVar8 != (byte *)0x0 && bVar11 != 0) {
    *(byte *)puVar15 = (char)*puVar15 + bVar10;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(char *)puVar15 = (char)*puVar15;
  *puVar15 = *puVar15 & unaff_EBP;
  uVar12 = CONCAT11(cVar17 - (char)(uVar4 >> 8),bVar11);
  pcVar16 = (char *)(ulonglong)CONCAT22(uVar1,uVar12);
  uVar13 = CONCAT31(uVar2,bVar3 | *(byte *)(ulonglong)CONCAT31(uVar2,bVar3));
  uVar5 = uVar13 & 0xf0005d4;
  pcVar6 = (char *)(ulonglong)uVar5;
  if ((uVar13 & 0xf0005d4) == 0) {
    bVar18 = CARRY1(bVar10,bVar10);
    pbVar8 = (byte *)((ulonglong)pbVar8 & 0xff);
  }
  else {
    *pcVar16 = *pcVar16 + (char)pbVar8;
    uVar5 = uVar5 | *(uint *)(pcVar6 + in_FS_OFFSET);
    pbVar7 = (byte *)(ulonglong)(uVar5 + 0xb0000a54);
    bVar18 = *pbVar7 < param_3 || (byte)(*pbVar7 - param_3) < (0x4ffff5ab < uVar5);
    *pbVar7 = (*pbVar7 - param_3) - (0x4ffff5ab < uVar5);
    uVar13 = in(uVar12);
    pcVar6 = (char *)(ulonglong)uVar13;
  }
  *pcVar6 = (*pcVar6 - param_3) - bVar18;
  *param_4 = *param_4 + -8;
  *pcVar16 = *pcVar16 + (char)pbVar8;
  *pcVar6 = *pcVar6 + (char)pcVar6;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

