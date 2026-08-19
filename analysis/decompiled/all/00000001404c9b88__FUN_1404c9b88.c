// Function: FUN_1404c9b88
// Addr: 1404c9b88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9b88(undefined8 param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  undefined2 in_DS;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *(undefined2 *)(param_2 + 0x21004c) = in_DS;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *param_4 = *param_4 +
             (*(byte *)CONCAT44(in_register_00000004,CONCAT31((int3)(in_EAX >> 8),0x44)) ^ 0x44);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

