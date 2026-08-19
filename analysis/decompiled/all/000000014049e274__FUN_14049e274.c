// Function: FUN_14049e274
// Addr: 14049e274
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e274(char param_1,byte *param_2)

{
  char *pcVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  undefined4 *unaff_RBX;
  
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x210049e1);
  *pcVar1 = *pcVar1 + param_1;
  *param_2 = *param_2 | (byte)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + param_1;
  *unaff_RBX = in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

