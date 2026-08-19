// Function: FUN_1404a3a70
// Addr: 1404a3a70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3a70(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  byte in_AL;
  byte in_AH;
  byte bVar2;
  undefined6 in_register_00000002;
  
  bVar2 = in_AH | in_AL;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar2,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar2,in_AL)) ^ in_AL;
  puVar1 = (uint *)(CONCAT62(in_register_00000002,CONCAT11(bVar2,in_AL)) + -0x6fe1fffa);
  *puVar1 = *puVar1 | param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

