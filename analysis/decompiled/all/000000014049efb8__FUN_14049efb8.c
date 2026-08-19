// Function: FUN_14049efb8
// Addr: 14049efb8
// Size: 1 bytes


void FUN_14049efb8(void)

{
  code *pcVar1;
  int in_EAX;
  undefined4 in_register_00000004;
  
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

