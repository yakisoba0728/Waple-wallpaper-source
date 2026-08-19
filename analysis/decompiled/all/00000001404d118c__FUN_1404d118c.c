// Function: FUN_1404d118c
// Addr: 1404d118c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d11a7) overlaps instruction at (ram,0x0001404d11a5)
    */

void FUN_1404d118c(ulonglong param_1,byte *param_2)

{
  undefined2 uVar1;
  byte bVar2;
  short sVar3;
  char cVar7;
  char cVar8;
  int in_EAX;
  uint uVar5;
  byte bVar9;
  char cVar10;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  short sVar4;
  char *pcVar6;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  uVar5 = in_EAX + 0x80000634;
  uVar1 = (undefined2)(uVar5 >> 0x10);
  sVar3 = CONCAT11((char)((short)uVar5 % (short)*(char *)((ulonglong)uVar5 * 2)),
                   (char)((short)uVar5 / (short)*(char *)((ulonglong)uVar5 * 2)));
  sVar4 = (short)*(char *)((ulonglong)CONCAT22(uVar1,sVar3) * 2);
  bVar2 = (byte)(sVar3 / sVar4);
  cVar7 = (char)(sVar3 % sVar4);
  sVar4 = CONCAT11(cVar7,bVar2);
  pcVar6 = (char *)(ulonglong)CONCAT22(uVar1,sVar4);
  bVar9 = (byte)param_1 & 0x49;
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + cVar7;
  *pcVar6 = *pcVar6 + bVar9;
  *pcVar6 = *pcVar6 + bVar2;
  if (*pcVar6 != '\0') {
    *pcVar6 = *pcVar6 + bVar2;
    pcVar6[in_FS_OFFSET] = pcVar6[in_FS_OFFSET] | bVar2;
    pcVar6[unaff_RDI] = pcVar6[unaff_RDI] + (char)param_2;
    pcVar6[unaff_RSI] = pcVar6[unaff_RSI] + cVar10;
    pcVar6[-0x62ffc30a] = pcVar6[-0x62ffc30a] + bVar2;
    cVar7 = (char)(sVar4 / (short)*(char *)((longlong)pcVar6 * 2));
    cVar8 = (char)(sVar4 % (short)*(char *)((longlong)pcVar6 * 2));
    sVar4 = CONCAT11(cVar8,cVar7);
    pcVar6 = (char *)(ulonglong)CONCAT22(uVar1,sVar4);
    *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + cVar8;
    *pcVar6 = *pcVar6 + cVar7;
    pcVar6[-0x62ffc30a] = pcVar6[-0x62ffc30a] + cVar7;
    bVar2 = (byte)(sVar4 / (short)*(char *)((longlong)pcVar6 * 2));
    cVar7 = (char)(sVar4 % (short)*(char *)((longlong)pcVar6 * 2));
    uVar5 = CONCAT22(uVar1,CONCAT11(cVar7,bVar2));
    *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + cVar7;
    *param_2 = *param_2 | bVar2;
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + bVar9;
    pcVar6 = (char *)(((ulonglong)CONCAT31((int3)(uVar5 >> 8),bVar2) ^ 0x12) - 0x1f);
    *pcVar6 = *pcVar6 + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar6 = *pcVar6 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

