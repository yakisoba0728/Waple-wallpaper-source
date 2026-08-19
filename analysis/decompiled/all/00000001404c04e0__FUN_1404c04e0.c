// Function: FUN_1404c04e0
// Addr: 1404c04e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c04e0(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  char *pcVar2;
  byte bVar3;
  byte in_AL;
  undefined7 in_register_00000001;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_EDI;
  
  puVar1 = (uint *)(CONCAT71(in_register_00000001,in_AL) + 0x30a00008);
  *puVar1 = *puVar1 | unaff_EDI;
  bVar3 = *(byte *)CONCAT71(in_register_00000001,in_AL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) - in_AL;
  if (bVar3 < in_AL) {
    *(byte *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) - in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0xd +
                   CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8);
  *pcVar2 = *pcVar2 + unaff_BH;
  *(char *)(param_2 + -0x38) = *(char *)(param_2 + -0x38) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

