// Function: FUN_1404bee50
// Addr: 1404bee50
// Size: 1 bytes


void FUN_1404bee50(char param_1,char param_2)

{
  char *pcVar1;
  byte bVar2;
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RDI;
  undefined1 in_CF;
  
  bVar2 = *(byte *)(unaff_RDI + -0x67f6ffda);
  *(byte *)(unaff_RDI + -0x67f6ffda) = bVar2 << 6 | (byte)(CONCAT11(in_CF,bVar2) >> 3);
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x21004aea);
  *pcVar1 = *pcVar1 + param_2;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + param_1;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

