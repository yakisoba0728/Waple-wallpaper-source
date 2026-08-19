// Function: FUN_1404ab588
// Addr: 1404ab588
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab588(char *param_1,longlong param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  char in_AL;
  undefined6 in_register_00000002;
  
  *(char *)(param_2 + -0x77fff0ee) =
       *(char *)(param_2 + -0x77fff0ee) + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + 'J';
  *(char *)CONCAT62(in_register_00000002,CONCAT11(0x4a,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(0x4a,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(0x4a,in_AL)) + 0x12);
  *pcVar1 = *pcVar1 + in_AL;
  uVar2 = TaskRegister();
  *(undefined2 *)(param_2 * 2 + 0xf) = uVar2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(0x4a,in_AL)) + 0x21004ab4);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

