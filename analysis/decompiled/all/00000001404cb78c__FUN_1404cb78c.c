// Function: FUN_1404cb78c
// Addr: 1404cb78c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb78c(longlong param_1,longlong param_2)

{
  uint *puVar1;
  byte in_AL;
  byte bVar2;
  undefined7 in_register_00000001;
  uint unaff_EBX;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  
  *(uint *)(param_2 + 0x6003e005) = *(uint *)(param_2 + 0x6003e005) | unaff_ESI;
  bVar2 = in_AL & (byte)param_2;
  *(char *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + (char)param_1;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
  puVar1 = (uint *)(CONCAT71(in_register_00000001,bVar2) + param_1);
  *puVar1 = *puVar1 & unaff_EBX;
  (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI) * 8] =
       (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI) * 8] + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

