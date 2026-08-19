// Function: FUN_1404b4794
// Addr: 1404b4794
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4794(undefined8 param_1,byte param_2)

{
  int in_EAX;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       (*(int *)CONCAT44(in_register_00000004,in_EAX) - in_EAX) - (uint)CARRY1(param_2,param_2);
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) - in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

