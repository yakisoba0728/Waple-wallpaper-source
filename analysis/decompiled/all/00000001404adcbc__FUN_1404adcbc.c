// Function: FUN_1404adcbc
// Addr: 1404adcbc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404adcbc(uint *param_1,char *param_2,char param_3)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *param_1 = *param_1 | in_EAX;
  *param_2 = *param_2 + param_3;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) ^ (byte)in_EAX;
  *(byte *)param_1 = (char)*param_1 + (byte)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

