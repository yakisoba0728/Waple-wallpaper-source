// Function: FUN_1404c73a4
// Addr: 1404c73a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c73b2) overlaps instruction at (ram,0x0001404c73b1)
    */

void FUN_1404c73a4(byte *param_1,char *param_2,char param_3)

{
  char *pcVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  undefined8 in_RAX;
  uint *puVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  char cVar12;
  byte bVar13;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  char unaff_BPL;
  char *unaff_RSI;
  char *unaff_RDI;
  char in_R10B;
  undefined7 in_register_00000091;
  char in_R11B;
  char unaff_R12B;
  undefined7 unaff_000000a1;
  longlong in_FS_OFFSET;
  bool in_CF;
  
  pbVar3 = (byte *)(unaff_RSI + 1);
  cVar6 = *unaff_RSI;
  puVar8 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar6);
  bVar13 = (byte)((ulonglong)param_2 >> 8);
  cVar12 = (char)param_2;
  if (!in_CF) {
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
    *(char *)puVar8 = (char)*puVar8 + cVar6;
    *(byte *)puVar8 = (char)*puVar8 + bVar13;
    *puVar8 = *puVar8 - (int)pbVar3;
    *puVar8 = *puVar8 - (int)pbVar3;
    param_2[(longlong)pbVar3 * 2 + 0x7601004c] =
         param_2[(longlong)pbVar3 * 2 + 0x7601004c] + (char)((ulonglong)param_1 >> 8);
    uVar7 = (uint)puVar8 | *puVar8;
    if (uVar7 == 0) {
      bVar4 = *pbVar3;
      uVar7 = (uint)bVar4;
      bVar2 = *param_1;
      *param_1 = *param_1 + bVar4;
      if (CARRY1(bVar2,bVar4) || *param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_RSI[-10] = unaff_RSI[-10] + bVar13;
    }
    *(uint *)(ulonglong)uVar7 = *(uint *)(ulonglong)uVar7 | uVar7;
    cVar6 = in((short)param_2);
    *unaff_RDI = cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 + cVar12;
  uVar7 = (uint)puVar8 | *(uint *)(in_FS_OFFSET + (longlong)puVar8);
  pcVar10 = (char *)(ulonglong)uVar7;
  param_1[(longlong)param_2] = param_1[(longlong)param_2] | bVar13;
  pcVar1 = pcVar10 + -0x22ffd020;
  *pcVar1 = *pcVar1 + cVar12;
  pbVar11 = param_1 + -1;
  if (pbVar11 != (byte *)0x0 && *pcVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (longlong)pbVar3 * 2);
  cVar6 = (char)uVar7;
  *pcVar1 = *pcVar1 + cVar6;
  *pbVar11 = *pbVar11 + unaff_R12B;
  *pcVar10 = *pcVar10 + cVar6;
  pcVar1 = pcVar10 + -0x22ffd020;
  *pcVar1 = *pcVar1 + cVar12;
  pbVar11 = param_1 + -2;
  if (pbVar11 != (byte *)0x0 && *pcVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (longlong)pbVar3 * 2);
  *pcVar1 = *pcVar1 + cVar6;
  *pbVar11 = *pbVar11 + unaff_R12B;
  *pcVar10 = *pcVar10 + (char)pbVar11;
  *pcVar10 = *pcVar10 + cVar6;
  if (*pcVar10 == '\0') {
    pcVar10 = (char *)((ulonglong)pcVar10 ^ 0x11);
  }
  *pcVar10 = *pcVar10 + (char)pcVar10;
  uVar7 = (uint)pcVar10 | *(uint *)(pcVar10 + in_FS_OFFSET);
  pbVar9 = (byte *)(ulonglong)uVar7;
  *(char *)((longlong)param_2 * 2) = *(char *)((longlong)param_2 * 2) + cVar12;
  pbVar11[(longlong)param_2] = pbVar11[(longlong)param_2] + bVar13;
  pbVar11 = pbVar9 + -0x22ffd020;
  *pbVar11 = *pbVar11 + cVar12;
  param_1 = param_1 + -3;
  cVar6 = (char)(uVar7 >> 8);
  bVar13 = (byte)uVar7;
  if (param_1 != (byte *)0x0 && *pbVar11 != 0) {
    pbVar9[CONCAT71(unaff_000000a1,unaff_R12B) * 2] =
         pbVar9[CONCAT71(unaff_000000a1,unaff_R12B) * 2] + param_3;
    iVar5 = *(int *)(pbVar9 + 2);
    *pbVar9 = *pbVar9 ^ bVar13;
    *pbVar9 = *pbVar9 + cVar6;
    *pbVar3 = *pbVar3 >> 1;
    *pbVar9 = *pbVar9 + bVar13;
    *param_1 = *param_1 + cVar6;
    pcVar1 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + (longlong)pbVar3 * 8);
    *pcVar1 = *pcVar1 + (char)((uint)((int)param_2 + iVar5) >> 8);
    pcVar1 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + CONCAT71(unaff_000000a1,unaff_R12B) * 8);
    *pcVar1 = *pcVar1 + unaff_BPL;
    pcVar1 = (char *)(CONCAT71(unaff_000000a1,unaff_R12B) +
                     CONCAT71(in_register_00000091,in_R10B) * 8);
    *pcVar1 = *pcVar1 + (char)unaff_ESP;
    *unaff_RDI = *unaff_RDI + in_R10B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (longlong)pbVar3 * 2);
  *pcVar1 = *pcVar1 + bVar13;
  *param_1 = *param_1 + in_R11B;
  *unaff_RDI = *unaff_RDI + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

