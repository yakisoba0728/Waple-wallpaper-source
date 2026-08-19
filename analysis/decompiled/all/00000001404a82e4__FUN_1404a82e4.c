// Function: FUN_1404a82e4
// Addr: 1404a82e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a82e4(longlong param_1,char *param_2)

{
  uint uVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  byte bVar10;
  uint *in_RAX;
  byte *pbVar8;
  char cVar11;
  char *pcVar12;
  char cVar14;
  byte bVar15;
  undefined6 uVar16;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  char *pcVar9;
  undefined1 *puVar13;
  
  uVar16 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar15 = (byte)((ulonglong)param_2 >> 8);
  cVar14 = (char)param_2;
  uVar7 = (uint)in_RAX;
  *(uint *)(param_2 + (longlong)in_RAX) = *(uint *)(param_2 + (longlong)in_RAX) & uVar7;
  pbVar8 = &stack0x00000000 + (longlong)param_2 * 2;
  bVar10 = *pbVar8;
  bVar5 = (byte)in_RAX;
  *pbVar8 = *pbVar8 + bVar5;
  *in_RAX = (*in_RAX - uVar7) - (uint)CARRY1(bVar10,bVar5);
  pcVar12 = (char *)(param_1 + -1);
  if (pcVar12 == (char *)0x0 || *in_RAX == 0) {
    *pcVar12 = -*pcVar12;
    *pcVar12 = *pcVar12;
    *(undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff) =
         *(undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar8 = &stack0x00000000 + unaff_RSI * 2;
  bVar10 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar5;
  *in_RAX = *in_RAX + uVar7 + (uint)CARRY1(bVar10,bVar5);
  *pcVar12 = -*pcVar12;
  uVar1 = *in_RAX;
  *param_2 = *param_2 + unaff_BL;
  uVar7 = uVar7 | uVar1 | *(uint *)(ulonglong)(uVar7 | uVar1);
  bVar5 = (char)uVar7 + 0x82;
  uVar2 = (undefined3)(uVar7 >> 8);
  pbVar8 = (byte *)(ulonglong)CONCAT31(uVar2,bVar5);
  *pcVar12 = *pcVar12;
  *pbVar8 = *pbVar8 + bVar5;
  bVar3 = bVar15 * '\x02';
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)pcVar12) - (uint)CARRY1(bVar15,bVar15);
  bVar10 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar5;
  cVar11 = ((char)pcVar12 - *(char *)CONCAT71(unaff_00000019,unaff_BL)) - CARRY1(bVar10,bVar5);
  puVar13 = (undefined1 *)CONCAT71((int7)((ulonglong)pcVar12 >> 8),cVar11);
  pcVar12 = (char *)(CONCAT62(uVar16,CONCAT11(bVar3,cVar14)) + (longlong)pbVar8 * 4);
  *pcVar12 = *pcVar12 + cVar14;
  *puVar13 = *puVar13;
  *pbVar8 = *pbVar8 + bVar5;
  bVar10 = (byte)(uVar7 >> 8);
  cVar6 = bVar5 + bVar10;
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar2,cVar6);
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)puVar13) - (uint)CARRY1(bVar5,bVar10);
  cVar4 = bVar15 * '\x04';
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)puVar13) - (uint)CARRY1(bVar3,bVar3);
  pcVar12 = (char *)(CONCAT62(uVar16,CONCAT11(cVar4,cVar14)) + (longlong)pcVar9 * 4);
  *pcVar12 = *pcVar12 + cVar6;
  *puVar13 = *puVar13;
  *(char *)CONCAT62(uVar16,CONCAT11(cVar4,cVar14)) =
       *(char *)CONCAT62(uVar16,CONCAT11(cVar4,cVar14)) + cVar11;
  *pcVar9 = *pcVar9 + cVar6;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

