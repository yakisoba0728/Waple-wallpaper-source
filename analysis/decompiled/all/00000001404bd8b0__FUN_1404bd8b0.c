// Function: FUN_1404bd8b0
// Addr: 1404bd8b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd8b0(char param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  char *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  int *unaff_RDI;
  char in_CF;
  
  in_RAX[0x15] = in_RAX[0x15] + unaff_BH + in_CF;
  *in_RAX = *in_RAX + param_1;
  uVar2 = (uint)in_RAX & 0x2543a600;
  pcVar1 = (char *)((longlong)unaff_RDI + (longlong)param_2 * 8 + 0x21004b);
  cVar3 = (char)(uVar2 >> 8);
  *pcVar1 = *pcVar1 + cVar3;
  *(undefined1 *)(ulonglong)uVar2 = *(undefined1 *)(ulonglong)uVar2;
  pcVar1 = (char *)((longlong)unaff_RDI + (longlong)param_2 * 8 + 0x5801004b);
  *pcVar1 = *pcVar1 + cVar3;
  cRam0000000042900016 = param_1;
  *param_2 = *param_2 + (char)param_2;
  *unaff_RDI = *unaff_RDI + (int)param_2;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

