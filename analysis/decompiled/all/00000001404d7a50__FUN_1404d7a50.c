// Function: FUN_1404d7a50
// Addr: 1404d7a50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d79ee) */
/* WARNING: Removing unreachable block (ram,0x0001404d79fb) */
/* WARNING: Removing unreachable block (ram,0x0001404d7a01) */
/* WARNING: Removing unreachable block (ram,0x0001404d7a48) */

void FUN_1404d7a50(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_2);
  *pbVar1 = *pbVar1 | (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

