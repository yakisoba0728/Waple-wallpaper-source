// Function: FUN_1404c7c68
// Addr: 1404c7c68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7c68(char *param_1,undefined2 param_2)

{
  char *pcVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    *param_1 = *param_1 + unaff_R12B;
    *(byte *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
    *(byte *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
    out(*unaff_RSI,param_2);
    *(byte *)CONCAT71(in_register_00000001,in_AL) =
         *(byte *)CONCAT71(in_register_00000001,in_AL) ^ in_AL;
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4c + unaff_RDI * 2);
    *pcVar1 = *pcVar1 + unaff_BH;
    *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

