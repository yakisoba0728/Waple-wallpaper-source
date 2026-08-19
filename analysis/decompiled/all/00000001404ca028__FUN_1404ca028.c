// Function: FUN_1404ca028
// Addr: 1404ca028
// Size: 1 bytes


void FUN_1404ca028(char *param_1,char *param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RDI;
  char unaff_R12B;
  
  *(char *)(unaff_RDI + 0x32) = *(char *)(unaff_RDI + 0x32) + unaff_BH;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x32 +
                   CONCAT71(in_register_00000001,in_AL) * 4);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(unaff_RDI + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 4);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

