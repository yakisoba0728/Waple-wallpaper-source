// Function: FUN_1404d1b30
// Addr: 1404d1b30
// Size: 1 bytes


void FUN_1404d1b30(undefined8 param_1,char *param_2)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_DIL;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *param_2 = *param_2 + unaff_DIL;
  return;
}

