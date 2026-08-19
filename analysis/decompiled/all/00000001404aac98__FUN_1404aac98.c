// Function: FUN_1404aac98
// Addr: 1404aac98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aacd2) overlaps instruction at (ram,0x0001404aacd1)
    */
/* WARNING: Removing unreachable block (ram,0x0001404aaccd) */

void FUN_1404aac98(longlong param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 in_RAX;
  undefined7 uVar7;
  longlong lVar6;
  char cVar8;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  char unaff_BH;
  longlong unaff_RBP;
  bool in_ZF;
  bool bVar12;
  
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar8 = (char)param_1;
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  if (in_ZF) {
    cVar2 = (char)in_RAX + cVar8;
    pcVar9 = (char *)(param_1 + -1);
    if (pcVar9 != (char *)0x0 && cVar2 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar9 = *pcVar9 + cVar3;
    *(char *)CONCAT71(uVar7,cVar2) = *(char *)CONCAT71(uVar7,cVar2) + cVar2;
    cVar2 = cVar2 + (char)param_2;
    pcVar9 = (char *)CONCAT71(uVar7,cVar2);
    bVar12 = cVar2 == '\0';
    if (!bVar12) {
      *(char *)(unaff_RBP + 0x75) = *(char *)(unaff_RBP + 0x75) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    bVar12 = false;
    if (!in_ZF) goto code_r0x0001404aacb9;
    cVar2 = (char)in_RAX + cVar8;
    pcVar9 = (char *)CONCAT71(uVar7,cVar2);
    pcVar10 = (char *)(param_1 + -1);
    if (pcVar10 != (char *)0x0 && cVar2 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar10 = *pcVar10 + cVar3;
    *param_2 = *param_2 + cVar2;
    *pcVar9 = *pcVar9 + cVar2;
    bVar12 = *pcVar9 == '\0';
  }
  uVar7 = (undefined7)((ulonglong)pcVar9 >> 8);
  if (bVar12) {
    bVar4 = (byte)((ulonglong)pcVar9 >> 8);
    cVar3 = (char)pcVar9 + cVar8 + -1;
    lVar6 = CONCAT71(uVar7,cVar3);
    pbVar11 = (byte *)(param_1 + -2);
    if (pbVar11 != (byte *)0x0 && cVar3 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar1 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar4;
    uVar5 = (((int)lVar6 - *(int *)(lVar6 * 2)) - (uint)CARRY1(bVar1,bVar4)) + 0x60000634;
    pcVar9 = (char *)(ulonglong)uVar5;
    bVar4 = (byte)uVar5;
    bVar12 = CARRY1(bRam00000001a04ab305,bVar4);
    bRam00000001a04ab305 = bRam00000001a04ab305 + bVar4;
    if (bVar12 || bRam00000001a04ab305 == '\0') {
      if (bRam00000001a04ab305 != '\0') {
        *pcVar9 = *pcVar9 + bVar4;
        pcVar9 = (char *)(((ulonglong)pcVar9 ^ 6) + 0x76);
        *pcVar9 = *pcVar9 + (char)(uVar5 >> 8);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(unaff_RBP + 0x76) = *(char *)(unaff_RBP + 0x76) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar3 = (char)pcVar9 + (char)param_2;
  in_RAX = CONCAT71(uVar7,cVar3);
  bVar12 = cVar3 == '\0';
code_r0x0001404aacb9:
  if (bVar12) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + 0x75) = *(char *)(unaff_RBP + 0x75) + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

