// Function: FUN_1404c8410
// Addr: 1404c8410
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404c841f) overlaps instruction at (ram,0x0001404c841e)
    */

void FUN_1404c8410(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  byte bVar13;
  char *in_RAX;
  uint *puVar10;
  ulonglong uVar11;
  undefined7 uVar14;
  char *pcVar12;
  char cVar15;
  char cVar17;
  uint *puVar16;
  char unaff_BL;
  char unaff_BH;
  char cVar18;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  uint uVar19;
  byte *unaff_RSI;
  char *pcVar20;
  char unaff_R12B;
  byte in_CF;
  bool bVar21;
  float10 in_ST0;
  byte abStack_8 [8];
  uint *puVar9;
  
  bVar13 = (byte)param_2;
  piVar3 = (int *)(in_RAX + 0x7c20e00);
  *piVar3 = (*piVar3 - CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) - (uint)in_CF;
  puVar16 = (uint *)(param_1 + -1);
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  if (puVar16 == (uint *)0x0 || *piVar3 == 0) {
    bVar21 = *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))
             < '\0';
    *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) << 1
         | bVar21;
    if (bVar21 == *(char *)CONCAT44(unaff_0000001c,
                                    CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) < '\0') {
      register0x00000020 = (BADSPACEBASE *)abStack_8;
    }
    else {
      *in_RAX = *in_RAX + bVar7;
      *unaff_RSI = *unaff_RSI >> 1;
      *in_RAX = *in_RAX + bVar13;
    }
  }
  *in_RAX = *in_RAX + (byte)in_RAX;
  bVar6 = (byte)in_RAX & bVar13;
  puVar9 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar6);
  *(byte *)puVar9 = (char)*puVar9 + bVar13;
  *(byte *)puVar9 = (char)*puVar9 + bVar6;
  *puVar9 = *puVar9 & (uint)puVar16;
  bVar6 = bVar6 + (char)*puVar9;
  uVar19 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar7 | bVar6,bVar6)) +
           0x310b1000;
  puVar10 = (uint *)(ulonglong)uVar19;
  unaff_RSI[0xb] = unaff_RSI[0xb] + unaff_BL;
  *puVar10 = *puVar10 ^ uVar19;
  puVar9 = (uint *)((longlong)puVar10 * 2 + 0x21);
  *puVar9 = *puVar9 | 5;
  uVar8 = CONCAT31((int3)(uVar19 >> 8),(char)uVar19 + (char)*puVar10) + 0x5e000cf4;
  uVar19 = *puVar16;
  uVar5 = *puVar16;
  pcVar1 = (char *)((ulonglong)uVar8 - 0x7d);
  *pcVar1 = *pcVar1 + unaff_BL;
  *(char *)puVar16 = *(char *)puVar16 + unaff_R12B;
  uVar11 = (ulonglong)uVar8 & 0xffffffffffffff04;
  bVar7 = *(byte *)register0x00000020;
  bVar13 = (byte)(uVar11 >> 8);
  *(byte *)register0x00000020 = *(char *)register0x00000020 + bVar13;
  uVar14 = (undefined7)(uVar11 >> 8);
  pbVar2 = (byte *)(CONCAT44(unaff_0000001c,
                             CONCAT22(unaff_0000001a,CONCAT11(unaff_BH + unaff_BL,unaff_BL))) +
                   param_2);
  *pbVar2 = *pbVar2 | (byte)((ulonglong)param_2 >> 8);
  cVar18 = unaff_BH + unaff_BL + unaff_BL;
  uVar19 = (uint)unaff_RSI | uVar19 | uVar5 | *puVar16;
  cVar15 = (char)puVar16;
  *(char *)(ulonglong)uVar19 = *(char *)(ulonglong)uVar19 + cVar15;
  pcVar12 = (char *)(CONCAT71(uVar14,(char)uVar11 + CARRY1(bVar7,bVar13)) | 0x31);
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(cVar18,unaff_BL))) +
                    0x4c + (longlong)pcVar12 * 4);
  cVar17 = (char)((ulonglong)puVar16 >> 8);
  *pcVar1 = *pcVar1 + cVar17;
  *(byte *)puVar16 = *(char *)puVar16 + bVar13;
  *pcVar12 = *pcVar12 + (char)pcVar12;
  cVar18 = cVar18 + unaff_BL;
  pcVar20 = (char *)(ulonglong)(uVar19 | *puVar16);
  *pcVar20 = *pcVar20 + cVar15;
  puVar9 = (uint *)(CONCAT71(uVar14,(char)pcVar12) | 0x31);
  pcVar1 = (char *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(cVar18,unaff_BL))) +
                    0x4c + (longlong)puVar9 * 4);
  *pcVar1 = *pcVar1 + cVar17;
  *(byte *)puVar16 = *(char *)puVar16 + bVar13;
  *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
  pcVar20[0xb] = pcVar20[0xb] + unaff_BL;
  *puVar9 = *puVar9 ^ (uint)puVar9;
  *(short *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(cVar18,unaff_BL))) =
       (short)in_ST0;
  *puVar9 = *puVar9 ^ (uint)puVar9;
  puVar9 = *(uint **)register0x00000020;
  puVar4 = (undefined4 *)((longlong)puVar9 * 2 + 0x21);
  *puVar4 = *puVar4;
  uVar19 = *puVar9;
  bVar7 = (byte)puVar9;
  *(byte *)puVar9 = (byte)*puVar9 + bVar7;
  *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(cVar18,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(cVar18,unaff_BL))) + cVar15
       + CARRY1((byte)uVar19,bVar7);
  *puVar9 = *puVar9 ^ (uint)puVar9;
  *(byte *)((longlong)puVar9 + -0x7d) = *(byte *)((longlong)puVar9 + -0x7d) + bVar7;
  *(char *)puVar16 = *(char *)puVar16 + unaff_R12B;
  *(byte *)puVar9 = (byte)*puVar9 + cVar15;
  *(byte *)puVar9 = (byte)*puVar9 + bVar7;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

