// Function: FUN_1404a98dc
// Addr: 1404a98dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a98ff) overlaps instruction at (ram,0x0001404a98fd)
    */

void FUN_1404a98dc(char *param_1,char *param_2)

{
  undefined3 uVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 in_RAX;
  uint *puVar5;
  char *pcVar6;
  int *piVar7;
  ulonglong uVar8;
  char *pcVar9;
  char cVar10;
  char cVar11;
  undefined6 uVar12;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char cVar13;
  int unaff_ESP;
  longlong unaff_RBP;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar11 = (char)((ulonglong)param_2 >> 8);
  cVar10 = (char)param_2;
  puVar5 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(char)in_RAX));
  uVar4 = (uint)puVar5 | *puVar5;
  uVar1 = (undefined3)(uVar4 >> 8);
  cVar2 = ((byte)uVar4 ^ (byte)(uVar4 >> 8)) + 0x62;
  pcVar6 = (char *)(ulonglong)CONCAT31(uVar1,cVar2);
  cVar13 = (char)unaff_ESP;
  *param_1 = *param_1 + cVar13;
  *pcVar6 = *pcVar6 + cVar2;
  *pcVar6 = *pcVar6 + cVar11;
  pcVar9 = param_1 + -1;
  if (pcVar9 == (char *)0x0 || *pcVar6 == '\0') {
    pcVar6[0x6214000c] = pcVar6[0x6214000c] + cVar2;
    *pcVar9 = *pcVar9 + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001704a9f59 = cRam00000001704a9f59 + cVar2;
  if (param_1 + -2 != (char *)0x0) {
    *pcVar6 = *pcVar6 + cVar11;
  }
  *(char *)(unaff_RBP + -0x1e) = *(char *)(unaff_RBP + -0x1e) + (char)(param_1 + -2);
  piVar7 = (int *)(ulonglong)CONCAT31(uVar1,cRam3000000021004a1d);
  param_1 = param_1 + -3;
  if (param_1 == (char *)0x0) {
    *(undefined1 *)(unaff_RBP + -0x1e) = *(undefined1 *)(unaff_RBP + -0x1e);
    uVar8 = (ulonglong)CONCAT31(uVar1,uRam0500020521004a1d) ^ 8;
    pcVar6 = (char *)(uVar8 - 0x1d);
    *pcVar6 = *pcVar6 + cVar11;
    cVar2 = (char)uVar8;
    piVar7 = (int *)(ulonglong)CONCAT31(uVar1,cVar2);
    if (cVar2 < '\0') goto code_r0x0001404a9951;
code_r0x0001404a9932:
    *param_1 = *param_1 + cVar13;
    *(char *)piVar7 = (char)*piVar7 + (char)piVar7;
  }
  else {
    cRam00000001b04aa15d = cRam00000001b04aa15d + cRam3000000021004a1d;
    if (param_1 != (char *)0x0) {
      *param_2 = *param_2 + unaff_BH;
      uVar3 = in(0xc);
      piVar7 = (int *)(ulonglong)CONCAT31(uVar1,uVar3);
      *(char *)((longlong)piVar7 + 0x1f) = *(char *)((longlong)piVar7 + 0x1f) + unaff_BH;
      goto code_r0x0001404a9932;
    }
  }
  *(char *)((longlong)piVar7 + -0x1d) = *(char *)((longlong)piVar7 + -0x1d) + cVar11;
  if ((char)piVar7 < '\0') {
    *(int *)((longlong)piVar7 * 2) = *(int *)((longlong)piVar7 * 2) + unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)piVar7;
  *param_2 = *param_2 + cVar10;
  piVar7 = (int *)((ulonglong)piVar7 & 0xffffffffffffff00);
  cVar11 = cVar11 + *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(char *)CONCAT62(uVar12,CONCAT11(cVar11,cVar10)) =
       *(char *)CONCAT62(uVar12,CONCAT11(cVar11,cVar10)) + cVar10;
code_r0x0001404a9951:
  *piVar7 = *piVar7 + unaff_ESP;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_1;
  *param_1 = *param_1 + (char)piVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

