// Function: FUN_1404c77f0
// Addr: 1404c77f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c77f0(char *param_1,ulonglong param_2)

{
  uint *puVar1;
  char *pcVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  pcVar2 = (char *)((param_2 ^ 0x2f) + 0x6a00002f + CONCAT44(unaff_00000034,unaff_ESI) * 8);
  *pcVar2 = *pcVar2 + (char)param_1;
  *param_1 = *param_1 + (char)in_EAX;
  puVar1 = (uint *)(CONCAT44(in_register_00000004,in_EAX) + CONCAT44(in_register_00000004,in_EAX));
  *puVar1 = *puVar1 | in_EAX;
  puVar1 = (uint *)(CONCAT44(unaff_00000034,unaff_ESI) + CONCAT44(in_register_00000004,in_EAX));
  *puVar1 = *puVar1 | unaff_ESI;
  *param_1 = *param_1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

