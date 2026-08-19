// Function: FUN_1404b5dd4
// Addr: 1404b5dd4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b5e4b) overlaps instruction at (ram,0x0001404b5e4a)
    */

void FUN_1404b5dd4(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  byte bVar10;
  uint *in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char in_CF;
  char acStackX_8 [32];
  char *pcVar9;
  
  pcVar9 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + CONCAT71(unaff_00000019,unaff_BL));
  *pcVar9 = *pcVar9 + (char)in_RAX + in_CF;
  pbVar1 = (byte *)(param_2 + 4);
  bVar2 = *pbVar1;
  bVar10 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar1 = *pbVar1 + bVar10;
  uVar4 = (uint)CARRY1(bVar2,bVar10);
  uVar3 = *in_RAX;
  uVar5 = (uint)in_RAX - *in_RAX;
  uVar7 = uVar5 - uVar4;
  pcVar9 = (char *)(ulonglong)uVar7;
  if (uVar7 == 0) {
    cVar6 = (char)iRam0000000000000000;
    *param_4 = *param_4 + (char)acStackX_8;
    acStackX_8[unaff_RSI * 8] =
         acStackX_8[unaff_RSI * 8] + (-((uint)in_RAX < uVar3 || uVar5 < uVar4) - cVar6) + '\x02';
    *(char *)(param_2 + 0x34) = *(char *)(param_2 + 0x34) + (char)param_2;
    *param_4 = *param_4 + acStackX_8[0] + '\b';
  }
  else {
    *param_4 = *param_4;
    *pcVar9 = *pcVar9 + (char)uVar7;
    *pcVar9 = *pcVar9 + (char)param_2;
    uVar5 = CONCAT31((int3)(uVar7 >> 8),(char)uVar7 + '\x1b');
    pbVar1 = (byte *)(param_2 + 4);
    bVar2 = *pbVar1;
    bVar10 = (byte)(uVar7 >> 8);
    *pbVar1 = *pbVar1 + bVar10;
    uVar3 = (uint)CARRY1(bVar2,bVar10);
    uVar4 = uVar5 - *(uint *)(ulonglong)uVar5;
    iVar8 = uVar4 - uVar3;
    if (iVar8 != 0) {
      *param_4 = *param_4 + (char)iVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar8 = -(uint)(uVar5 < *(uint *)(ulonglong)uVar5 || uVar4 < uVar3) - iRam0000000000000000;
    pcVar9 = (char *)(unaff_RBP + 0x4b + CONCAT71(unaff_00000019,unaff_BL) * 2);
    *pcVar9 = *pcVar9 + unaff_BL;
    *param_1 = *param_1 + (char)((uint)iVar8 >> 8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

