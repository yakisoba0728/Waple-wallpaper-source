// Function: FUN_1404aad3c
// Addr: 1404aad3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aad91) overlaps instruction at (ram,0x0001404aad8d)
    */

void FUN_1404aad3c(char *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  char *in_RAX;
  undefined7 uVar3;
  undefined7 uVar4;
  char *pcVar5;
  char cVar6;
  char unaff_BH;
  uint *unaff_RDI;
  bool bVar7;
  
  uVar4 = (undefined7)((ulonglong)param_2 >> 8);
  cVar1 = (char)in_RAX;
  cRam21004aac48000e78 = cVar1;
  *in_RAX = *in_RAX + cVar1;
  pcVar5 = in_RAX + -0x5dfff188;
  *pcVar5 = *pcVar5 + cVar1;
  if (-1 < *pcVar5) {
    in_RAX[-0x54] = in_RAX[-0x54] + (char)param_1;
    *param_1 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar6 = (char)param_2 + unaff_BH;
  bVar7 = false;
  if (cVar6 < '\0') {
    uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
    cVar1 = cVar1 + (char)param_1;
    pcVar5 = (char *)CONCAT71(uVar3,cVar1);
    param_1 = param_1 + -1;
    if (param_1 != (char *)0x0 && cVar1 != '\0') {
      *unaff_RDI = *unaff_RDI & (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar2 = (char)((ulonglong)in_RAX >> 8);
    *param_1 = *param_1 + cVar2;
    *(char *)CONCAT71(uVar4,cVar6) = *(char *)CONCAT71(uVar4,cVar6) + cVar1;
    *pcVar5 = *pcVar5 + cVar1;
    if (*pcVar5 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    cVar1 = cVar1 + cVar2;
    in_RAX = (char *)CONCAT71(uVar3,cVar1);
    bVar7 = cVar1 < '\0';
  }
  if (bVar7) {
    cVar6 = cVar6 + unaff_BH;
    bVar7 = false;
    if (cVar6 < '\0') {
      uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
      cVar1 = (char)in_RAX + (char)param_1;
      pcVar5 = (char *)CONCAT71(uVar4,cVar1);
      param_1 = param_1 + -1;
      if (param_1 != (char *)0x0 && cVar1 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cVar2 = (char)((ulonglong)in_RAX >> 8);
      *param_1 = *param_1 + cVar2;
      *pcVar5 = *pcVar5 + cVar1;
      cVar1 = cVar1 + cVar2;
      in_RAX = (char *)CONCAT71(uVar4,cVar1);
      bVar7 = cVar1 < '\0';
      goto code_r0x0001404aad81;
    }
code_r0x0001404aad85:
    if (bVar7) {
      pcVar5 = param_1 + -1;
      if (pcVar5 == (char *)0x0 || (char)((char)in_RAX + (char)param_1) == '\0') {
        *pcVar5 = *pcVar5 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
code_r0x0001404aad81:
    if (bVar7) {
      cVar6 = cVar6 + unaff_BH;
      bVar7 = cVar6 < '\0';
      goto code_r0x0001404aad85;
    }
    cVar6 = ((byte)in_RAX ^ 6) + (char)((ulonglong)in_RAX >> 8);
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar6);
  }
  bVar7 = true;
  if ((POPCOUNT(cVar6) & 1U) != 0) {
    cVar1 = (char)((ulonglong)in_RAX >> 8);
    *(char *)unaff_RDI = (char)*unaff_RDI + cVar1;
    bVar7 = false;
    if ((POPCOUNT((char)*unaff_RDI) & 1U) != 0) goto code_r0x0001404aada9;
    *in_RAX = *in_RAX + unaff_BH;
    *param_1 = *param_1;
    *in_RAX = *in_RAX + (char)in_RAX;
    cVar1 = (char)in_RAX + cVar1;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
    bVar7 = (POPCOUNT(cVar1) & 1U) == 0;
  }
  if (bVar7) {
    halt_baddata();
  }
  *(char *)unaff_RDI = (char)*unaff_RDI + (char)((ulonglong)in_RAX >> 8);
  bVar7 = (POPCOUNT((char)*unaff_RDI) & 1U) == 0;
code_r0x0001404aada9:
  if (bVar7) {
    *in_RAX = *in_RAX + unaff_BH;
    *param_1 = *param_1;
    *(char *)unaff_RDI = (char)*unaff_RDI + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

