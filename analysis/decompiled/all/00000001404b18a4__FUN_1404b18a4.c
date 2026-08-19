// Function: FUN_1404b18a4
// Addr: 1404b18a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b18a4(byte *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte in_AL;
  undefined7 in_register_00000001;
  uint unaff_ESP;
  char *unaff_RSI;
  char *unaff_RDI;
  longlong in_FS_OFFSET;
  char in_CF;
  
  *unaff_RDI = *unaff_RDI + 'K' + in_CF;
  bVar2 = *param_1;
  *param_1 = *param_1 + in_AL;
  *unaff_RSI = *unaff_RSI + in_AL + CARRY1(bVar2,in_AL);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)param_2;
  if (*(char *)CONCAT71(in_register_00000001,in_AL) != '\0') {
    *(char *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) + (char)param_2;
    pbVar1 = (byte *)(in_FS_OFFSET + CONCAT71(in_register_00000001,in_AL));
    *pbVar1 = *pbVar1 | in_AL;
    *param_2 = *param_2 + (char)((ulonglong)param_2 >> 8);
  }
  uRam00000001747018c2 = uRam00000001747018c2 & unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

