// Function: FUN_1404c642c
// Addr: 1404c642c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c642c(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  bool in_CF;
  
  if (!in_CF) {
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)(param_2 + 0x2f) = *(char *)(param_2 + 0x2f) + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x38002f72);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

