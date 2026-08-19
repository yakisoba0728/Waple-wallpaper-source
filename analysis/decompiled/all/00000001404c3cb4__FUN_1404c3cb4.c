// Function: FUN_1404c3cb4
// Addr: 1404c3cb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3cb4(char *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  char *pcVar2;
  int *piVar3;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  char unaff_R12B;
  undefined7 uVar4;
  
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar2 = (char *)CONCAT71(uVar4,0x3b);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar2 = *pcVar2 + ';';
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
  piVar3 = (int *)CONCAT71(uVar4,*(undefined1 *)
                                  (CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3b));
  uVar1 = (int)piVar3 - *piVar3;
  pcVar2 = (char *)CONCAT71((uint7)(uint3)(uVar1 - *(int *)(ulonglong)uVar1 >> 8),0x3b);
  *param_1 = *param_1 + unaff_R12B;
  *unaff_RSI = *unaff_RSI + ';';
  *pcVar2 = *pcVar2 + ';';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

