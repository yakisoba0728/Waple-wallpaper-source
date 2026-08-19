// Function: FUN_1404bee70
// Addr: 1404bee70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bee70(char param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RDI;
  undefined1 in_CF;
  
  bVar2 = *(byte *)(unaff_RDI + -0x67f6ffda);
  *(byte *)(unaff_RDI + -0x67f6ffda) = bVar2 << 6 | (byte)(CONCAT11(in_CF,bVar2) >> 3);
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x1004aea);
  *pcVar1 = *pcVar1 + (char)param_2;
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

