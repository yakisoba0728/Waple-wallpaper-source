// Function: FUN_1404aaaa8
// Addr: 1404aaaa8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aaaa8(undefined1 *param_1,longlong param_2)

{
  char in_AL;
  char cVar1;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  *param_1 = *param_1;
  cVar1 = in_AL + '\x02';
  (&stack0x00000000)[param_2 * 2] = (&stack0x00000000)[param_2 * 2] + cVar1;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x24,cVar1))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(0x24,cVar1))) |
       CONCAT22(in_register_00000002,CONCAT11(0x24,cVar1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

