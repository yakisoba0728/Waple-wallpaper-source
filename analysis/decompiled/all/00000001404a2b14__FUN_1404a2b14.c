// Function: FUN_1404a2b14
// Addr: 1404a2b14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a2b33) overlaps instruction at (ram,0x0001404a2b32)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a2c12) */

void FUN_1404a2b14(char *param_1,undefined8 param_2,longlong param_3)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar10;
  uint *in_RAX;
  char *pcVar7;
  int *piVar8;
  byte bVar11;
  char cVar12;
  byte *pbVar13;
  undefined7 uVar15;
  char cVar16;
  byte bVar17;
  undefined2 uVar18;
  undefined4 uVar19;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RBP;
  byte *unaff_RSI;
  ulonglong unaff_RDI;
  char *pcVar20;
  longlong in_R10;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  char acStack_8 [8];
  uint *puVar9;
  longlong lVar14;
  
  uVar19 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar18 = (undefined2)((ulonglong)param_2 >> 0x10);
  bVar17 = (byte)((ulonglong)param_2 >> 8);
  cVar16 = (char)param_2 + (char)*in_RAX;
  *param_1 = *param_1 + (char)in_RAX;
  *in_RAX = *in_RAX & (uint)param_1;
  cVar10 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar10;
  piVar8 = (int *)(param_1 + 0x10f01200);
  *piVar8 = *piVar8 + unaff_EBX;
  pbVar13 = (byte *)(param_1 + -1);
  if (pbVar13 != (byte *)0x0 && *piVar8 != 0) {
    pcVar7 = (char *)((longlong)in_RAX + unaff_RBP * 2);
    *pcVar7 = *pcVar7 + (char)unaff_EBX;
  }
  pbVar1 = (byte *)((longlong)in_RAX + (longlong)unaff_RSI * 2);
  *pbVar1 = *pbVar1 >> 3 | *pbVar1 << 5;
  bVar11 = (byte)pbVar13;
  *(byte *)CONCAT44(uVar19,CONCAT22(uVar18,CONCAT11(bVar17,cVar16))) =
       *(byte *)CONCAT44(uVar19,CONCAT22(uVar18,CONCAT11(bVar17,cVar16))) ^ bVar11;
  *(uint *)((longlong)in_RAX + (longlong)pbVar13) =
       *(uint *)((longlong)in_RAX + (longlong)pbVar13) & (uint)acStack_8;
  pcVar7 = (char *)((longlong)in_RAX + unaff_RDI * 2);
  *pcVar7 = *pcVar7 + cVar10;
  pcVar7 = (char *)(param_3 + unaff_RBP * 2);
  *pcVar7 = *pcVar7 + (char)unaff_EBX;
  acStack_8[in_R10 * 8] = acStack_8[in_R10 * 8] + cVar16;
  pcVar7 = (char *)(unaff_RDI & 0xffffffff);
  pcVar20 = (char *)((ulonglong)in_RAX & 0xffffffff);
  *pcVar7 = *pcVar7 + bVar11;
  uVar3 = (uint)(short)pcVar7;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)((ulonglong)pcVar7 >> 8);
  uVar4 = uVar3 + 0x553ff00;
  pcVar7 = (char *)(ulonglong)uVar4;
  pcVar7[0x2a] = pcVar7[0x2a] + bVar11;
  *pbVar13 = *pbVar13 + (char)auStack_10;
  *pcVar7 = *pcVar7 + (char)uVar4;
  *pcVar7 = *pcVar7 + (char)(uVar4 >> 8);
  pcVar7 = (char *)(ulonglong)(uVar3 + 0xaa7fe00);
  pcVar7[0x2a] = pcVar7[0x2a] + bVar11;
  *pbVar13 = *pbVar13 + (char)auStack_18;
  *pcVar7 = *pcVar7 + bVar11;
  cVar10 = (char)(uVar3 + 0xaa7fe00);
  *pcVar7 = *pcVar7 + cVar10;
  if (*pcVar7 < '\0') {
    iVar6 = uVar3 + 0xc0100d64;
    cVar10 = (char)((uint)iVar6 >> 8) + (char)iVar6;
    uVar3 = CONCAT22((short)((uint)iVar6 >> 0x10),CONCAT11(cVar10,(char)iVar6));
    uVar15 = (undefined7)((ulonglong)pbVar13 >> 8);
    cVar12 = bVar11 - *(char *)CONCAT44(uVar19,CONCAT22(uVar18,CONCAT11(bVar17,cVar16)));
    lVar14 = CONCAT71(uVar15,cVar12);
    *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 & uVar3;
    pcVar7 = (char *)(CONCAT44(unaff_0000001c,unaff_EBX) + lVar14);
    *pcVar7 = *pcVar7 + bVar17;
    pcVar7 = (char *)(CONCAT44(uVar19,CONCAT22(uVar18,CONCAT11(bVar17,cVar16))) + lVar14);
    *pcVar7 = *pcVar7 + cVar10;
    iVar6 = (int)CONCAT71((uint7)(uint3)(uVar3 >> 8),0x67) + 0x5680500;
    cVar2 = (char)iVar6;
    uVar3 = CONCAT22((short)((uint)iVar6 >> 0x10),CONCAT11((char)((uint)iVar6 >> 8) + cVar2,cVar2));
    puVar9 = (uint *)(ulonglong)uVar3;
    cVar10 = *(char *)CONCAT44(uVar19,CONCAT22(uVar18,CONCAT11(bVar17,cVar16)));
    *puVar9 = *puVar9 & uVar3;
    *(char *)puVar9 = (char)*puVar9 + cVar2;
    cVar10 = (cVar12 - cVar10) - *(char *)CONCAT44(uVar19,CONCAT22(uVar18,CONCAT11(bVar17,cVar16)));
    lVar14 = CONCAT71(uVar15,cVar10);
    *(int *)CONCAT44(uVar19,CONCAT22(uVar18,CONCAT11(bVar17,cVar16))) =
         *(int *)CONCAT44(uVar19,CONCAT22(uVar18,CONCAT11(bVar17,cVar16))) + (int)lVar14;
    bVar17 = bVar17 | *(byte *)(lVar14 * 2);
    *(char *)CONCAT44(uVar19,CONCAT22(uVar18,CONCAT11(bVar17,cVar16))) =
         *(char *)CONCAT44(uVar19,CONCAT22(uVar18,CONCAT11(bVar17,cVar16))) + cVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar7 = *pcVar7 + cVar10;
  *pcVar20 = *pcVar20 + (char)pcVar20;
  uVar4 = (uint)(short)pcVar20;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)((ulonglong)pcVar20 >> 8);
  uVar5 = uVar4 + 0x553ff00;
  *(char *)((ulonglong)uVar5 + 0x2a) = *(char *)((ulonglong)uVar5 + 0x2a) + bVar11;
  bVar11 = *pbVar13;
  *pbVar13 = *pbVar13 + (byte)uVar5;
  uVar3 = (uint)CARRY1(bVar11,(byte)uVar5);
  uVar3 = ((uVar4 + 0x436fef6) - uVar3) + 0xff01100 +
          (uint)(uVar5 < 0x11d000a || uVar4 + 0x436fef6 < uVar3);
  piVar8 = (int *)(ulonglong)uVar3;
  param_1 = param_1 + -2;
  if (param_1 == (char *)0x0 || uVar3 == 0) {
    *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) =
         *(byte *)CONCAT44(unaff_0000001c,unaff_EBX) >> 1 |
         *(char *)CONCAT44(unaff_0000001c,unaff_EBX) << 7;
    *param_1 = *param_1;
    *(byte *)((longlong)piVar8 + 7) = *(byte *)((longlong)piVar8 + 7) | (byte)(uVar3 >> 8);
    *unaff_RSI = *unaff_RSI ^ (byte)uVar3;
    *piVar8 = *piVar8 + CONCAT22(uVar18,CONCAT11(bVar17,cVar16));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

