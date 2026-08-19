// Function: FUN_1404af810
// Addr: 1404af810
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af810(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  char cVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  
  cVar2 = (char)(in_EAX | 0x70);
  *(char *)(CONCAT44(in_register_00000004,in_EAX) | 0x70) =
       *(char *)(CONCAT44(in_register_00000004,in_EAX) | 0x70) + cVar2;
  puVar1 = (uint *)(param_2 + (CONCAT44(in_register_00000004,in_EAX) | 0x70));
  *puVar1 = *puVar1 & (in_EAX | 0x70);
  (&stack0x00000000)[param_2 * 2] = (&stack0x00000000)[param_2 * 2] + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

