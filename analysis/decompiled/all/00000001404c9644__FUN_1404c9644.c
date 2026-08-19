// Function: FUN_1404c9644
// Addr: 1404c9644
// Size: 1 bytes


void FUN_1404c9644(void)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  pcVar1 = (char *)(unaff_RSI +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *pcVar1 = *pcVar1 + in_AH;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0xd9))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0xd9))) ^
       CONCAT22(in_register_00000002,CONCAT11(in_AH,0xd9));
  return;
}

