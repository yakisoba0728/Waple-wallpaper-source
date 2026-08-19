// Function: FUN_1404b5c64
// Addr: 1404b5c64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5c64(char *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  char in_CF;
  
  while (param_1 = param_1 + -1, param_1 != (char *)0x0) {
    out((short)param_2,in_EAX);
    in_EAX = CONCAT31((int3)(in_EAX >> 8),
                      ((char)in_EAX - *(char *)CONCAT44(in_register_00000004,in_EAX)) - in_CF);
    *param_4 = *param_4;
    *param_2 = *param_2 | in_EAX;
    *param_1 = *param_1 + (char)param_1;
    in_CF = *(uint *)CONCAT44(in_register_00000004,in_EAX) < in_EAX;
    *(uint *)CONCAT44(in_register_00000004,in_EAX) =
         *(int *)CONCAT44(in_register_00000004,in_EAX) - in_EAX;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

