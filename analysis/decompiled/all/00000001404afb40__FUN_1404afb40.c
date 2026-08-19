// Function: FUN_1404afb40
// Addr: 1404afb40
// Size: 1 bytes


void FUN_1404afb40(undefined1 *param_1)

{
  code *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  
  *param_1 = *param_1;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

