// Function: FUN_1404abca0
// Addr: 1404abca0
// Size: 1 bytes


void FUN_1404abca0(char param_1)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  TaskRegister(*(undefined2 *)(CONCAT71(in_register_00000001,in_AL) + 0x21004abb));
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + param_1;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

