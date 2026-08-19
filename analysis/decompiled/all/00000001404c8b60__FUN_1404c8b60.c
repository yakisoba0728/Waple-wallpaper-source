// Function: FUN_1404c8b60
// Addr: 1404c8b60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8b60(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) ^ in_EAX;
  uVar1 = in(param_2);
  *(undefined4 *)CONCAT44(in_register_00000004,in_EAX) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

