// Function: FUN_1404aa028
// Addr: 1404aa028
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa028(undefined8 param_1)

{
  byte *pbVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + 0xf);
  *pbVar1 = *pbVar1 & (byte)((ulonglong)param_1 >> 8);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  *unaff_RSI = *unaff_RSI + (in_AL ^ 0x26);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

