// Function: FUN_1404a98e8
// Addr: 1404a98e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a98ff) overlaps instruction at (ram,0x0001404a98fd)
    */

void FUN_1404a98e8(char *param_1,char *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 in_RAX;
  undefined7 uVar6;
  int *piVar4;
  ulonglong uVar5;
  char *pcVar7;
  char cVar8;
  char cVar9;
  undefined6 uVar10;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char cVar11;
  int unaff_ESP;
  longlong unaff_RBP;
  char in_CF;
  char *pcVar3;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar9 = (char)((ulonglong)param_2 >> 8);
  cVar8 = (char)param_2;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar1 = (char)in_RAX + 'b' + in_CF;
  pcVar3 = (char *)CONCAT71(uVar6,cVar1);
  cVar11 = (char)unaff_ESP;
  *param_1 = *param_1 + cVar11;
  *pcVar3 = *pcVar3 + cVar1;
  *pcVar3 = *pcVar3 + cVar9;
  pcVar7 = param_1 + -1;
  if (pcVar7 == (char *)0x0 || *pcVar3 == '\0') {
    pcVar3[0x6214000c] = pcVar3[0x6214000c] + cVar1;
    *pcVar7 = *pcVar7 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001704a9f59 = cRam00000001704a9f59 + cVar1;
  if (param_1 + -2 != (char *)0x0) {
    *pcVar3 = *pcVar3 + cVar9;
  }
  *(char *)(unaff_RBP + -0x1e) = *(char *)(unaff_RBP + -0x1e) + (char)(param_1 + -2);
  piVar4 = (int *)CONCAT71(uVar6,cRam3000000021004a1d);
  param_1 = param_1 + -3;
  if (param_1 == (char *)0x0) {
    *(undefined1 *)(unaff_RBP + -0x1e) = *(undefined1 *)(unaff_RBP + -0x1e);
    uVar5 = CONCAT71(uVar6,uRam0500020521004a1d) ^ 8;
    pcVar3 = (char *)(uVar5 - 0x1d);
    *pcVar3 = *pcVar3 + cVar9;
    cVar1 = (char)uVar5;
    piVar4 = (int *)CONCAT71(uVar6,cVar1);
    if (cVar1 < '\0') goto code_r0x0001404a9951;
code_r0x0001404a9932:
    *param_1 = *param_1 + cVar11;
    *(char *)piVar4 = (char)*piVar4 + (char)piVar4;
  }
  else {
    cRam00000001b04aa15d = cRam00000001b04aa15d + cRam3000000021004a1d;
    if (param_1 != (char *)0x0) {
      *param_2 = *param_2 + unaff_BH;
      uVar2 = in(0xc);
      piVar4 = (int *)CONCAT71(uVar6,uVar2);
      *(char *)((longlong)piVar4 + 0x1f) = *(char *)((longlong)piVar4 + 0x1f) + unaff_BH;
      goto code_r0x0001404a9932;
    }
  }
  *(char *)((longlong)piVar4 + -0x1d) = *(char *)((longlong)piVar4 + -0x1d) + cVar9;
  if ((char)piVar4 < '\0') {
    *(int *)((longlong)piVar4 * 2) = *(int *)((longlong)piVar4 * 2) + unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)piVar4;
  *param_2 = *param_2 + cVar8;
  piVar4 = (int *)((ulonglong)piVar4 & 0xffffffffffffff00);
  cVar9 = cVar9 + *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
  *(char *)CONCAT62(uVar10,CONCAT11(cVar9,cVar8)) =
       *(char *)CONCAT62(uVar10,CONCAT11(cVar9,cVar8)) + cVar8;
code_r0x0001404a9951:
  *piVar4 = *piVar4 + unaff_ESP;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_1;
  *param_1 = *param_1 + (char)piVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

