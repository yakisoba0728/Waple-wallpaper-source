// Function: FUN_1404afb64
// Addr: 1404afb64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404afb64(char *param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 in_RAX;
  undefined7 uVar4;
  undefined4 *puVar3;
  char unaff_BL;
  char *unaff_RSI;
  char in_CF;
  bool in_OF;
  undefined1 in_YMM6 [32];
  
  if (!in_OF) {
    uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
    cVar2 = (char)in_RAX + in_CF;
    vunpcklps_avx(in_YMM6,*(undefined1 (*) [32])CONCAT71(uVar4,cVar2));
    puVar3 = (undefined4 *)(CONCAT71(uVar4,cVar2) ^ 0xfa);
    *param_1 = *param_1 + (char)puVar3;
    *unaff_RSI = *unaff_RSI + ((byte)((ulonglong)in_RAX >> 8) | (byte)((uint)*puVar3 >> 8));
    *param_2 = *param_2 + (int)param_2;
    *(char *)param_2 = (char)*param_2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

