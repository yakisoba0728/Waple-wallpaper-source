// Function: FUN_1404be3b0
// Addr: 1404be3b0
// Size: 1 bytes


void FUN_1404be3b0(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  undefined2 uVar2;
  uint3 uVar3;
  byte bVar4;
  uint uVar5;
  char *in_RAX;
  uint *puVar6;
  byte *pbVar7;
  int *piVar8;
  undefined1 *puVar9;
  byte bVar12;
  char cVar13;
  char cVar14;
  char unaff_BL;
  char cVar15;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined1 auStack_8 [8];
  char cVar10;
  undefined6 uVar11;
  
  cVar14 = (char)((ulonglong)param_2 >> 8);
  cVar13 = (char)param_2;
  bVar12 = (byte)param_1;
  *(int *)(unaff_RDI + 0x8d40025) = *(int *)(unaff_RDI + 0x8d40025) << (bVar12 & 0x1f);
  *param_4 = *param_4;
  *in_RAX = *in_RAX + (char)in_RAX;
  bVar4 = (char)in_RAX * '\x02';
  cVar15 = unaff_BL + cVar13;
  uVar11 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar10 = (char)((ulonglong)in_RAX >> 8) + cVar13;
  puVar6 = (uint *)CONCAT62(uVar11,CONCAT11(cVar10,bVar4));
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(0x25,cVar15)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(0x25,cVar15)) | bVar12;
  *puVar6 = *puVar6 & (uint)puVar6;
  *(byte *)puVar6 = (char)*puVar6 + bVar4;
  cVar10 = cVar10 + cVar14;
  pbVar7 = (byte *)CONCAT62(uVar11,CONCAT11(cVar10,bVar4));
  *pbVar7 = *pbVar7 | bVar4;
  cVar10 = cVar10 * '\x02';
  puVar6 = (uint *)CONCAT62(uVar11,CONCAT11(cVar10,bVar4));
  *puVar6 = *puVar6 | (uint)puVar6;
  cVar10 = cVar10 + cVar13;
  bVar4 = bVar4 | *(byte *)CONCAT62(uVar11,CONCAT11(cVar10,bVar4));
  puVar6 = (uint *)CONCAT62(uVar11,CONCAT11(cVar10 + bVar4,bVar4));
  uVar5 = (uint)puVar6 | *puVar6;
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + cVar14;
  cVar10 = (char)(uVar5 >> 8);
  param_2[param_1] = param_2[param_1] + cVar10;
  param_2[uVar5] = param_2[uVar5] + cVar13;
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + cVar14;
  bVar4 = (char)uVar5 * '\x02';
  uVar2 = (undefined2)(uVar5 >> 0x10);
  cVar10 = cVar10 + cVar13;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(0x25,cVar15 + cVar13)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(0x25,cVar15 + cVar13)) | bVar12;
  *(uint *)(param_2 + param_1) = *(uint *)(param_2 + param_1) & (uint)param_2;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + cVar13;
  uVar5 = CONCAT22(uVar2,CONCAT11(cVar10 * '\x02',
                                  bVar4 | *(byte *)(ulonglong)CONCAT22(uVar2,CONCAT11(cVar10,bVar4))
                                 ));
  piVar8 = (int *)((ulonglong)(uVar5 | *(uint *)(ulonglong)uVar5) | 0x74);
  iVar1 = (int)piVar8 + *piVar8;
  *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | (byte)((uint)iVar1 >> 8);
  uVar3 = (uint3)((uint)iVar1 >> 8);
  uVar5 = CONCAT31(uVar3,(byte)iVar1 + 0x54);
  *(int *)(ulonglong)uVar5 = *(int *)(ulonglong)uVar5 + uVar5 + (uint)(0xab < (byte)iVar1);
  uVar5 = (uVar3 & 0x4b0960) << 8;
  puVar9 = (undefined1 *)(ulonglong)uVar5;
  *puVar9 = *puVar9;
  puVar9[-0x47] = puVar9[-0x47] + cVar13;
  uVar5 = uVar5 & 0x25b97900;
  puVar9 = (undefined1 *)(ulonglong)uVar5;
  puVar9[9] = puVar9[9] + (char)(uVar5 >> 8);
  *param_4 = *param_4 + (char)auStack_8;
  *param_2 = *param_2 + '%';
  *puVar9 = *puVar9;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

