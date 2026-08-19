// Function: FUN_1404a38c4
// Addr: 1404a38c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a38c4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_BH;
  bool in_OF;
  bool bVar2;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  bVar2 = SCARRY1(cRam00000000a8000ce2,unaff_BH);
  cRam00000000a8000ce2 = cRam00000000a8000ce2 + unaff_BH;
  if (bVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x70);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

