// Function: FUN_1404a8308
// Addr: 1404a8308
// Size: 1 bytes


void FUN_1404a8308(char *param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined3 uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  byte bVar11;
  undefined8 in_RAX;
  uint *puVar8;
  byte *pbVar9;
  char cVar12;
  undefined4 uVar14;
  char cVar15;
  byte bVar16;
  undefined6 uVar17;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  char *pcVar10;
  int iVar13;
  
  uVar17 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar16 = (byte)((ulonglong)param_2 >> 8);
  cVar15 = (char)param_2;
  uVar14 = (undefined4)((ulonglong)param_1 >> 0x20);
  puVar8 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + 0x74);
  *puVar8 = *puVar8 + (uint)puVar8 + (uint)(0x8b < (byte)in_RAX);
  *param_1 = -*param_1;
  uVar7 = (uint)puVar8 | *puVar8;
  *param_2 = *param_2 + unaff_BL;
  uVar7 = uVar7 | *(uint *)(ulonglong)uVar7;
  bVar2 = (char)uVar7 + 0x82;
  uVar3 = (undefined3)(uVar7 >> 8);
  pbVar9 = (byte *)(ulonglong)CONCAT31(uVar3,bVar2);
  *param_1 = *param_1 + unaff_SPL;
  *pbVar9 = *pbVar9 + bVar2;
  bVar4 = bVar16 * '\x02';
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)param_1) - (uint)CARRY1(bVar16,bVar16);
  bVar11 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar2;
  cVar12 = ((char)param_1 - *(char *)CONCAT71(unaff_00000019,unaff_BL)) - CARRY1(bVar11,bVar2);
  iVar13 = CONCAT31((int3)((ulonglong)param_1 >> 8),cVar12);
  pcVar1 = (char *)(CONCAT62(uVar17,CONCAT11(bVar4,cVar15)) + (longlong)pbVar9 * 4);
  *pcVar1 = *pcVar1 + cVar15;
  *(char *)CONCAT44(uVar14,iVar13) = *(char *)CONCAT44(uVar14,iVar13) + unaff_SPL;
  *pbVar9 = *pbVar9 + bVar2;
  bVar11 = (byte)(uVar7 >> 8);
  cVar6 = bVar2 + bVar11;
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar3,cVar6);
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - iVar13) - (uint)CARRY1(bVar2,bVar11);
  cVar5 = bVar16 * '\x04';
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - iVar13) - (uint)CARRY1(bVar4,bVar4);
  pcVar1 = (char *)(CONCAT62(uVar17,CONCAT11(cVar5,cVar15)) + (longlong)pcVar10 * 4);
  *pcVar1 = *pcVar1 + cVar6;
  *(char *)CONCAT44(uVar14,iVar13) = *(char *)CONCAT44(uVar14,iVar13) + unaff_SPL;
  *(char *)CONCAT62(uVar17,CONCAT11(cVar5,cVar15)) =
       *(char *)CONCAT62(uVar17,CONCAT11(cVar5,cVar15)) + cVar12;
  *pcVar10 = *pcVar10 + cVar6;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

