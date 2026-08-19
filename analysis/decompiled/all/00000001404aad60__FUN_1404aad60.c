// Function: FUN_1404aad60
// Addr: 1404aad60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aad91) overlaps instruction at (ram,0x0001404aad8d)
    */

void FUN_1404aad60(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *in_RAX;
  undefined7 uVar3;
  char *pcVar4;
  char cVar5;
  char unaff_BH;
  uint *unaff_RDI;
  bool in_SF;
  bool bVar6;
  
  cVar5 = (char)param_2;
  bVar6 = false;
  if (in_SF) {
    uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
    cVar1 = (char)in_RAX + (char)param_1;
    pcVar4 = (char *)CONCAT71(uVar3,cVar1);
    param_1 = param_1 + -1;
    if (param_1 != (char *)0x0 && cVar1 != '\0') {
      *unaff_RDI = *unaff_RDI & (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar2 = (char)((ulonglong)in_RAX >> 8);
    *param_1 = *param_1 + cVar2;
    *param_2 = *param_2 + cVar1;
    *pcVar4 = *pcVar4 + cVar1;
    if (*pcVar4 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar1 = cVar1 + cVar2;
    in_RAX = (char *)CONCAT71(uVar3,cVar1);
    bVar6 = cVar1 < '\0';
  }
  if (bVar6) {
    cVar5 = cVar5 + unaff_BH;
    bVar6 = false;
    if (cVar5 < '\0') {
      uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
      cVar1 = (char)in_RAX + (char)param_1;
      pcVar4 = (char *)CONCAT71(uVar3,cVar1);
      param_1 = param_1 + -1;
      if (param_1 != (char *)0x0 && cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cVar2 = (char)((ulonglong)in_RAX >> 8);
      *param_1 = *param_1 + cVar2;
      *pcVar4 = *pcVar4 + cVar1;
      cVar1 = cVar1 + cVar2;
      in_RAX = (char *)CONCAT71(uVar3,cVar1);
      bVar6 = cVar1 < '\0';
      goto code_r0x0001404aad81;
    }
code_r0x0001404aad85:
    if (bVar6) {
      pcVar4 = param_1 + -1;
      if (pcVar4 != (char *)0x0 && (char)((char)in_RAX + (char)param_1) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *pcVar4 = *pcVar4 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
code_r0x0001404aad81:
    if (bVar6) {
      cVar5 = cVar5 + unaff_BH;
      bVar6 = cVar5 < '\0';
      goto code_r0x0001404aad85;
    }
    cVar5 = ((byte)in_RAX ^ 6) + (char)((ulonglong)in_RAX >> 8);
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5);
  }
  bVar6 = true;
  if ((POPCOUNT(cVar5) & 1U) != 0) {
    cVar5 = (char)((ulonglong)in_RAX >> 8);
    *(char *)unaff_RDI = (char)*unaff_RDI + cVar5;
    bVar6 = false;
    if ((POPCOUNT((char)*unaff_RDI) & 1U) != 0) goto code_r0x0001404aada9;
    *in_RAX = *in_RAX + unaff_BH;
    *param_1 = *param_1;
    *in_RAX = *in_RAX + (char)in_RAX;
    cVar5 = (char)in_RAX + cVar5;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5);
    bVar6 = (POPCOUNT(cVar5) & 1U) == 0;
  }
  if (bVar6) {
    halt_baddata();
  }
  *(char *)unaff_RDI = (char)*unaff_RDI + (char)((ulonglong)in_RAX >> 8);
  bVar6 = (POPCOUNT((char)*unaff_RDI) & 1U) == 0;
code_r0x0001404aada9:
  if (bVar6) {
    *in_RAX = *in_RAX + unaff_BH;
    *param_1 = *param_1;
    *(char *)unaff_RDI = (char)*unaff_RDI + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

