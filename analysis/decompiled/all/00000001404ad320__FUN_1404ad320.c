// Function: FUN_1404ad320
// Addr: 1404ad320
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad320(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  char in_CF;
  
  bVar1 = *param_1;
  *param_1 = *param_1 + in_AL;
  iVar2 = *(int *)CONCAT71(in_register_00000001,in_AL);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + -in_CF;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + -in_CF;
  if ((int)param_1 + iVar2 + (uint)CARRY1(bVar1,in_AL) != 1 &&
      *(char *)CONCAT71(unaff_00000019,unaff_BL) != '\0') {
    *unaff_RSI = *unaff_RSI + unaff_BL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(byte *)(CONCAT71(in_register_00000001,in_AL) ^ 0x15) =
       *(byte *)(CONCAT71(in_register_00000001,in_AL) ^ 0x15) >> 1 |
       *(char *)(CONCAT71(in_register_00000001,in_AL) ^ 0x15) << 7;
  if (((*(byte *)(CONCAT71(in_register_00000001,in_AL) ^ 0x15) & 0x40) != 0) ==
      *(char *)(CONCAT71(in_register_00000001,in_AL) ^ 0x15) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

