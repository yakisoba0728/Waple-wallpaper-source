// Function: FUN_14049f6a4
// Addr: 14049f6a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f6a4(char param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined8 in_RAX;
  undefined7 uVar13;
  char *pcVar9;
  uint *puVar11;
  char *unaff_RBX;
  char **ppcVar15;
  char *unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  char in_AF;
  uint *unaff_retaddr;
  undefined1 auStackX_8 [32];
  char *pcStack_8;
  byte *pbVar10;
  byte bVar12;
  undefined6 uVar14;
  
  cVar3 = *unaff_RSI;
  uVar13 = (undefined7)((ulonglong)in_RAX >> 8);
  piVar8 = (int *)CONCAT71(uVar13,cVar3);
  *param_4 = *param_4;
  *(char *)piVar8 = (char)*piVar8 + cVar3;
  *(char *)((longlong)piVar8 + -0x6d) = *(char *)((longlong)piVar8 + -0x6d) + (char)param_2;
  iVar1 = *piVar8;
  iVar6 = (int)piVar8;
  *piVar8 = *piVar8 + iVar6;
  if (SCARRY4(iVar1,iVar6) == *piVar8 < 0) {
    *piVar8 = *piVar8 + iVar6;
    cVar3 = (char)*(uint *)(unaff_RSI + 1);
    pcVar9 = (char *)CONCAT71(uVar13,cVar3);
    *param_4 = *param_4;
    *pcVar9 = *pcVar9 + param_1;
    *pcVar9 = *pcVar9 + cVar3;
    bVar4 = in(0x50);
    pbVar10 = (byte *)CONCAT71(uVar13,bVar4);
    bVar12 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar4;
    if (*pbVar10 == 0) {
      uVar14 = (undefined6)((ulonglong)in_RAX >> 0x10);
      bVar12 = ((char)*pbVar10 < '\0') << 7 | 0x40U | in_AF << 4 |
               ((POPCOUNT(*pbVar10) & 1U) == 0) << 2 | 2 | CARRY1(bVar12,bVar4);
      puVar11 = (uint *)CONCAT62(uVar14,CONCAT11(bVar12,bVar4));
      uVar5 = (uint)puVar11;
      *puVar11 = *puVar11 + uVar5;
      *(byte *)puVar11 = (char)*puVar11 + bVar4;
      *(char *)((longlong)puVar11 + -0x61) = *(char *)((longlong)puVar11 + -0x61) + bVar12;
      uVar2 = *puVar11;
      *puVar11 = *puVar11 + uVar5;
      piVar8 = (int *)CONCAT62(uVar14,CONCAT11(((int)*puVar11 < 0) << 7 | (*puVar11 == 0) << 6 |
                                               in_AF << 4 |
                                               ((POPCOUNT(*puVar11 & 0xff) & 1U) == 0) << 2 | 2U |
                                               CARRY4(uVar2,uVar5),bVar4));
      *piVar8 = *piVar8 + (int)piVar8;
      *param_4 = *param_4 + bVar4;
      *unaff_RDI = *unaff_RDI + param_1;
      sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar10 = *pbVar10 + bVar4;
    ppcVar15 = &pcStack_8;
    pcStack_8 = param_2;
    *pbVar10 = *pbVar10 + bVar4;
    piVar8 = (int *)(CONCAT71(uVar13,bVar4) ^ 0x58);
    *(char *)((longlong)piVar8 + -0x6d) = *(char *)((longlong)piVar8 + -0x6d) + (char)param_2;
    iVar1 = *piVar8;
    iVar6 = (int)piVar8;
    *piVar8 = *piVar8 + iVar6;
    if (SCARRY4(iVar1,iVar6) == *piVar8 < 0) {
      *piVar8 = *piVar8 + iVar6;
      *param_4 = *param_4 + unaff_RSI[2];
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_retaddr = (uint *)((ulonglong)param_2 & 0xffffffff);
    param_2 = (char *)((ulonglong)piVar8 & 0xffffffff);
  }
  else {
    if (*piVar8 != 0) {
      *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *piVar8 = *piVar8 + iVar6;
    ppcVar15 = (char **)auStackX_8;
    *param_4 = *param_4 + (char)auStackX_8;
    cVar3 = (char)unaff_retaddr;
    *(char *)unaff_retaddr = (char)*unaff_retaddr + cVar3;
    *(char *)((longlong)param_2 * 5) =
         *(char *)((longlong)param_2 * 5) + (char)((ulonglong)param_2 >> 8);
    uVar2 = *unaff_retaddr;
    uVar5 = (uint)unaff_retaddr;
    *unaff_retaddr = *unaff_retaddr + uVar5;
    if (!CARRY4(uVar2,uVar5) && *unaff_retaddr != 0) {
      *param_4 = *param_4 + cVar3;
      uVar5 = uVar5 & *(uint *)(unaff_RSI + 1);
      *unaff_RBX = *unaff_RBX + (char)(uVar5 >> 8);
      uVar7 = (ulonglong)uVar5 ^ 7;
      *param_2 = *param_2 + cVar3 + '\x01';
      pbVar10 = (byte *)(in_FS_OFFSET + uVar7);
      *pbVar10 = *pbVar10 | (byte)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *unaff_retaddr = *unaff_retaddr + (int)unaff_retaddr;
  pcVar9 = *ppcVar15;
  *param_4 = *param_4 + (char)(ppcVar15 + 1);
  *pcVar9 = *pcVar9 + (char)pcVar9;
  *pcVar9 = *pcVar9 + (char)((ulonglong)pcVar9 >> 8);
  piVar8 = (int *)((ulonglong)param_2 & 0xffffffff);
  *piVar8 = *piVar8 + (int)param_2;
  piVar8 = (int *)((ulonglong)piVar8 ^ 0x92);
  *piVar8 = *piVar8 + (int)piVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

