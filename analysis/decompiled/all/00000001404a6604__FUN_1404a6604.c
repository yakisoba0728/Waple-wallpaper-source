// Function: FUN_1404a6604
// Addr: 1404a6604
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6604(byte *param_1)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  int in_EAX;
  undefined4 in_register_00000004;
  uint unaff_ESI;
  byte in_CF;
  
  bVar2 = *param_1;
  bVar3 = *param_1 + (byte)in_EAX;
  *param_1 = bVar3 + in_CF;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX +
       (uint)(CARRY1(bVar2,(byte)in_EAX) || CARRY1(bVar3,in_CF));
  puVar1 = (uint *)(CONCAT44(in_register_00000004,in_EAX) + 8);
  *puVar1 = *puVar1 | unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

