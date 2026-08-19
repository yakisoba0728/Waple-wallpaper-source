// Function: FUN_1404ab830
// Addr: 1404ab830
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ab85e) overlaps instruction at (ram,0x0001404ab85d)
    */

void FUN_1404ab830(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char cVar3;
  undefined8 in_RAX;
  undefined6 uVar4;
  char cVar5;
  char unaff_SPL;
  longlong unaff_RDI;
  char *pcVar2;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  param_1[unaff_RDI] = param_1[unaff_RDI];
  uVar4 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar3 = (char)((ulonglong)in_RAX >> 8) + cVar5;
  cVar1 = in(0x49);
  pcVar2 = (char *)CONCAT71(CONCAT61(uVar4,cVar3),cVar1);
  *param_1 = *param_1 + cVar3;
  *pcVar2 = *pcVar2 + cVar1;
  pcVar2[-0x53fff0cc] = pcVar2[-0x53fff0cc] + cVar1;
  cVar3 = cVar3 + cVar5;
  cVar1 = in(0x49);
  pcVar2 = (char *)CONCAT71(CONCAT61(uVar4,cVar3),cVar1);
  *param_1 = *param_1 + cVar3;
  *param_2 = *param_2 + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  if (*pcVar2 == '\0') {
    *param_4 = *param_4 + unaff_SPL;
  }
  else {
    pcVar2[-0x53fff0cc] = pcVar2[-0x53fff0cc] + cVar1;
    in(0x49);
    *param_1 = *param_1 + cVar3 + cVar5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

