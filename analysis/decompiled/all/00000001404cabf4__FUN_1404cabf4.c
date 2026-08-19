// Function: FUN_1404cabf4
// Addr: 1404cabf4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cabf4(char *param_1,char param_2)

{
  undefined3 uVar1;
  char cVar2;
  uint uVar3;
  uint *in_RAX;
  uint *puVar5;
  char *unaff_RSI;
  char unaff_R12B;
  bool in_OF;
  char *pcVar4;
  
  if (!in_OF) {
    uVar3 = ((uint)in_RAX ^ *in_RAX) - 0x33c3;
    pcVar4 = (char *)(ulonglong)uVar3;
    *param_1 = *param_1 + (char)(uVar3 >> 8);
    *pcVar4 = *pcVar4 + (char)uVar3;
    *pcVar4 = *pcVar4 + param_2;
    return;
  }
  uVar3 = (uint)in_RAX ^ *in_RAX;
  uVar1 = (undefined3)(uVar3 >> 8);
  cVar2 = (char)uVar3 + -0x55;
  pcVar4 = (char *)(ulonglong)CONCAT31(uVar1,cVar2);
  *param_1 = *param_1 + unaff_R12B;
  *unaff_RSI = *unaff_RSI + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  cVar2 = in(4);
  uVar3 = CONCAT31(uVar1,cVar2);
  puVar5 = (uint *)(ulonglong)uVar3;
  *(char *)puVar5 = (char)*puVar5 + cVar2;
  if ((char)*puVar5 != '\0') {
    *(char *)puVar5 = (char)*puVar5 + cVar2;
    *puVar5 = *puVar5 | uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

