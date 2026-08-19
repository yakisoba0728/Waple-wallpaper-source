// Function: FUN_1404a82ac
// Addr: 1404a82ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a82ac(int param_1,int *param_2)

{
  byte bVar1;
  undefined3 uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  byte bVar10;
  uint in_EAX;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  char cVar11;
  uint uVar12;
  char *pcVar14;
  char cVar16;
  byte bVar17;
  undefined2 uVar18;
  undefined4 uVar19;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  char *unaff_RDI;
  char *pcVar9;
  ulonglong uVar13;
  undefined1 *puVar15;
  
  uVar19 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar18 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar17 = (byte)((ulonglong)param_2 >> 8);
  cVar16 = (char)param_2;
  uVar12 = param_1 + *(int *)CONCAT71(unaff_00000019,unaff_BL) + (uint)(0xbffff39b < in_EAX);
  uVar13 = (ulonglong)uVar12;
  (&stack0x00000000)[(longlong)param_2] = (&stack0x00000000)[(longlong)param_2] + cVar16;
  uVar6 = in_EAX + 0x40000c64 | *(uint *)(ulonglong)(in_EAX + 0x40000c64);
  pcVar14 = (char *)(ulonglong)uVar6;
  pbVar8 = (byte *)(uVar13 + 0x21004a);
  *pbVar8 = *pbVar8 << 4 | *pbVar8 >> 4;
  *pcVar14 = *pcVar14 + (char)uVar6;
  if (*pcVar14 != '\0') {
    *pcVar14 = *pcVar14 + (char)uVar6;
    uVar13 = (ulonglong)(uVar12 + *(int *)CONCAT71(unaff_00000019,unaff_BL));
    (&stack0x00000000)[(longlong)param_2] = (&stack0x00000000)[(longlong)param_2] + cVar16;
  }
  uVar6 = uVar6 | *(uint *)(ulonglong)uVar6;
  puVar7 = (uint *)(ulonglong)uVar6;
  pbVar8 = (byte *)(uVar13 + 0x1601004a);
  *pbVar8 = *pbVar8 << 5 | *pbVar8 >> 3;
  *unaff_RSI = *unaff_RSI + cVar16;
  *param_2 = *param_2 + (int)param_2;
  *unaff_RDI = *unaff_RDI + (char)uVar13;
  if (uVar13 == 1 || *unaff_RDI == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar14 = (char *)(uVar13 - 2);
  if (pcVar14 == (char *)0x0 || *unaff_RDI == '\0') {
    *pcVar14 = -*pcVar14;
    *pcVar14 = *pcVar14;
    *(undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff) =
         *(undefined1 *)((ulonglong)&stack0x00000000 & 0xffffffff);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar8 = &stack0x00000000 + (longlong)unaff_RSI * 2;
  bVar10 = *pbVar8;
  *pbVar8 = *pbVar8 + (byte)uVar6;
  *puVar7 = *puVar7 + uVar6 + (uint)CARRY1(bVar10,(byte)uVar6);
  *pcVar14 = -*pcVar14;
  uVar12 = *puVar7;
  *(char *)param_2 = (char)*param_2 + unaff_BL;
  uVar6 = uVar6 | uVar12 | *(uint *)(ulonglong)(uVar6 | uVar12);
  bVar1 = (char)uVar6 + 0x82;
  uVar2 = (undefined3)(uVar6 >> 8);
  pbVar8 = (byte *)(ulonglong)CONCAT31(uVar2,bVar1);
  *pcVar14 = *pcVar14;
  *pbVar8 = *pbVar8 + bVar1;
  bVar3 = bVar17 * '\x02';
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)pcVar14) - (uint)CARRY1(bVar17,bVar17);
  bVar10 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar1;
  cVar11 = ((char)pcVar14 - *(char *)CONCAT71(unaff_00000019,unaff_BL)) - CARRY1(bVar10,bVar1);
  puVar15 = (undefined1 *)CONCAT71((int7)((ulonglong)pcVar14 >> 8),cVar11);
  pcVar14 = (char *)(CONCAT44(uVar19,CONCAT22(uVar18,CONCAT11(bVar3,cVar16))) + (longlong)pbVar8 * 4
                    );
  *pcVar14 = *pcVar14 + cVar16;
  *puVar15 = *puVar15;
  *pbVar8 = *pbVar8 + bVar1;
  bVar10 = (byte)(uVar6 >> 8);
  cVar5 = bVar1 + bVar10;
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar2,cVar5);
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)puVar15) - (uint)CARRY1(bVar1,bVar10);
  cVar4 = bVar17 * '\x04';
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       (*(int *)CONCAT71(unaff_00000019,unaff_BL) - (int)puVar15) - (uint)CARRY1(bVar3,bVar3);
  pcVar14 = (char *)(CONCAT44(uVar19,CONCAT22(uVar18,CONCAT11(cVar4,cVar16))) + (longlong)pcVar9 * 4
                    );
  *pcVar14 = *pcVar14 + cVar5;
  *puVar15 = *puVar15;
  *(char *)CONCAT44(uVar19,CONCAT22(uVar18,CONCAT11(cVar4,cVar16))) =
       *(char *)CONCAT44(uVar19,CONCAT22(uVar18,CONCAT11(cVar4,cVar16))) + cVar11;
  *pcVar9 = *pcVar9 + cVar5;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

