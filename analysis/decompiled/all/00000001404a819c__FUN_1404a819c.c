// Function: FUN_1404a819c
// Addr: 1404a819c
// Size: 1 bytes


void FUN_1404a819c(undefined8 param_1,undefined8 param_2,byte *param_3,char *param_4)

{
  byte bVar1;
  byte in_AL;
  byte bVar2;
  undefined7 in_register_00000001;
  char unaff_SPL;
  
  bVar2 = in_AL | *(byte *)CONCAT71(in_register_00000001,in_AL);
  bVar1 = *(byte *)CONCAT71(in_register_00000001,bVar2);
  *param_4 = *param_4 + unaff_SPL;
  *param_3 = *param_3 | bVar2 | bVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

