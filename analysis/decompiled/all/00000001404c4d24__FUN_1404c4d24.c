// Function: FUN_1404c4d24
// Addr: 1404c4d24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c4d5b) overlaps instruction at (ram,0x0001404c4d5a)
    */

void FUN_1404c4d24(char *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int in_EAX;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  char cVar9;
  undefined6 uVar10;
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong in_FS_OFFSET;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar8 = (char)param_2;
  pbVar2 = (byte *)(unaff_RSI + 1);
  uVar4 = in_EAX + 0xb5d4b400;
  cVar9 = (char)(uVar4 >> 8);
  *param_1 = *param_1 + cVar9;
  *param_2 = *param_2 + (char)uVar4;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  pcVar6 = (char *)((ulonglong)uVar4 ^ 6);
  *pcVar6 = *pcVar6 + cVar9;
  uVar4 = (int)pcVar6 + 0xd2645a00;
  pcVar7 = (char *)(ulonglong)uVar4;
  pcVar6 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x4a + unaff_RBP);
  *pcVar6 = *pcVar6 + (char)param_1;
  *param_1 = *param_1 + unaff_BL;
  *pcVar7 = *pcVar7 - (char)param_1;
  *param_2 = *param_2 + unaff_BL;
  if (*param_2 != 0) {
    bVar1 = *param_2;
    *param_2 = *param_2 + unaff_BL;
    uVar3 = uVar4 + *(uint *)(pcVar7 + in_FS_OFFSET);
    uVar5 = uVar3 + CARRY1(bVar1,unaff_BL);
    pcVar6 = (char *)(ulonglong)uVar5;
    cVar9 = ((char)((ulonglong)param_2 >> 8) - *(char *)((longlong)param_2 * 2)) -
            (CARRY4(uVar4,*(uint *)(pcVar7 + in_FS_OFFSET)) ||
            CARRY4(uVar3,(uint)CARRY1(bVar1,unaff_BL)));
    bVar1 = *(byte *)CONCAT62(uVar10,CONCAT11(cVar9,cVar8));
    *(byte *)CONCAT62(uVar10,CONCAT11(cVar9,cVar8)) =
         *(char *)CONCAT62(uVar10,CONCAT11(cVar9,cVar8)) + unaff_BL;
    pcVar6[0x20] = pcVar6[0x20] + cVar8 + CARRY1(bVar1,unaff_BL);
    *pbVar2 = *pbVar2 >> 1;
    *pcVar6 = *pcVar6 + cVar9;
    *pcVar6 = *pcVar6 + (char)uVar5;
    *(uint *)pbVar2 = *(int *)pbVar2 + uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

