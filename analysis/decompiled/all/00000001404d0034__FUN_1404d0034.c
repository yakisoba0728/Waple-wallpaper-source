// Function: FUN_1404d0034
// Addr: 1404d0034
// Size: 1 bytes


void FUN_1404d0034(char param_1)

{
  code *pcVar1;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_1;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}

