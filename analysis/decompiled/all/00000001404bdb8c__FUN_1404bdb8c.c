// Function: FUN_1404bdb8c
// Addr: 1404bdb8c
// Size: 1 bytes


void FUN_1404bdb8c(undefined8 param_1,char param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  
  *(undefined4 *)(unaff_RBP + 0x25) = unaff_EBX;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x21004aea);
  *pcVar1 = *pcVar1 + param_2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

