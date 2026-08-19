// Function: FUN_1404c01ec
// Addr: 1404c01ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c01ff) overlaps instruction at (ram,0x0001404c01fe)
    */

void FUN_1404c01ec(longlong param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  ulonglong in_RAX;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  char cVar11;
  byte *pbVar9;
  undefined6 uVar12;
  longlong lVar10;
  char cVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint uVar16;
  char *unaff_RSI;
  bool bVar17;
  int unaff_retaddr;
  undefined1 auStackX_8 [32];
  
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar14 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar13 = (char)((ulonglong)param_2 >> 8);
  pcVar6 = (char *)(in_RAX ^ 0x29);
  cRam00000001524c0e7d = cRam00000001524c0e7d + (char)((ulonglong)param_1 >> 8);
  *param_2 = *param_2 + (int)auStackX_8;
  cVar3 = (char)pcVar6;
  *unaff_RSI = *unaff_RSI + cVar3;
  pbVar9 = (byte *)(param_1 + -1);
  if (pbVar9 == (byte *)0x0 || *unaff_RSI == '\0') {
    *(char *)param_2 = (char)*param_2;
    *pcVar6 = *pcVar6 + cVar3;
    *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) & (uint)param_2;
    bVar17 = false;
    pbVar7 = (byte *)CONCAT71((int7)(in_RAX >> 8),cVar3);
  }
  else {
    bVar2 = *pbVar9;
    bVar4 = (byte)(in_RAX >> 8);
    *pbVar9 = *pbVar9 + bVar4;
    uVar5 = (uint)CARRY1(bVar2,bVar4);
    uVar16 = (uint)pcVar6 + *(uint *)((longlong)pcVar6 * 2);
    bVar17 = CARRY4((uint)pcVar6,*(uint *)((longlong)pcVar6 * 2)) || CARRY4(uVar16,uVar5);
    pbVar7 = (byte *)(ulonglong)(uVar16 + uVar5);
  }
  uVar16 = (int)unaff_RSI + *(int *)pbVar7 + (uint)bVar17;
  *pbVar9 = *pbVar9 | (byte)((ulonglong)pbVar7 >> 8);
  *pbVar9 = *pbVar9 + unaff_BL;
  bVar2 = *pbVar7;
  *pbVar7 = *pbVar7 - (byte)pbVar7;
  uVar5 = ((int)pbVar7 + -0x1000281a) - (uint)(bVar2 < (byte)pbVar7);
  pcVar6 = (char *)(ulonglong)uVar5;
  piVar1 = (int *)((longlong)pcVar6 * 2 + 0x21);
  *piVar1 = *piVar1 + (int)pbVar9;
  *pcVar6 = *pcVar6 + unaff_BH;
  *(char *)(ulonglong)uVar16 = *(char *)(ulonglong)uVar16 + (char)(uVar5 >> 8);
  uVar5 = (int)(short)uVar5 | *(uint *)(ulonglong)(uint)(int)(short)uVar5;
  pbVar7 = (byte *)(ulonglong)uVar5;
  cVar3 = (char)pbVar9;
  *pbVar7 = *pbVar7 + cVar3;
  bVar2 = *pbVar7;
  bVar4 = (byte)uVar5;
  *pbVar7 = *pbVar7 - bVar4;
  uVar12 = (undefined6)((ulonglong)pbVar9 >> 0x10);
  cVar11 = ((char)((ulonglong)pbVar9 >> 8) - *pbVar7) - (bVar2 < bVar4);
  *pbVar7 = *pbVar7 + cVar13;
  piVar1 = (int *)((longlong)pbVar7 * 2 + 0x21);
  *piVar1 = *piVar1 + (int)CONCAT62(uVar12,CONCAT11(cVar11,cVar3));
  *pbVar7 = *pbVar7 + bVar4;
  bVar17 = CARRY1(bRam00000001974c2a5b,unaff_BL);
  bRam00000001974c2a5b = bRam00000001974c2a5b + unaff_BL;
  lVar10 = CONCAT62(uVar12,CONCAT11((cVar11 - *pbVar7) - bVar17,cVar3));
  *pbVar7 = *pbVar7 + cVar13;
  piVar1 = (int *)((longlong)pbVar7 * 2 + 0x21);
  iVar8 = (int)lVar10;
  *piVar1 = *piVar1 + iVar8;
  *pbVar7 = *pbVar7 + bVar4;
  bVar2 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar4;
  *(uint *)pbVar7 = (*(int *)pbVar7 - unaff_retaddr) - (uint)CARRY1(bVar2,bVar4);
  cRam00000001504c2a6f = cRam00000001504c2a6f + unaff_BL;
  piVar1 = (int *)((longlong)pbVar7 * 2 + 1);
  *piVar1 = *piVar1 + iVar8;
  uVar5 = uVar5 | uRam00000001480e0d5f;
  pcVar6 = (char *)(ulonglong)uVar5;
  if (lVar10 == 1 || uVar5 == 0) {
    *(undefined1 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(undefined1 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    cVar13 = cVar13 + *pcVar6;
  }
  *pcVar6 = *pcVar6 + (char)uVar5;
  *(uint *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,(char)param_2))) =
       *(uint *)CONCAT44(uVar15,CONCAT22(uVar14,CONCAT11(cVar13,(char)param_2))) & uVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

