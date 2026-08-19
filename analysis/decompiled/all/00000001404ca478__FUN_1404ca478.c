// Function: FUN_1404ca478
// Addr: 1404ca478
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca478(void)

{
  uint *puVar1;
  char in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined7 unaff_00000019;
  uint unaff_ESI;
  
  *(undefined1 *)(CONCAT71(unaff_00000019,unaff_BL) + 0x21004c) = in_AH;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  cRam00000000c84cd75e = cRam00000000c84cd75e + unaff_BL;
  uRam720f00060f01004c = CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  puVar1 = (uint *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 8);
  *puVar1 = *puVar1 | unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

