// Function: FUN_1404c5148
// Addr: 1404c5148
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5148(byte *param_1,byte param_2)

{
  char *pcVar1;
  char in_AL;
  byte bVar2;
  undefined7 in_register_00000001;
  char *unaff_RBX;
  char in_CF;
  
  bVar2 = (in_AL - *param_1) - in_CF;
  *unaff_RBX = *unaff_RBX + (char)param_1;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
  bVar2 = bVar2 & param_2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,bVar2) + 0x1000002);
  *pcVar1 = *pcVar1 + param_2;
  *param_1 = *param_1 | bVar2;
  *(char *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

