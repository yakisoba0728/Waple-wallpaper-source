// Function: FUN_1404c18d8
// Addr: 1404c18d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c18d8(char param_1)

{
  char *pcVar1;
  undefined1 in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  bool bVar2;
  
  bVar2 = CARRY1(bRam00000001754c64f6,in_AH);
  bRam00000001754c64f6 = bRam00000001754c64f6 + in_AH;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x50 +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = (*pcVar1 - param_1) - bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

