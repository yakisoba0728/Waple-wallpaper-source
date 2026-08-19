// Function: FUN_1404b24d8
// Addr: 1404b24d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b24d8(char param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_SPL;
  undefined7 unaff_00000021;
  
  *param_4 = *param_4 + unaff_SPL;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + param_2 * 8);
  *pcVar1 = *pcVar1 + param_1;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 6)
       = *(uint *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 6) |
         CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) | 6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

