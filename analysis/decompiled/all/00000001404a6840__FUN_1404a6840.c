// Function: FUN_1404a6840
// Addr: 1404a6840
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6840(uint *param_1,char *param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined3 uVar3;
  int *piVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  char *in_RAX;
  byte bVar9;
  char *pcVar10;
  char cVar11;
  char cVar12;
  undefined6 uVar13;
  int unaff_EBX;
  char *unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  char *pcVar8;
  
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar12 = (char)((ulonglong)param_2 >> 8);
  cVar11 = (char)param_2;
  *(char *)(longlong)(int)param_1 = *(char *)(longlong)(int)param_1 + -8;
  cVar5 = (char)in_RAX;
  *in_RAX = *in_RAX + cVar5;
  *in_RAX = *in_RAX + cVar5;
  uVar2 = *param_1;
  *unaff_RSI = *unaff_RSI + (char)(uVar2 >> 8);
  uVar2 = *(uint *)(ulonglong)uVar2;
  pcVar10 = (char *)(ulonglong)uVar2;
  *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) + cVar11;
  *pcVar10 = *pcVar10 + cVar5;
  cVar6 = *pcVar10;
  *param_2 = *param_2 + cVar5 + cVar6;
  *pcVar10 = *pcVar10 + (char)((ulonglong)in_RAX >> 8);
  uVar7 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5 + cVar6) + 0x34050002;
  uVar3 = (undefined3)(uVar7 >> 8);
  cVar6 = (char)uVar7 + *(char *)(ulonglong)uVar7;
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar3,cVar6);
  pbVar1 = (byte *)((longlong)pcVar10 * 2 + 0x98c6400);
  bVar9 = (byte)uVar2;
  *pbVar1 = *pbVar1 ^ bVar9;
  *(char *)(unaff_RDI + 0x21004a) = *(char *)(unaff_RDI + 0x21004a) + cVar6;
  *pcVar8 = *pcVar8 + cVar6;
  pbVar1 = (byte *)((longlong)pcVar10 * 2 + 0x98c6400);
  *pbVar1 = *pbVar1 ^ bVar9;
  *(char *)(unaff_RDI + 0x521004a) = *(char *)(unaff_RDI + 0x521004a) + cVar6;
  uVar7 = CONCAT31(uVar3,cVar6 + *pcVar8) + 0xb0000434;
  pcVar8 = (char *)(ulonglong)uVar7;
  cVar6 = (char)uVar7;
  pcVar8[0x210049e1] = pcVar8[0x210049e1] + cVar6;
  *pcVar8 = *pcVar8 + cVar6;
  pcVar8[-0xefff673] = pcVar8[-0xefff673] + cVar12;
  pcVar8[0x10049e1] = pcVar8[0x10049e1] + cVar6;
  *param_2 = *param_2 + (char)unaff_EBX;
  uVar2 = *(uint *)(pcVar8 + in_FS_OFFSET);
  cVar12 = cVar12 - *param_2;
  *(char *)CONCAT62(uVar13,CONCAT11(cVar12,cVar11)) =
       *(char *)CONCAT62(uVar13,CONCAT11(cVar12,cVar11)) + (char)unaff_EBX;
  piVar4 = (int *)((ulonglong)(uVar7 & uVar2) * 2);
  *piVar4 = *piVar4 + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

