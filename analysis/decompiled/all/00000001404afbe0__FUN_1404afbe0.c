// Function: FUN_1404afbe0
// Addr: 1404afbe0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404afbca) overlaps instruction at (ram,0x0001404afbc8)
    */

void FUN_1404afbe0(char *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  byte *in_RAX;
  char *pcVar6;
  undefined7 uVar7;
  byte bVar8;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char cVar9;
  int unaff_ESP;
  undefined4 unaff_00000024;
  bool in_CF;
  bool bVar10;
  bool in_ZF;
  float10 in_ST0;
  
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar9 = (char)unaff_ESP;
  if (in_CF) {
    pcVar6 = (char *)CONCAT71(uVar7,(byte)in_RAX + 1);
    do {
      bVar10 = unaff_BH != '\0';
      unaff_BH = -unaff_BH;
      uVar7 = (undefined7)((ulonglong)pcVar6 >> 8);
      cVar4 = (char)pcVar6 + bVar10;
      pcVar6 = (char *)CONCAT71(uVar7,cVar4);
      param_1 = param_1 + -1;
    } while (param_1 != (char *)0x0 && cVar4 != '\0');
    *param_1 = *param_1 + cVar9;
    *pcVar6 = *pcVar6 + cVar4;
    pbVar1 = (byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x21);
    bVar2 = *pbVar1;
    bVar8 = (byte)((ulonglong)param_2 >> 8);
    *pbVar1 = *pbVar1 + bVar8;
    pcVar6 = (char *)CONCAT71(uVar7,cVar4 + CARRY1(bVar2,bVar8));
    do {
      bVar10 = unaff_BH != '\0';
      unaff_BH = -unaff_BH;
      cVar4 = (char)pcVar6 + bVar10;
      pcVar6 = (char *)CONCAT71((int7)((ulonglong)pcVar6 >> 8),cVar4);
      param_1 = param_1 + -1;
    } while (param_1 != (char *)0x0 && cVar4 != '\0');
    *param_1 = *param_1 + cVar9;
    *param_2 = *param_2 + cVar4;
    *pcVar6 = *pcVar6 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_ZF) {
    in_RAX = (byte *)CONCAT71(uVar7,(byte)in_RAX | *in_RAX);
  }
  while( true ) {
    *param_2 = *param_2 + (char)param_1;
    uVar5 = (uint)in_RAX + 0x30000a34;
    *(short *)((ulonglong)uVar5 * 2) = (short)ROUND(in_ST0);
    if (0xcffff5cb < (uint)in_RAX) break;
    uVar5 = CONCAT31((int3)(uVar5 >> 8),(char)uVar5 + -0xc);
    pcVar6 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + (longlong)param_2 * 2);
    *pcVar6 = *pcVar6 + (char)((ulonglong)param_1 >> 8);
    uVar5 = uVar5 | *(uint *)(ulonglong)uVar5;
    uVar3 = (ulonglong)param_2 >> 8;
    param_2 = (char *)(ulonglong)(uint)((int)param_2 - unaff_ESP);
    in_RAX = (byte *)(ulonglong)
                     (CONCAT31((int3)(CONCAT22((short)(uVar5 >> 0x10),
                                               CONCAT11((byte)(uVar5 >> 8) & (byte)uVar3,(char)uVar5
                                                       )) >> 8),(char)uVar5) + 0x7740f00);
  }
  *param_1 = *param_1 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

