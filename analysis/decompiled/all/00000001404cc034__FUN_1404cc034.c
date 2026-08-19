// Function: FUN_1404cc034
// Addr: 1404cc034
// Size: 1 bytes


void FUN_1404cc034(char *param_1)

{
  char in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  char *unaff_RSI;
  char unaff_R12B;
  char in_CF;
  
  cVar1 = (in_AL + 'A') - in_CF;
  *param_1 = *param_1 + unaff_R12B;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

