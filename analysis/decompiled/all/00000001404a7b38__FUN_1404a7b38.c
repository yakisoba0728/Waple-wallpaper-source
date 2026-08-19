// Function: FUN_1404a7b38
// Addr: 1404a7b38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7b38(char *param_1,longlong param_2)

{
  byte bVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  byte unaff_BH;
  bool in_CF;
  bool in_ZF;
  
  if (!in_CF && !in_ZF) {
    bVar1 = *(byte *)CONCAT71(in_register_00000001,in_AL);
    *(byte *)(param_2 + 0x4a) = *(byte *)(param_2 + 0x4a) ^ unaff_BH;
    *param_1 = *param_1 + (in_AL | bVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

