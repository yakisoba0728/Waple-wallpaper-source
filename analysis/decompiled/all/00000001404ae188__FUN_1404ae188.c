// Function: FUN_1404ae188
// Addr: 1404ae188
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae188(char *param_1)

{
  char *pcVar1;
  int *piVar2;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  int unaff_ESI;
  
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x57);
  *pcVar1 = *pcVar1 - (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + in_AH;
  piVar2 = (int *)(param_1 + 0x11f01300);
  *piVar2 = *piVar2 + unaff_ESI;
  if (param_1 == (char *)0x1 || *piVar2 == 0) {
    bRam000000014abaed5b = bRam000000014abaed5b >> 1 | bRam000000014abaed5b << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

