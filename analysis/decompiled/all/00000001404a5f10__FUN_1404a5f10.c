// Function: FUN_1404a5f10
// Addr: 1404a5f10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5f10(uint *param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined3 uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  byte bVar9;
  int *in_RAX;
  byte *pbVar7;
  char *pcVar8;
  undefined1 uVar10;
  char cVar11;
  char cVar12;
  undefined6 uVar13;
  char cVar14;
  uint unaff_EBX;
  
  uVar13 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar12 = (char)((ulonglong)param_1 >> 8);
  uVar10 = SUB81(param_1,0);
  *param_1 = *param_1 & unaff_EBX;
  iVar6 = (int)in_RAX - *in_RAX;
  uVar1 = (undefined2)((uint)iVar6 >> 0x10);
  bVar4 = (byte)iVar6;
  bVar9 = (byte)((uint)iVar6 >> 8) | (byte)param_2;
  uVar2 = (undefined3)(CONCAT22(uVar1,CONCAT11(bVar9,bVar4)) >> 8);
  pbVar7 = (byte *)(ulonglong)CONCAT31(uVar2,bVar4);
  cVar11 = cVar12 + '\b';
  cVar14 = (char)(unaff_EBX >> 8);
  *(char *)(param_2 + -0x39) = *(char *)(param_2 + -0x39) + cVar14;
  *pbVar7 = *pbVar7 | bVar4;
  cVar5 = bVar4 + 0xa2;
  *(undefined1 *)CONCAT62(uVar13,CONCAT11(cVar11,uVar10)) =
       *(undefined1 *)CONCAT62(uVar13,CONCAT11(cVar11,uVar10));
  pcVar8 = (char *)((ulonglong)CONCAT31(uVar2,cVar5) * 2);
  *pcVar8 = *pcVar8 + cVar5;
  uVar3 = CONCAT22(uVar1,CONCAT11(bVar9 * '\x02',cVar5));
  iVar6 = uVar3 - *(int *)(ulonglong)uVar3;
  bVar4 = (byte)iVar6;
  uVar2 = (undefined3)
          (CONCAT22((short)((uint)iVar6 >> 0x10),
                    CONCAT11((char)((uint)iVar6 >> 8) + (byte)param_2,bVar4)) >> 8);
  pbVar7 = (byte *)(ulonglong)CONCAT31(uVar2,bVar4);
  cVar12 = cVar12 + '\x10';
  *(char *)(param_2 + -0x39) = *(char *)(param_2 + -0x39) + cVar14;
  *pbVar7 = *pbVar7 | bVar4;
  cVar5 = bVar4 + 0xa2;
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar2,cVar5);
  *(undefined1 *)CONCAT62(uVar13,CONCAT11(cVar12,uVar10)) =
       *(undefined1 *)CONCAT62(uVar13,CONCAT11(cVar12,uVar10));
  *pcVar8 = *pcVar8 + cVar5;
  pcVar8[0x7a0008c5] = pcVar8[0x7a0008c5] + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

