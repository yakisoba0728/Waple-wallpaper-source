// Function: FUN_1404cd420
// Addr: 1404cd420
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd420(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  uint *puVar2;
  byte bVar3;
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RDI;
  float10 in_ST0;
  
  *(longlong *)(unaff_RDI + 0x41) = (longlong)in_ST0;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)((ulonglong)param_1 >> 8);
  puVar2 = (uint *)(CONCAT71(in_register_00000001,in_AL) + 0x21 +
                   CONCAT71(in_register_00000001,in_AL));
  bVar3 = (byte)param_1 & 0x1f;
  *puVar2 = *puVar2 >> bVar3 | *puVar2 << 0x20 - bVar3;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x22ffbeb1);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

