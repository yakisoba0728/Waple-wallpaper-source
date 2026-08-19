// Function: FUN_14049f694
// Addr: 14049f694
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f694(char param_1,int *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  char cVar2;
  undefined3 uVar3;
  undefined2 uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint in_EAX;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int *piVar11;
  char *pcVar12;
  uint *puVar14;
  char *unaff_RBX;
  int **ppiVar16;
  char *unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  char in_AF;
  uint *unaff_retaddr;
  undefined1 auStackX_8 [32];
  int *piStack_8;
  byte *pbVar13;
  byte bVar15;
  
  uVar8 = in_EAX | 0x4005264;
  piVar11 = (int *)((ulonglong)uVar8 ^ 0x58);
  cVar5 = (char)param_2;
  *(char *)((longlong)piVar11 + -0x6d) = *(char *)((longlong)piVar11 + -0x6d) + cVar5;
  iVar1 = *piVar11;
  iVar9 = (int)piVar11;
  *piVar11 = *piVar11 + iVar9;
  if (SCARRY4(iVar1,iVar9) != *piVar11 < 0) {
    piVar11 = (int *)((ulonglong)param_2 & 0xffffffff);
    *piVar11 = *piVar11 + (int)param_2;
    piVar11 = (int *)((ulonglong)piVar11 ^ 0x92);
    *piVar11 = *piVar11 + (int)piVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *piVar11 = *piVar11 + iVar9;
  cVar2 = *unaff_RSI;
  uVar3 = (undefined3)(uVar8 >> 8);
  uVar7 = CONCAT31(uVar3,cVar2);
  piVar11 = (int *)(ulonglong)uVar7;
  *param_4 = *param_4;
  *(char *)piVar11 = (char)*piVar11 + cVar2;
  *(char *)((longlong)piVar11 + -0x6d) = *(char *)((longlong)piVar11 + -0x6d) + cVar5;
  iVar1 = *piVar11;
  *piVar11 = *piVar11 + uVar7;
  if (SCARRY4(iVar1,uVar7) == *piVar11 < 0) {
    *piVar11 = *piVar11 + uVar7;
    cVar2 = (char)*(uint *)(unaff_RSI + 1);
    pcVar12 = (char *)(ulonglong)CONCAT31(uVar3,cVar2);
    *param_4 = *param_4;
    *pcVar12 = *pcVar12 + param_1;
    *pcVar12 = *pcVar12 + cVar2;
    bVar6 = in(0x50);
    pbVar13 = (byte *)(ulonglong)CONCAT31(uVar3,bVar6);
    bVar15 = *pbVar13;
    *pbVar13 = *pbVar13 + bVar6;
    if (*pbVar13 == 0) {
      uVar4 = (undefined2)(uVar8 >> 0x10);
      bVar15 = ((char)*pbVar13 < '\0') << 7 | 0x40U | in_AF << 4 |
               ((POPCOUNT(*pbVar13) & 1U) == 0) << 2 | 2 | CARRY1(bVar15,bVar6);
      uVar7 = CONCAT22(uVar4,CONCAT11(bVar15,bVar6));
      puVar14 = (uint *)(ulonglong)uVar7;
      *puVar14 = *puVar14 + uVar7;
      *(byte *)puVar14 = (char)*puVar14 + bVar6;
      *(char *)((longlong)puVar14 + -0x61) = *(char *)((longlong)puVar14 + -0x61) + bVar15;
      uVar8 = *puVar14;
      *puVar14 = *puVar14 + uVar7;
      uVar8 = CONCAT22(uVar4,CONCAT11(((int)*puVar14 < 0) << 7 | (*puVar14 == 0) << 6 | in_AF << 4 |
                                      ((POPCOUNT(*puVar14 & 0xff) & 1U) == 0) << 2 | 2U |
                                      CARRY4(uVar8,uVar7),bVar6));
      *(int *)(ulonglong)uVar8 = *(int *)(ulonglong)uVar8 + uVar8;
      *param_4 = *param_4 + bVar6;
      *unaff_RDI = *unaff_RDI + param_1;
      sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar13 = *pbVar13 + bVar6;
    ppiVar16 = &piStack_8;
    piStack_8 = param_2;
    *pbVar13 = *pbVar13 + bVar6;
    piVar11 = (int *)((ulonglong)CONCAT31(uVar3,bVar6) ^ 0x58);
    *(char *)((longlong)piVar11 + -0x6d) = *(char *)((longlong)piVar11 + -0x6d) + cVar5;
    iVar1 = *piVar11;
    iVar9 = (int)piVar11;
    *piVar11 = *piVar11 + iVar9;
    if (SCARRY4(iVar1,iVar9) == *piVar11 < 0) {
      *piVar11 = *piVar11 + iVar9;
      *param_4 = *param_4 + unaff_RSI[2];
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_retaddr = (uint *)((ulonglong)param_2 & 0xffffffff);
    param_2 = piVar11;
  }
  else {
    if (*piVar11 != 0) {
      *(char *)param_2 = (char)*param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *piVar11 = *piVar11 + uVar7;
    ppiVar16 = (int **)auStackX_8;
    *param_4 = *param_4 + (char)auStackX_8;
    cVar5 = (char)unaff_retaddr;
    *(char *)unaff_retaddr = (char)*unaff_retaddr + cVar5;
    *(char *)((longlong)param_2 * 5) =
         *(char *)((longlong)param_2 * 5) + (char)((ulonglong)param_2 >> 8);
    uVar8 = *unaff_retaddr;
    uVar7 = (uint)unaff_retaddr;
    *unaff_retaddr = *unaff_retaddr + uVar7;
    if (!CARRY4(uVar8,uVar7) && *unaff_retaddr != 0) {
      *param_4 = *param_4 + cVar5;
      uVar7 = uVar7 & *(uint *)(unaff_RSI + 1);
      *unaff_RBX = *unaff_RBX + (char)(uVar7 >> 8);
      uVar10 = (ulonglong)uVar7 ^ 7;
      *(char *)param_2 = (char)*param_2 + cVar5 + '\x01';
      pbVar13 = (byte *)(in_FS_OFFSET + uVar10);
      *pbVar13 = *pbVar13 | (byte)uVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *unaff_retaddr = *unaff_retaddr + (int)unaff_retaddr;
  pcVar12 = (char *)*ppiVar16;
  *param_4 = *param_4 + (char)(ppiVar16 + 1);
  *pcVar12 = *pcVar12 + (char)pcVar12;
  *pcVar12 = *pcVar12 + (char)((ulonglong)pcVar12 >> 8);
  piVar11 = (int *)((ulonglong)param_2 & 0xffffffff);
  *piVar11 = *piVar11 + (int)param_2;
  piVar11 = (int *)((ulonglong)piVar11 ^ 0x92);
  *piVar11 = *piVar11 + (int)piVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

