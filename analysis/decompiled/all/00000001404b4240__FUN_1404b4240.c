// Function: FUN_1404b4240
// Addr: 1404b4240
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4240(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  uint *puVar2;
  longlong unaff_RSI;
  byte in_CF;
  bool in_SF;
  
  if (in_SF) {
    *(byte *)CONCAT71(in_register_00000001,in_AL) =
         (*(char *)CONCAT71(in_register_00000001,in_AL) - in_AL) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = (uint *)(ulonglong)((int)unaff_RSI + *(int *)(unaff_RSI + param_2) + (uint)in_CF);
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)param_2;
  piVar1 = (int *)(CONCAT71(in_register_00000001,in_AL) + CONCAT71(in_register_00000001,in_AL));
  *piVar1 = *piVar1 + (int)param_2;
  *(byte *)(CONCAT71(in_register_00000001,in_AL) | 0x70) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) | 0x70) + (in_AL | 0x70);
  *puVar2 = *puVar2 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

