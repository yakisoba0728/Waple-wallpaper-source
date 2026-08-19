// Function: FUN_1404cc510
// Addr: 1404cc510
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc510(char *param_1)

{
  code *pcVar1;
  byte in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BH;
  char unaff_R12B;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  if ((char)in_AL < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)in_AL)) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,(ushort)in_AL)) + in_AL;
  param_1[-0x1c] = param_1[-0x1c] + unaff_BH;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

