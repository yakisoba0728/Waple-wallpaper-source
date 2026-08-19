// Function: FUN_1404b7290
// Addr: 1404b7290
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7290(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  byte in_AH;
  byte bVar2;
  undefined6 in_register_00000002;
  
  bVar2 = in_AH | (byte)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(bVar2,in_AL)) + 0x7f001d15);
  *pcVar1 = *pcVar1 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

