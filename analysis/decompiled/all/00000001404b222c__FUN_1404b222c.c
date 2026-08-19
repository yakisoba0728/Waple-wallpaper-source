// Function: FUN_1404b222c
// Addr: 1404b222c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b222c(longlong param_1,byte *param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  char unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  char *unaff_RSI;
  char in_CF;
  
  unaff_RSI[0x16] = unaff_RSI[0x16] + unaff_BH + in_CF;
  cVar2 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + in_AH;
  if (*unaff_RSI != '\0' && SCARRY1(cVar2,in_AH) == *unaff_RSI < '\0') {
    *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
         *(byte *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) &
         (byte)param_1;
    piVar1 = (int *)(CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
                    param_1);
    *piVar1 = *piVar1 + CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    unaff_RSI[(longlong)&stack0x00000000] = unaff_RSI[(longlong)&stack0x00000000] + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 >> 1 | *param_2 << 7;
  *(undefined1 *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(undefined1 *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

