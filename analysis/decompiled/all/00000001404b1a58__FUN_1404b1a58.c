// Function: FUN_1404b1a58
// Addr: 1404b1a58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1a58(undefined8 param_1,int *param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *param_2 = *param_2 + (int)&stack0xfffffffffffffff8;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

