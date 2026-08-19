// Function: FUN_1404b5d70
// Addr: 1404b5d70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b5e4b) overlaps instruction at (ram,0x0001404b5e4a)
    */

void FUN_1404b5d70(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar11;
  char *in_RAX;
  char *pcVar8;
  uint *puVar9;
  char cVar12;
  char cVar13;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char unaff_DIL;
  undefined7 unaff_00000039;
  char *in_R10;
  undefined1 auStack_10 [8];
  char *pcVar10;
  
  cVar13 = (char)((ulonglong)param_2 >> 8);
  cVar12 = (char)param_2;
  in_RAX[CONCAT71(unaff_00000019,unaff_BL) * 4 + 0x42] =
       in_RAX[CONCAT71(unaff_00000019,unaff_BL) * 4 + 0x42] + (char)param_1;
  pcVar10 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x78);
  *pcVar10 = *pcVar10 + (char)in_RAX;
  *in_R10 = *in_R10 + unaff_DIL;
  if (-1 < *in_R10) {
    *param_2 = *param_2 + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar8 = (char *)((ulonglong)in_RAX & 0xffffffff);
  pcVar10 = (char *)(unaff_RSI + (longlong)param_1 * 4);
  *pcVar10 = *pcVar10 + cVar13;
  pcVar10 = (char *)(CONCAT71(unaff_00000039,unaff_DIL) + (longlong)param_1 * 4);
  *pcVar10 = *pcVar10 + cVar13;
  *pcVar8 = *pcVar8 + cVar12;
  puVar9 = (uint *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),(char)pcVar8 + '\x1b');
  pbVar1 = (byte *)(param_2 + 4);
  bVar2 = *pbVar1;
  bVar11 = (byte)((ulonglong)pcVar8 >> 8);
  *pbVar1 = *pbVar1 + bVar11;
  uVar4 = (uint)CARRY1(bVar2,bVar11);
  uVar3 = *puVar9;
  uVar5 = (uint)puVar9 - *puVar9;
  uVar6 = uVar5 - uVar4;
  pcVar10 = (char *)(ulonglong)uVar6;
  if (uVar6 == 0) {
    cVar13 = (char)iRam0000000000000000;
    *param_4 = *param_4 + (char)&stack0xfffffffffffffff8;
    (&stack0xfffffffffffffff8)[unaff_RSI * 8] =
         (&stack0xfffffffffffffff8)[unaff_RSI * 8] +
         (-((uint)puVar9 < uVar3 || uVar5 < uVar4) - cVar13) + '\x02';
    param_2[0x34] = param_2[0x34] + cVar12;
    *param_4 = *param_4 + (char)unaff_RBP + '\b';
  }
  else {
    *param_4 = *param_4 + (char)auStack_10;
    *pcVar10 = *pcVar10 + (char)uVar6;
    *pcVar10 = *pcVar10 + cVar12;
    uVar5 = CONCAT31((int3)(uVar6 >> 8),(char)uVar6 + '\x1b');
    pbVar1 = (byte *)(param_2 + 4);
    bVar2 = *pbVar1;
    bVar11 = (byte)(uVar6 >> 8);
    *pbVar1 = *pbVar1 + bVar11;
    uVar3 = (uint)CARRY1(bVar2,bVar11);
    uVar4 = uVar5 - *(uint *)(ulonglong)uVar5;
    iVar7 = uVar4 - uVar3;
    if (iVar7 != 0) {
      *param_4 = *param_4 + (char)iVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar7 = -(uint)(uVar5 < *(uint *)(ulonglong)uVar5 || uVar4 < uVar3) - iRam0000000000000000;
    pcVar10 = (char *)(unaff_RBP + 0x4b + CONCAT71(unaff_00000019,unaff_BL) * 2);
    *pcVar10 = *pcVar10 + unaff_BL;
    *param_1 = *param_1 + (char)((uint)iVar7 >> 8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

