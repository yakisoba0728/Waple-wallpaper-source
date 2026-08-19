// Function: FUN_1404c41c4
// Addr: 1404c41c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c41c4(longlong param_1,int param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char cVar2;
  char in_CF;
  
  cVar2 = (char)((uint)param_2 >> 8);
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + param_1);
  *pcVar1 = *pcVar1 + cVar2 + in_CF;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)param_2;
  *(int *)(CONCAT71(in_register_00000001,in_AL) | 0x70) =
       *(int *)(CONCAT71(in_register_00000001,in_AL) | 0x70) + param_2;
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + cVar2;
  *(char *)(CONCAT71(in_register_00000001,in_AL) | 0x70) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) | 0x70) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

