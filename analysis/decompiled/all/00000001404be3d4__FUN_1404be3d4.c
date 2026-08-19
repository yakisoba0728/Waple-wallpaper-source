// Function: FUN_1404be3d4
// Addr: 1404be3d4
// Size: 1 bytes


void FUN_1404be3d4(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  undefined2 uVar2;
  uint3 uVar3;
  byte bVar4;
  uint uVar5;
  char cVar9;
  undefined8 in_RAX;
  undefined6 uVar10;
  uint *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  char cVar11;
  char cVar12;
  char unaff_BL;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined1 auStack_8 [8];
  
  cVar12 = (char)((ulonglong)param_2 >> 8);
  cVar11 = (char)param_2;
  uVar10 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar9 = (char)((ulonglong)in_RAX >> 8) + cVar11;
  bVar4 = (byte)in_RAX | *(byte *)CONCAT62(uVar10,CONCAT11(cVar9,(byte)in_RAX));
  puVar6 = (uint *)CONCAT62(uVar10,CONCAT11(cVar9 + bVar4,bVar4));
  uVar5 = (uint)puVar6 | *puVar6;
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + cVar12;
  cVar9 = (char)(uVar5 >> 8);
  param_2[param_1] = param_2[param_1] + cVar9;
  param_2[uVar5] = param_2[uVar5] + cVar11;
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + cVar12;
  bVar4 = (char)uVar5 * '\x02';
  uVar2 = (undefined2)(uVar5 >> 0x10);
  cVar9 = cVar9 + cVar11;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(0x25,unaff_BL + cVar11)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(0x25,unaff_BL + cVar11)) | (byte)param_1;
  *(uint *)(param_2 + param_1) = *(uint *)(param_2 + param_1) & (uint)param_2;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + cVar11;
  uVar5 = CONCAT22(uVar2,CONCAT11(cVar9 * '\x02',
                                  bVar4 | *(byte *)(ulonglong)CONCAT22(uVar2,CONCAT11(cVar9,bVar4)))
                  );
  piVar7 = (int *)((ulonglong)(uVar5 | *(uint *)(ulonglong)uVar5) | 0x74);
  iVar1 = (int)piVar7 + *piVar7;
  *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | (byte)((uint)iVar1 >> 8);
  uVar3 = (uint3)((uint)iVar1 >> 8);
  uVar5 = CONCAT31(uVar3,(byte)iVar1 + 0x54);
  *(int *)(ulonglong)uVar5 = *(int *)(ulonglong)uVar5 + uVar5 + (uint)(0xab < (byte)iVar1);
  uVar5 = (uVar3 & 0x4b0960) << 8;
  puVar8 = (undefined1 *)(ulonglong)uVar5;
  *puVar8 = *puVar8;
  puVar8[-0x47] = puVar8[-0x47] + cVar11;
  uVar5 = uVar5 & 0x25b97900;
  puVar8 = (undefined1 *)(ulonglong)uVar5;
  puVar8[9] = puVar8[9] + (char)(uVar5 >> 8);
  *param_4 = *param_4 + (char)auStack_8;
  *param_2 = *param_2 + '%';
  *puVar8 = *puVar8;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

