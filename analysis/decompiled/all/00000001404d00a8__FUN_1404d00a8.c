// Function: FUN_1404d00a8
// Addr: 1404d00a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d00a8(char *param_1,undefined1 *param_2)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  char cVar6;
  int in_EAX;
  uint uVar4;
  char *pcVar7;
  char cVar8;
  longlong unaff_RDI;
  char unaff_R12B;
  char *pcVar5;
  
  cVar8 = (char)param_2;
  uVar4 = in_EAX + 0x90000774;
  pcVar5 = (char *)(ulonglong)uVar4;
  cVar3 = (char)uVar4;
  if (uVar4 == 0) {
    *param_1 = *param_1 + unaff_R12B;
    *param_2 = *param_2;
    cRam000000007b004032 = cRam000000007b004032 + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (char *)(unaff_RDI + -0x37ffc08c);
  cVar6 = (char)(uVar4 >> 8);
  *pcVar1 = *pcVar1 + cVar6;
  pcVar7 = param_1 + -1;
  if (pcVar7 == (char *)0x0 || *pcVar1 == '\0') {
    *pcVar7 = *pcVar7 + cVar6;
    *pcVar5 = *pcVar5 + cVar3;
    pcVar1 = pcVar5 + -0x58ffc08c;
    *pcVar1 = *pcVar1 + cVar8;
    if (*pcVar1 != '\0') {
      cVar3 = cVar3 + (char)pcVar7;
      param_1 = param_1 + -2;
      if (param_1 == (char *)0x0 || cVar3 == '\0') {
        *param_1 = *param_1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      piVar2 = (int *)((ulonglong)CONCAT31((int3)(uVar4 >> 8),cVar3) * 2 + 0x11);
      *piVar2 = *piVar2 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar7 = *pcVar7 + unaff_R12B;
  }
  else {
    piVar2 = (int *)((longlong)pcVar5 * 2 + 0x21);
    *piVar2 = *piVar2 + -1;
  }
  *pcVar5 = *pcVar5 + cVar3;
  pcVar5[0x7b00401e] = pcVar5[0x7b00401e] + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

