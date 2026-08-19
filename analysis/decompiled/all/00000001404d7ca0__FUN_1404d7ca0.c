// Function: FUN_1404d7ca0
// Addr: 1404d7ca0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7ca0(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint *in_RAX;
  char cVar2;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int *piVar3;
  char unaff_R12B;
  bool in_OF;
  
  if (!in_OF) {
    *(char *)(unaff_RDI + 0x7a) = *(char *)(unaff_RDI + 0x7a) + unaff_BH;
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x1f01004d +
                     unaff_RDI * 2);
    *pcVar1 = *pcVar1 + (char)param_1;
    *in_RAX = *in_RAX | (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar3 = (int *)(ulonglong)
                  ((uint)unaff_RDI &
                  *(uint *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x61c80038));
  *param_1 = *param_1 + unaff_R12B;
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) + (char)in_RAX;
  cVar2 = (char)((ulonglong)param_2 >> 8);
  *(char *)((longlong)piVar3 + (longlong)in_RAX) =
       *(char *)((longlong)piVar3 + (longlong)in_RAX) + cVar2;
  *(char *)(unaff_RSI + (longlong)in_RAX) = *(char *)(unaff_RSI + (longlong)in_RAX) + cVar2;
  *piVar3 = *piVar3 + (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + cVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

