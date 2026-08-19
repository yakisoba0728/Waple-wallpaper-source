// Function: FUN_1404b7850
// Addr: 1404b7850
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7850(char *param_1)

{
  uint uVar1;
  undefined8 in_RAX;
  byte in_CF;
  char *pcVar2;
  
  uVar1 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x82) + -0x4b776800) - (uint)in_CF;
  pcVar2 = (char *)(ulonglong)uVar1;
  *param_1 = *param_1 + (char)(uVar1 >> 8);
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x4fffe27e] = pcVar2[-0x4fffe27e] + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

