// Function: FUN_1404c5e24
// Addr: 1404c5e24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5e24(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  undefined8 in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  char *unaff_RSI;
  char in_CF;
  
  *(char *)(unaff_RBP + 0x4c) = *(char *)(unaff_RBP + 0x4c) + unaff_BL + in_CF;
  cVar2 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar2;
  *param_2 = *param_2 + unaff_BL;
  cVar1 = in(9);
  *unaff_RSI = *unaff_RSI + (char)param_1;
  if (*unaff_RSI != '\0') {
    cRam00000001604c646d = cRam00000001604c646d + cVar1;
  }
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

