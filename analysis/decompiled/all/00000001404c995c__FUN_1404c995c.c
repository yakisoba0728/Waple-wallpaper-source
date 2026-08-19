// Function: FUN_1404c995c
// Addr: 1404c995c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c995c(int *param_1,uint *param_2)

{
  uint uVar1;
  char *in_RAX;
  char *pcVar2;
  char cVar4;
  char unaff_BL;
  int *unaff_RDI;
  char in_R11B;
  char unaff_R12B;
  int *piVar3;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  *param_2 = *param_2 & 0xe7003221;
  *in_RAX = *in_RAX + cVar4;
  pcVar2 = (char *)(ulonglong)(uint)(int)(short)in_RAX;
  *(char *)param_1 = (char)*param_1 + unaff_R12B;
  *pcVar2 = *pcVar2 + (char)in_RAX;
  pcVar2[-0x41ffcddf] = pcVar2[-0x41ffcddf] + cVar4;
  *param_2 = *param_2 & 0xe7003221;
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_1 >> 8);
  uVar1 = (uint)(short)in_RAX;
  piVar3 = (int *)(ulonglong)uVar1;
  *(char *)param_1 = (char)*param_1 + in_R11B;
  *unaff_RDI = *unaff_RDI - uVar1;
  *(char *)piVar3 = (char)*piVar3 + unaff_BL;
  *piVar3 = *piVar3 + uVar1;
  *param_1 = *param_1 + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

