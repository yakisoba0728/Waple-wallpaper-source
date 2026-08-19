// Function: FUN_1404d7f80
// Addr: 1404d7f80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d7fac) overlaps instruction at (ram,0x0001404d7fa7)
    */

void FUN_1404d7f80(char *param_1,char *param_2)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar6;
  char cVar7;
  uint uVar8;
  int *in_RAX;
  char *pcVar9;
  int *unaff_RBX;
  char *unaff_RSI;
  char cVar4;
  char cVar5;
  
  *unaff_RBX = *unaff_RBX + (int)param_2;
  uVar8 = (int)in_RAX + *in_RAX;
  *param_2 = *param_2 + (char)uVar8;
  *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + (char)uVar8;
  uRam00000001b8527f94 = uRam00000001b8527f94 & uVar8;
  uVar8 = uVar8 + 0x41bf8000;
  pcVar9 = (char *)(ulonglong)uVar8;
  piVar1 = unaff_RBX + -0x13ffef90;
  iVar6 = *piVar1;
  *(char *)piVar1 = (char)*piVar1 + (char)param_2;
  if ((char)*piVar1 == '\0' || SCARRY1((char)iVar6,(char)param_2) != (char)*piVar1 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)(uVar8 >> 8);
  *param_2 = *param_2 + (char)uVar8;
  *pcVar9 = *pcVar9 + (char)uVar8;
  if (*pcVar9 < '\0') {
    pcVar9 = (char *)((ulonglong)unaff_RBX & 0xffffffff);
    unaff_RBX = (int *)(ulonglong)uVar8;
  }
  pcVar2 = pcVar9 + -0x6cffbe41;
  cVar7 = (char)pcVar9;
  cVar3 = *pcVar2;
  *pcVar2 = *pcVar2 + cVar7;
  cVar4 = *pcVar2;
  cVar5 = *pcVar2;
  *param_1 = *param_1;
  if (cVar5 != '\0' && SCARRY1(cVar3,cVar7) == cVar4 < '\0') {
    *param_1 = *param_1 + (char)((ulonglong)pcVar9 >> 8);
    *unaff_RSI = *unaff_RSI + cVar7 + '\x02';
    return;
  }
  *unaff_RBX = *unaff_RBX + (int)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

