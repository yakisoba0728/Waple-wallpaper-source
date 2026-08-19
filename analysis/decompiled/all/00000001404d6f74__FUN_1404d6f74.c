// Function: FUN_1404d6f74
// Addr: 1404d6f74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6f74(char param_1,undefined2 param_2,char param_3,char *param_4)

{
  byte in_AL;
  undefined7 in_register_00000001;
  byte *unaff_RBX;
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  *param_4 = *param_4 + param_3;
  *unaff_RBX = *unaff_RBX | in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

