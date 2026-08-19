// Function: FUN_1404c5cfc
// Addr: 1404c5cfc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5cfc(byte *param_1,byte param_2)

{
  byte bVar1;
  char in_AL;
  byte bVar2;
  undefined7 in_register_00000001;
  char unaff_BH;
  
  bVar2 = in_AL + 0x82;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
  bVar2 = bVar2 & param_2;
  *(char *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + unaff_BH;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar2;
  cRam000000014cce6d0f = cRam000000014cce6d0f + bVar2 + CARRY1(bVar1,bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

