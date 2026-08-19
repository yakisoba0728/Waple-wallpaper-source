// Function: FUN_1404d4754
// Addr: 1404d4754
// Size: 1 bytes


void FUN_1404d4754(byte param_1)

{
  code *pcVar1;
  byte in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  uRam000000019452475c = uRam000000019452475c & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
  ;
  pcVar1 = (code *)swi(1);
  (*pcVar1)((param_1 | 0x36) +
            (in_AL | *(byte *)CONCAT44(in_register_00000004,
                                       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))));
  return;
}

